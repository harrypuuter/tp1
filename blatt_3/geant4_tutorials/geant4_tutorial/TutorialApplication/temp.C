void aufgabe2a()
{
  ////////////////////////////////////////////////////////////////////////////////
  // first include the basics as in run_g4.C
  ////////////////////////////////////////////////////////////////////////////////

  // Load basic libraries
  gROOT->LoadMacro("../macro/basiclibs.C");
  basiclibs();
  
  // Load Geant4 libraries
  gROOT->LoadMacro("../macro/g4libs.C");
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

  // make available the script XofFirstSecondary as mentioned on the UB
  gROOT->ProcessLine(".L XofFirstSecondary.C");
  // load geometry g1
  app->InitMC("geometry/g1");
  //use photon pdg=22
  app->SetPrimaryPDG(22);
  //set momentum to 1 GeV
  app->SetPrimaryMomentum(1.0);
  
  // construct a new histogram for the x-position of the first vertex
  TH1F* hx = new TH1F("hx","x of first vertex",20,-1,1);
  
  // simulate 500 events and fill the x-position of the first production process into hx
  for(Int_t i = 0 ; i < 500 ; ++i) {
    // FIXME Insert code to run a single event, then use the macro XofFirstSecondary that
    // was imported above to fill the histogram
  }
  
  
  // construct a new canvas where the result will be plotted
  TCanvas* c = new TCanvas("caufgabe2a","Aufgabe 2a");
  c->Divide(2,1);
  c->cd(1);
  // draw the histgram
  hx->GetXaxis()->SetTitle("x of first vertex [cm]");
  hx->GetYaxis()->SetTitle("number of entries");  
  hx->Draw();
  

  // calculate the 54% quantile of the histogram (radiation length)
  Double_t xp[1] = {0.54};
  Double_t xq[1];
  hx->GetQuantiles(1,xq,xp);
  cout << "X0:"<<xq[0]<<endl;
  
  // visualize how the quantile is calculated
  c->cd(2);
  int nbins = hx->GetNbinsX();
  TH1F* hint = new TH1F("hint","",nbins,-1,1);
  Float_t norm = hx->GetEntries();
  for(int i = 0; i <= nbins ;  ++i) {
    Float_t integral = hx->Integral(0,i)/norm;
    hint->SetBinContent(i,integral);
  }
  hint->GetXaxis()->SetTitle("x of first vertex [cm]");
  hint->GetYaxis()->SetTitle("cumulated entries (normalized to unity)");
  hint->Draw();
}
 

