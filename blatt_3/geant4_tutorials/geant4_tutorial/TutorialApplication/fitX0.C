void fitX0()
{
  app->SetPrimaryPDG(-11);
  app->SetPrimaryMomentum(20);

  app->RunMC(1000);

  TFolder* histfolder=(TFolder*)gROOT->FindObjectAny("/Geant4/Histograms");
  TH1F* hlong=(TH1F*)gROOT->FindObjectAny("/Geant4/Histograms/hPrimaryEnergy");

  hlong = (TH1F*)hlong->Clone("hlong");
  
  TCanvas* c = new TCanvas("c");
  c->SetLogy();

  TF1* x0fit = new TF1("x0fit","[0] * exp(-(x - 2) / [1])",2,22);
  x0fit->SetParameters(1.0,0.560);
  x0fit->SetParNames("E","X_{0}");
  hlong->Fit("x0fit","I","",2,22);
}
