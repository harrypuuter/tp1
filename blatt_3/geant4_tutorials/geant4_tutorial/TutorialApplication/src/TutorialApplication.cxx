////////////////////////////////////////////////////////////////////////////////
//
// TutorialApplication
// -------------------
//
//            11/03/2008 Philipp Schieferdecker <philipp.schieferdecker@cern.ch>
////////////////////////////////////////////////////////////////////////////////

#include "TutorialApplication.hh"
#include "TutorialStack.hh"

#include <iostream>
#include <cmath>

#include <TROOT.h>
#include <TInterpreter.h>
#include <TVirtualMC.h>
#include <TGeoBBox.h>
#include <TLorentzVector.h>
#include <TStopwatch.h>
#include <TView.h>

#include <stdlib.h>


using namespace std;


////////////////////////////////////////////////////////////////////////////////
// ROOT ClassImp Macro
////////////////////////////////////////////////////////////////////////////////
ClassImp(TutorialApplication)


////////////////////////////////////////////////////////////////////////////////
// construction / destruction
////////////////////////////////////////////////////////////////////////////////

//______________________________________________________________________________
TutorialApplication::TutorialApplication(const char* name, const char* title)
: TVirtualMCApplication(name,title)
  , fPrimaryMomentum(1.0)
  , fPrimaryPDG(-13)
  , fCurrentTrack(0)
  , fGeoName("geometry/g1")
  , fInit(false)
  , fPad(0)
  , hEdepLong(0)
  , hEdepTrans(0)
  , hPrimaryEnergy(0)
{
  fTopFolder = gROOT->GetRootFolder()->AddFolder("Geant4","Geant4");
  gROOT->GetListOfBrowsables()->Add(fTopFolder,"Geant4");
  fHistFolder = fTopFolder->AddFolder("Histograms","Geant Histograms");
  new TGeoManager("GeometryManager","Geometry Manager for Geant");
  fTopFolder->Add(gGeoManager);
  
  fStack = new TutorialStack();
}


//______________________________________________________________________________
TutorialApplication::~TutorialApplication()
{
  delete fStack;
  delete gMC; gMC = 0;
  gGeoManager->Delete(); gGeoManager = 0;
  fHistFolder->Delete();
  fTopFolder->Delete();
  delete hEdepTrans;
  delete hEdepLong;
  delete hPrimaryEnergy;
}


////////////////////////////////////////////////////////////////////////////////
// implementation of member functions
////////////////////////////////////////////////////////////////////////////////

//______________________________________________________________________________
void TutorialApplication::InitMC(const char* setup) 
{
  if( fInit) {
    cout<<"ERROR! You cannot reinitialize Geant. Restart ROOT instead."<<endl;
    return;
  }
  
  //gROOT->LoadMacro(setup);
  //gInterpreter->ProcessLine("Config()");
  
  fGeoName = setup;
  
  gMC->SetStack(fStack);
  gMC->Init();
  gMC->BuildPhysics();
  

  // Should this really be part of InitMC() ?
  Double_t min,max;
  TGeoShape* shape = gGeoManager->GetTopVolume()->GetShape();
  shape->GetAxisRange(1,min,max);
  Double_t topVolumeLength = max - min;
  shape->GetAxisRange(2,min,max);
  Double_t topVolumeWidth = max - min;
				 
  hEdepLong = new TH1F("hEdepLong","longitudinal energy deposition",
		       100,-1*topVolumeLength/4.,topVolumeLength/4.);
  hEdepLong->SetXTitle("x [cm]");
  hEdepLong->SetYTitle("E_{dep} [GeV]");

  hEdepTrans = new TH1F("hEdepTrans","transverse energy deposition",
			100,0,topVolumeWidth/2);
  hEdepTrans->SetXTitle("r [cm]");
  hEdepTrans->SetYTitle("E_{dep} [GeV]");

  hPrimaryEnergy = new TProfile("hPrimaryEnergy","energy of primary particle",
				100,-1*topVolumeLength/4.,topVolumeLength/4.);
  hPrimaryEnergy->SetXTitle("s [cm]");
  hPrimaryEnergy->SetYTitle("E [GeV]");

  fHistFolder->Add(hEdepLong);
  fHistFolder->Add(hEdepTrans);
  fHistFolder->Add(hPrimaryEnergy);
  
  if(fPad) { if (fPad!=gPad) gPad->Close(); fPad->cd(); }
  else     { fPad = gPad; }
  
  gGeoManager->SetVisLevel(4);
  gGeoManager->GetTopVolume()->Draw();
  gGeoManager->SetExplodedView(0);
  
  DrawEvent();

  fInit = true;
}


