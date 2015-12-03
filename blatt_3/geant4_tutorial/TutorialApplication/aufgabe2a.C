void aufgabe2a()
{
  ////////////////////////////////////////////////////////////////////////////////
  // first include the basics as in run_g4.C
  ////////////////////////////////////////////////////////////////////////////////

   // Load basic libraries
  gROOT->LoadMacro("/opt/geant4_vmc.2.15a/examples/macro/basiclibs.C");
  basiclibs();

  // Load Geant4 libraries
  gROOT->LoadMacro("/opt/geant4_vmc.2.15a/examples/macro/g4libs.C");
  g4libs();
  
  // Load the tutorial application library
  gSystem->Load("libTutorialApplication");
  
  // MC application
  TutorialApplication* app 
    = new TutorialApplication("TutorialApplication",
			      "Tutorial Application for HEP Lecture @EKP");
  
  // configure Geant4
  gROOT->LoadMacro("g4Config.C");
  Config();

  // instantiate graphical user interface for tutorial application
  new TutorialMainFrame(app);

   ////////////////////////////////////////////////////////////////////////////////
  // then work exercise 2a)
  ////////////////////////////////////////////////////////////////////////////////

  // FIXME make available the script XofFirstSecondary as mentioned on the UB
  gROOT->ProcessLine(".L XofFirstSecondary.C");
  // FIXME load geometry g1
  app->InitMC("geometry/g1");
  // FIXME use photon pdg=22
  app->SetPrimaryPDG(22);
  // FIXME set momentum to 1 GeV
  app->SetPrimaryMomentum(1);
  // construct a new histogram for the x-position of the first vertex
  TH1F* hx = new TH1F("hx","x of first vertex",20,-1,1);

  // simulate 500 events and fill the x-position of the first production process into hx
  for(Int_t i = 0 ; i < 1000 ; ++i) {
    // FIXME Insert code to run a single event, then use the macro XofFirstSecondary that
    // was imported above to fill the histogram
    app->RunMC();
    float x = XofFirstSecondary();
    hx->Fill(x);
  }


  // construct a new canvas where the result will be plotted
  TCanvas* c = new TCanvas("caufgabe2a","Aufgabe 2a");
  c->Divide(2,1);
  c->cd(1);
  // draw the histgram
  hx->GetXaxis()->SetTitle("x of first vertex [cm]");
  hx->GetYaxis()->SetTitle("number of entries");
  hx->Draw();


  // FIXME calculate the 54% quantile of the histogram (radiation length)
  c->cd(2);
  Double_t qn[1];
  Double_t value[1];
  value[0] = 0.54;
  hx->GetQuantiles(1,qn,value);
  cout << "After "<< qn[0] << "cm, 0.54 of the photons did pair production \n";

  // PDG-Value: 0.5612 cm
}
 

