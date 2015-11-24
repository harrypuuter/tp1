void calibrateEM()
{

  // FIXME: There are two possibilities to execute the script:
  // i) root run_hadron_g4.C
  //    root[] .L calibrateEM.C
  //    root[] calibrateEM()
  // or ii) Include the basics from run_hadron_g4.C here and
  //    execute simply:
  //    root calibrateEM.C
  // Load basic libraries
 gROOT->LoadMacro("$G4PATH/geant4_vmc/examples/macro/basiclibs.C");
 basiclibs();

 // Load Geant4 libraries
 gROOT->LoadMacro("$G4PATH/geant4_vmc/examples/macro/g4libs.C");
 g4libs();

 // Load the tutorial application library
 gSystem->Load("libTutorialApplication");

 // MC application
 TutorialApplication* app
   = new TutorialApplication("TutorialApplication",
     "Tutorial Application for HEP Lecture @EKP");


 // configure Geant4

 gROOT->LoadMacro("g4Config_Hadron.C");
 Config();

 // instantiate graphical user interface for tutorial application
 new TutorialMainFrame(app);
  //FIXME: Load "CountChargedinScint.C"
  gROOT->ProcessLine(".L CountChargedinScint.C");

  //FIXME: Initialize the geometry
  app->InitMC("geometry/calor(1,0.2)");
  //FIXME: Set the primary particle to photon
  app->SetPrimaryPDG(22);
  // Profile histogram - will show us the mean numbers of counts in bins of the energy.
  // The given binning refers to the energy, the other binning will be inferred automatically.
  TProfile* hcounts = new TProfile("hcounts","Counts per particle energy",
				   10,0,10);
  hcounts->SetXTitle("energy [GeV]");
  hcounts->SetYTitle("mean number of counts");

  // FIXME loop over different particle momenta, and for each momentum simulate several events (e.g. 10)
  for(Int_t i = 0 ; i < 10 ; ++i) {
    for(Int_t k = 0 ; k < 10; k ++) {
    //FIXME: Set the momentum of the primary particle to p
      Double_t p = i;
      app->SetPrimaryMomentum(p);
    //FIXME: Run the simulation
      app->RunMC();
    //FIXME: Fill both the momentum and the output from CountChargedinScint
    //        into the profile histogram hcounts
      Double_t x = CountChargedinScint();
      hcounts->Fill(p,x);
    }
  }

  TCanvas* c = new TCanvas();
  c->cd();
  hcounts->Draw();

  TF1 *fitter = new TF1("fitf","[0]*x", 0,10);
  fitter->SetParameter(0,1.0);
  fitter->SetParNames("calibration factor");
  //FIXME: Fit the histogram to get the calibration factor
  hcounts->Fit("fitf");
}