//______________________________________________________________________________
void TutorialApplication::RunMC(Int_t nofEvents, bool draw)
{ 
  if(!fInit) {
    cout<<"ERROR! Call InitMC() first!"<<endl;
    return;
  }
  
  TStopwatch timer;   
  
  timer.Start();  
  gMC->ProcessRun(nofEvents);
  timer.Stop();
  cout<<"RunMC timing: real time:"<<timer.RealTime()
      <<"s  CPU time:"<<timer.CpuTime()<<"s"<<endl; 
  if(draw) DrawEvent();
}


//______________________________________________________________________________
void TutorialApplication::FinishRun()
{
  hEdepLong->Reset();
  hEdepTrans->Reset();
  hPrimaryEnergy->Reset();
}


//______________________________________________________________________________
void TutorialApplication::ConstructMaterials()
{
  Double_t a;
  Double_t z;
  Double_t density;
  Double_t radl;
  Double_t absl;
  
  //
  // MATERIALS
  //
  
  // Vacuum
  a       = 1.0e-16;
  z       = 1.0e-16;
  density = 1.0e-16;
  radl    = 1.0e+16;
  absl    =     0.0;
  Int_t imatVac = 1;
  gGeoManager->Material("Vacuum", a, z, density, imatVac, radl, absl);
  
  // Pb
  a       = 207.2;
  z       =  82.0;
  density = 11.35;
  radl    =  0.56;
  absl    =   0.0;
  Int_t imatPb = 2;
  gGeoManager->Material("Pb", a, z, density, imatPb, radl, absl);
  
  // ArgonGas
  a       =     39.95;
  z       =        18;
  density = 1.782e-03;
  radl    =      14.0;
  absl    =       0.0;
  Int_t imatAr = 3;
  gGeoManager->Material("ArgonGas", a, z, density, imatAr, radl, absl);
  
  // Fe
  a       = 55.845;
  z       =     26;
  density =   7.87;
  radl    =   1.76;
  absl    =    0.0;
  Int_t imatFe = 4;  
  gGeoManager->Material("Fe", a, z, density, imatFe, radl, absl);  

  // U
  a       = 238.0289;
  z       =       92;
  density =    18.95;
  radl    =     0.32;
  absl    =      0.0;
  Int_t imatU = 5;  
  gGeoManager->Material("U", a, z, density, imatU, radl, absl);  

  // Scintillator
  a       =1.847;
  z       =    1;
  density =1.032;
  radl    = 42.5;
  absl    =  0.0;
  Int_t imatSci = 6;  
  gGeoManager->Material("Scintillator", a, z, density, imatSci, radl, absl);  
 

  //
  // TRACKING MEDIA
  //
  Int_t    ifield =     0;  // No magnetic field
  Double_t fieldm =    0.;  //
  Double_t epsil  =  .001;  // Tracking precision,
  Double_t stemax = -0.01;  // Maximum displacement for multiple scat
  Double_t tmaxfd =  -20.;  // Maximum angle due to field deflection
  Double_t deemax =   -.3;  // Maximum fractional energy loss, DLS
  Double_t stmin  =   -.8;
  
  gGeoManager->Medium("Vacuum", 1, imatVac,
		      0, ifield, fieldm, tmaxfd, stemax, deemax, epsil, stmin); 
  gGeoManager->Medium("Pb", 2, imatPb,
		      0, ifield, fieldm, tmaxfd, stemax, deemax, epsil, stmin); 
  gGeoManager->Medium("ArgonGas", 3, imatAr,
		      0, ifield, fieldm, tmaxfd, stemax, deemax, epsil, stmin); 
  gGeoManager->Medium("Fe", 4, imatFe,
		      0, ifield, fieldm, tmaxfd, stemax, deemax, epsil, stmin); 
  gGeoManager->Medium("U", 5, imatU,
		      0, ifield, fieldm, tmaxfd, stemax, deemax, epsil, stmin); 
  gGeoManager->Medium("Scintillator", 6, imatSci,
		      0, ifield, fieldm, tmaxfd, stemax, deemax, epsil, stmin); 
  
  return;
}


//______________________________________________________________________________
void TutorialApplication::ConstructVolumes()
{
  TString fullname(fGeoName);
  TString dirname(fGeoName);
  TString command(fGeoName); 
  if(fullname.Contains('/')) {
    int index = fullname.Last('/') + 1;
    dirname.Remove(index,fullname.Length() - index);
    command.Remove(0,index);
  }
  else {
    dirname = "";
  }
  TString argument("()");
  if( command.Contains('(') ) {
    int index = command.Index('(');
    argument = command;
    command.Remove(index,command.Length() - index);
    argument.Remove(0,index);
  }
  //cout << dirname << " , " << command << " , " << argument << endl;
  
  TString macro(dirname);
  macro.Append(command);
  macro.Append(".C");
  gROOT->LoadMacro(macro);
  
  TString line(command);
  line.Append(argument);
  line.Append(";");
  gROOT->ProcessLine(line);

  return;
}


