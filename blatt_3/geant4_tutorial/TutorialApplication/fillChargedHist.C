
void fillChargedHist(TutorialApplication* app)
{
  TH1F* hCharged = new TH1F("hCharge","Number of charged particles in scint",
			    100,0,200);
  
  for(int i=0;i<10;++i) {
    app->RunMC();
    hCharged->Fill(CountChargedinScint());
  }
  TCanvas* c = new TCanvas();
  c.cd();
  hCharged->Draw();
}
