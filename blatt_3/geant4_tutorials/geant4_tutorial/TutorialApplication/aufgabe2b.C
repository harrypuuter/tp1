void aufgabe2b()
{

  ////////////////////////////////////////////////////////////////////////////////
  // first include the basics as in run_g4.C
  ////////////////////////////////////////////////////////////////////////////////

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
  gROOT->LoadMacro("g4Config.C");
  Config();

  // instantiate graphical user interface for tutorial application
  new TutorialMainFrame(app);

  ////////////////////////////////////////////////////////////////////////////////
  // then work exercise 2b)
  ////////////////////////////////////////////////////////////////////////////////

  // make available the script XofFirstSecondary as mentioned on the UB
  gROOT->ProcessLine(".L XofFirstSecondary.C");
  // load geometry g2
  app->InitMC("geometry/g2");
  //use electron pdg=11
  app->SetPrimaryPDG(11);
  //set momentum to 3 GeV
  app->SetPrimaryMomentum(3.0);

  // define the necessary histograms
  TH1F* hpoint  = new TH1F("hpoint","starting point of shower",40,0,10);
  TH1F* hwidth  = new TH1F("hwidth","width of the shower",50,0.0,15);
  TH1F* hlength = new TH1F("hlength","length of the shower",50,0.0,17.5);

  //simulate 100 events and fill the x-position of the first production process into hx
  for(Int_t i = 0 ; i < 100 ; ++i) {

    // run the simulation for this event
    app->RunMC(1,0);

    //
    // 1) FIXME the shower starting point is given by the first vertex, as in the previous
    //    exercise. fill it into the histogram hpoint.
    //    add 25, as the geometry gives xE[-25,25]
    //
    float x = XofFirstSecondary();
    x += 25;
    hpoint->Fill(x);
    // 2)
    // the shower width is calculated from the transverse energy,
    // this is given in the histogram hEdepTrans for EACH event
    // and it is given with radius r
    // FIXME so for each event get this histogram out of the pointer "gROOT"
    TH1F *temp = gROOT->FindObject("hEdepTrans");

    // FIXME then evaluate the 90% quantile x-wise (-> radius)
    Double_t radius[1];
    Double_t length[1];
    Double_t quantile[1];
    quantile[0] = 0.9;
    temp->GetQuantiles(1,radius,quantile);
    temp->Reset();
    // FIXME fill the width of the event as two times the radius
    // into the histogram hwidth
    radius[0] *= 2;
    hwidth->Fill(radius[0]);
    // 3) FIXME
    // for the shower depth the same procedure is chosen,
    // using the longitudinal energy distribution
    // found in the histogram hEdepLong
    // fill the length into the histogram hlength; (add 25, since x ranges from
    // -25 to 25 and the length would be negative otherwise)
    TH1F *temp2= gROOT->FindObject("hEdepLong");
    temp2->GetQuantiles(1,length,quantile);
    temp2->Reset();
    length[0] += 25;
    hlength->Fill(length[0]);
  }

  TCanvas* c = new TCanvas("caufgabe2b","Aufgabe 2b",1000,1000);
  c->Divide(2,2);
  c->cd(1);
  hpoint->GetYaxis()->SetTitle("# events");
  hpoint->GetXaxis()->SetTitle("starting point of the shower [cm]");
  hpoint->Draw();
  c->cd(2);
  hwidth->GetYaxis()->SetTitle("# events");
  hwidth->GetXaxis()->SetTitle("width of the shower [cm]");
  hwidth->Draw();
  c->cd(3);
  hlength->GetYaxis()->SetTitle("# events");
  hlength->GetXaxis()->SetTitle("length of the shower [cm]");
  hlength->Draw();
}