//______________________________________________________________________________
void TutorialApplication::ConstructGeometry()
{
  ConstructMaterials();
  ConstructVolumes();
}


//______________________________________________________________________________
void TutorialApplication::InitGeometry()
{
  
}


//______________________________________________________________________________
void TutorialApplication::GeneratePrimaries()
{ 
  // Track ID (filled by stack)
  Int_t ntr;
  
  // Option: to be tracked
  Int_t toBeDone = 1;
  
  //calculate energy
  Double_t m =TDatabasePDG::Instance()->GetParticle(fPrimaryPDG)->Mass();
  Double_t e =std::sqrt(fPrimaryMomentum * fPrimaryMomentum + m * m);
  Double_t vx=-((TGeoBBox*)gGeoManager->GetMasterVolume()->GetShape())->GetDX();;
  // Add particle to stack
  //PushTrack(Int_t toBeDone, Int_t parent, Int_t pdg,
  //          Double_t px, Double_t py, Double_t pz, 
  //          Double_t e, Double_t vx, Double_t vy, Double_t vz,
  //          Double_t tof, Double_t polx, 
  //          Double_t poly, Double_t polz, TMCProcess mech,
  //          Int_t& ntr, Double_t weight, Int_t is)
  fStack->PushTrack(toBeDone, -1, fPrimaryPDG,
		    fPrimaryMomentum,0,0,e,
		    vx,0,0,0,0,0,0,kPPrimary,ntr,1.,0);
}


//______________________________________________________________________________
void TutorialApplication::PreTrack()
{
  //new current track
  fCurrentTrack = gGeoManager->GetTrack(fStack->GetCurrentTrackNumber());
}


//______________________________________________________________________________
void TutorialApplication::Stepping()
{ 
  // add point to track for drawing
  Double_t x,y,z;
  gMC->TrackPosition(x,y,z);  
  fCurrentTrack->AddPoint(x,y,z,gMC->TrackTime());
  
  Double_t edep =  gMC->Edep();
  
  //cout << "volume: " << gMC->CurrentVolName() << endl;
  //cout << "medium: " << gMC->GetMedium() << endl;
  
  if( edep > 0 )  {
    //cout << x << endl;
    hEdepLong->Fill(x,edep);
    hEdepTrans->Fill(sqrt(y*y + z * z),edep);
  } 

  if( fCurrentTrack->GetId() == 0 ) {
    Double_t px,py,pz,e;
    gMC->TrackMomentum(px,py,pz,e);
    hPrimaryEnergy->Fill(x,e);
  }
  //cout << "step:" << gMC->Edep() << endl;
}


//______________________________________________________________________________
void TutorialApplication::FinishEvent()
{
  //cout << hEdepLong->Integral() << " , " << hEdepTrans->Integral()
  //	    <<endl;
  //hEdepLong->Reset();
  //hEdepTrans->Reset();
}


//______________________________________________________________________________
void TutorialApplication::DrawEvent()
{ 
  fPad->cd();

  //fPad->Clear(); 
  //gGeoManager->GetTopVolume()->Draw();

  TView* view = gPad->GetView();
  view->Front();
  view->SetParallel();
  gGeoManager->DrawTracks("/*");
  gGeoManager->SetVisLevel(4);
  view->Front();
  view->SetParallel();
  //view->Update();
}


//______________________________________________________________________________
void TutorialApplication::Help()
{
  cout<<"Welcome to the Tutorial MC application using Geant 4!"<<endl;
  cout<<"List of commands:"<<endl;
  cout<<GetName()<<".InitMC(\"pbbox\")       : initializes the geometry."<<endl;
  cout<<GetName()<<".RunMC(5)                : generates five events."<<endl;
  cout<<GetName()<<".FinishRun()             : resets the histograms."<<endl;
  cout<<GetName()<<".DrawEvent()             : draws the last event."<<endl;
  cout<<GetName()<<".SetPrimaryMomentum(5.0) : sets the momentum of the incoming particle to 5 GeV."<<endl;
  cout<<GetName()<<".SetPrimaryPDG(11)       : sets the PDG code of the incoming particle to eleven."<<endl;
  cout<<GetName()<<".SetPrimaryGeant(3)      : sets the Geant code of the incoming particle to three."<<endl; 
  cout<<GetName()<<".Help()                  : prints this text."<<endl;
}

