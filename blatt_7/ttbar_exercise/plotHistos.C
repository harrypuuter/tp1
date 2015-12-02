
#include "m3Fit.h"


void style1D(TH1F* histo, TString nameXaxis, TString nameYaxis);
void shapeVar(TH1F* histo1, TString nameXaxis, TString nameYaxis);

plotHistos(int Mode)
{

  //
  // exercise 1
  //

  if(Mode==1)
  {
    TFile* fTTBarN2 = new TFile("results/Histos_MC_TTBar_NJets2.root"); // open root file containing the histograms produced by RunTTbar in exercise 1

    gROOT->SetStyle("Plain");
    gStyle->SetOptStat(0);

    TCanvas* c1 = new TCanvas("c1","c1",300,0,800,600); // create new canvas
    c1->Divide(3,2); // divide canvas into 3x2=6 pads

    TH1F* hPtGenTop = (TH1F*) fTTBarN2->Get("hPtGenTop"); // get histogram hPtGenTop from file opened above
    c1->cd(1); // make subpad 1 the current canvas
    style1D(hPtGenTop, "transverse momentum for top quarks [GeV/c]", "number of events");
    hPtGenTop->Draw();

    TH1F* hRapGenTop = (TH1F*) fTTBarN2->Get("hRapGenTop");
    c1->cd(2);
    style1D(hRapGenTop, "pseudorapidity of top quarks", "number of events");
    hRapGenTop->Draw();

    TH2F* h2PtRapGenTop = (TH2F*) fTTBarN2->Get("h2PtRapGenTop");
    c1->cd(3);
    style2D(h2PtRapGenTop, "transverse momentum of top quarks [GeV/c]" ,"pseudorapidity of top quark");
    h2PtRapGenTop->Draw("CONT 4Z");

    //
    // enter code to plot the histograms for top antiquarks
    //
    TH1F* hPtGenAntiTop = (TH1F*) fTTBarN2->Get("hPtGenAntiTop");
    c1->cd(4); // make subpad 1 the current canvas
    style1D(hPtGenAntiTop, "transverse momentum for anti top quarks [GeV/c]", "number of events");
    hPtGenAntiTop->Draw();

    TH1F* hRapGenAntiTop = (TH1F*) fTTBarN2->Get("hRapGenAntiTop");
    c1->cd(5);
    style1D(hRapGenAntiTop, "pseudorapidity of top anti quarks", "number of events");
    hRapGenAntiTop->Draw();

    TH2F* h2PtRapGenAntiTop = (TH2F*) fTTBarN2->Get("h2PtRapGenAntiTop");
    c1->cd(6);
    style2D(h2PtRapGenAntiTop, "transverse momentum of anti top quarks [GeV/c]" ,"pseudorapidity of top quark");
    h2PtRapGenAntiTop->Draw("CONT 4Z");



    c1->SaveAs("results/top_event_kinetic.png");
  }

  //
  // exercise 2
  //

  if(Mode==2)
  {
    TFile* fTTBarN2 = new TFile("results/Histos_MC_TTBar_NJets2.root");
    TFile* fWJetsN2 = new TFile("results/Histos_MC_WJets_NJets2.root");

    gROOT->SetStyle("Plain");
    gStyle->SetOptStat(0);

    TCanvas* c1 = new TCanvas("c1","number of jets",300,0,800,600);


    TH1F* hNJetsWJet = (TH1F*) fWJetsN2->Get("hNJets");
    TH1F* hNJetsTTBar = (TH1F*) fTTBarN2->Get("hNJets");
    hNJetsWJet->GetXaxis()->SetTitle("N_{Jets}");
    hNJetsWJet->GetYaxis()->SetTitle("number of events");
    hNJetsWJet->SetLineColor(2);
    hNJetsTTBar->SetLineColor(3);
    //
    // enter code to normalize and draw the two histograms
    //
    Double_t scalew = 1.0/hNJetsWJet->Integral();
    Double_t scalet = 1.0/hNJetsTTBar->Integral();
    hNJetsWJet->Scale(scalew);
    hNJetsTTBar->Scale(scalet);
    hNJetsWJet->Draw();
    hNJetsTTBar->Draw("Same");

    TLegend *leg = new TLegend(0.67,0.67,0.8,0.8,NULL,"brNDC");
    leg->SetBorderSize(0);
    leg->SetTextSize(0.04);
    leg->SetFillColor(10);
    leg->SetLineColor(1);
    TLegendEntry* entry[2];
    entry[0] = leg->AddEntry(hNJetsWJet,"W+Jets","L");
    entry[1] = leg->AddEntry(hNJetsTTBar,"t #bar{t} signal MC","L");
    leg->Draw("Same");

    c1->SaveAs("results/number_of_jets.png");

  }

  //
  // exercise 3
  //

  if(Mode==3)
  {

    TFile* fWJets = new TFile("results/Histos_MC_WJets_NJets4.root");
    TFile* fTTBar = new TFile("results/Histos_MC_TTBar_NJets4.root");

    gROOT->SetStyle("Plain");
    gStyle->SetOptStat(0);

    TCanvas* c1 = new TCanvas("c1","shape variable",300,0,1024,800);
    c1->Divide(3,2);

    c1->cd(1);
    TH1F* hWJetsMet = (TH1F*) fWJets->Get("hMet");
    TH1F* hTTBarMet = (TH1F*) fTTBar->Get("hMet");
    shapeVar(hTTBarMet,hWJetsMet, "missing transverse energy [GeV]", "number of events"); // sets up histogram style for shape comparison. make sure to edit this function

    c1->cd(2);
    TH1F* hWJetsMuonPt= (TH1F*) fWJets->Get("hMuonPt");
    TH1F* hTTBarMuonPt = (TH1F*) fTTBar->Get("hMuonPt");
    shapeVar(hTTBarMuonPt,hWJetsMuonPt, "transverse momentum of Muon [GeV/c]", "fraction of events");

    c1->cd(3);
    TH1F* hWJetsMuonPseudo = (TH1F*) fWJets->Get("hMuonPseudo");
    TH1F* hTTBarMuonPseudo = (TH1F*) fTTBar->Get("hMuonPseudo");
    shapeVar(hTTBarMuonPseudo,hWJetsMuonPseudo, "pseudorapidity of Muon", "fraction of events");

    c1->cd(4);
    TH1F* hWJetsHt = (TH1F*) fWJets->Get("hHt");
    TH1F* hTTBarHt = (TH1F*) fTTBar->Get("hHt");
    shapeVar(hTTBarHt,hWJetsHt, "sum of transverse momentum [GeV/c]", "fraction of events");

    c1->cd(5);
    TH1F* hWJetsM3 = (TH1F*) fWJets->Get("hM3");
    TH1F* hTTBarM3 = (TH1F*) fTTBar->Get("hM3");
    shapeVar(hTTBarM3,hWJetsM3, "M3 [GeV/c^2]", "fraction of events");


    c1->SaveAs("results/shape_variables.png");

  }

  //
  // exercise 4 and exerise 5
  //

  if(Mode==4)
  {


    //
    // exercise 4
    //

    TFile* fWJets = new TFile("results/Histos_MC_WJets_NJets4.root");
    TFile* fTTBar = new TFile("results/Histos_MC_TTBar_NJets4.root");
    TFile* fData = new TFile("results/Histos_data_NJets4.root");

    //label style
    gROOT->SetStyle("Plain");
    gStyle->SetOptStat(0);

    gStyle->SetTitleOffset(1.1,"x");
    gStyle->SetTitleSize(0.025,"X");
    gStyle->SetLabelSize(0.025,"X");
    gStyle->SetTitleOffset(1.8,"y");
    gStyle->SetTitleSize(0.025,"y");
    gStyle->SetLabelSize(0.025,"y");


    TCanvas* c1 = new TCanvas("c1", "signal / background ratio", 1400,800);
    c1->Divide(2,1);

    // load histograms
    c1->cd(1);
    TH1F* hdata  = (TH1F*) fData->Get("hM3");
    TH1F* httbar = (TH1F*) fTTBar->Get("hM3");
    TH1F* hbkg   = (TH1F*) fWJets->Get("hM3");
    Double_t scalettbar = hdata->Integral()/httbar->Integral();
    Double_t scalewjets = hdata->Integral()/hbkg->Integral();
    httbar->Scale(scalettbar);
    hbkg->Scale(scalewjets);
    //
    //normalize monte-carlo histograms to data
    //

    // perform template fit (chi2-fit)
    double sigFrac = PerformFit(hdata, httbar, hbkg); // make sure to edit this function (defined in m3Fit.h)

    //scale monte carlo to signal fraction
    httbar->Scale(sigFrac);
    hbkg->Scale((1-sigFrac));

    //add signal to background to make a stack plot
    TH1F* signalABkg = new TH1F("signalABkg", "t #bar{t} signal without b- tagging", 35,0,700);
    signalABkg->Add(hbkg,1);
    signalABkg->Add(httbar,1);
    //
    // calculate the signal to background ratio
    //

    double sbratio=httbar->Integral()/hbkg->Integral();
    cout << "S/B ratio: " << sbratio << endl;
    //style
    hdata->SetLineColor(1);
    signalABkg->SetLineColor(2);
    signalABkg->SetFillColor(2);
    hbkg->SetLineColor(8);
    hbkg->SetFillColor(8);

    style1D(signalABkg,"M3 [Gev/c^{2}]", "number of events");

    signalABkg->Draw("");
    hbkg->Draw("Same");
    hdata->Draw("Same E1");
    signalABkg->Draw("Same AXIS");

    TLegend *leg = new TLegend(0.6,0.7,0.9,0.82,NULL, "brNDC");
    leg->SetBorderSize(0);
    leg->SetTextSize(0.03);
    leg->SetFillColor(10);
    TLegendEntry* entry[3];
    entry[0] = leg->AddEntry(hdata,"Data","le");
    entry[1] = leg->AddEntry(signalABkg,"Signal", "f");
    entry[2] = leg->AddEntry(hbkg,"Background", "f");

    //write S/B in plot
    char buffer[50];
    sprintf(buffer, "#frac{S}{B}: %g ", sbratio);
    TLatex* text1 = new TLatex();
    text1->DrawLatex(450,0.5*signalABkg->GetMaximum(),buffer);

    leg->Draw("Same");


    //
    // exercise 4 with b-tagging
    //
    c1->cd(2);
    TH1F* hdataB  = (TH1F*) fData->Get("hM3B");
    TH1F* httbarB = (TH1F*) fTTBar->Get("hM3B");
    TH1F* hbkgB   = (TH1F*) fWJets->Get("hM3B");

    //
    // copy and modify code from above
    //
    Double_t scalettbarB = hdataB->Integral()/httbarB->Integral();
    Double_t scalewjetsB = hdataB->Integral()/hbkgB->Integral();
    httbarB->Scale(scalettbarB);
    hbkgB->Scale(scalewjetsB);
    //
    //normalize monte-carlo histograms to data
    //

    // perform template fit (chi2-fit)
    double sigFracB = PerformFit(hdataB, httbarB, hbkgB); // make sure to edit this function (defined in m3Fit.h)

    //scale monte carlo to signal fraction
    httbar->Scale(sigFracB);
    hbkgB->Scale((1-sigFracB));

    //add signal to background to make a stack plot
    TH1F* signalABkgB = new TH1F("signalABkgB", "t #bar{t} signal with b- tagging", 35,0,700);
    signalABkgB->Add(hbkgB,1);
    signalABkgB->Add(httbarB,1);


    //
    // calculate the signal to background ratio
    //

    double sbratioB=httbarB->Integral()/hbkgB->Integral();
    cout << "S/B ratio: " << sbratioB << endl;



    //style
    hdataB->SetLineColor(1);
    signalABkgB->SetLineColor(2);
    signalABkgB->SetFillColor(2);
    hbkgB->SetLineColor(8);
    hbkgB->SetFillColor(8);

    style1D(signalABkgB,"M3 [Gev/c^{2}]", "number of events");

    signalABkgB->Draw("");
    hbkgB->Draw("Same");
    hdataB->Draw("Same E1");
    signalABkgB->Draw("Same AXIS");

    TLegend *leg = new TLegend(0.6,0.7,0.9,0.82,NULL, "brNDC");
    leg->SetBorderSize(0);
    leg->SetTextSize(0.03);
    leg->SetFillColor(10);
    TLegendEntry* entry[3];
    entry[0] = leg->AddEntry(hdataB,"Data","le");
    entry[1] = leg->AddEntry(signalABkgB,"Signal", "f");
    entry[2] = leg->AddEntry(hbkgB,"Background", "f");

    //write S/B in plot
    char buffer[50];
    sprintf(buffer, "#frac{S}{B}: %g ", sbratioB);
    TLatex* text1 = new TLatex();
    text1->DrawLatex(450,0.5*signalABkgB->GetMaximum(),buffer);

    leg->Draw("Same");


    //
    // exercise 5
    //

    //
    // calculate ttbar cross-section
    //
    double crossSectionB=(hdataB->Integral()*sigFracB)/(0.0259*5000);
    cout << "cross section with b-tagging: " << crossSectionB <<"pb"<< endl;

    cout << endl;
    double crossSection=(hdata->Integral()*sigFrac)/(0.0259*5000);
    cout << "cross section without b-tagging: " << crossSection <<"pb"<< endl;
    cout << endl;
    c1->SaveAs("results/signal_fraction.png");

  }

  //
  // exercise 6
  //

  if(Mode==5)
  {

    TFile* fData = new TFile("results/Histos_data_NJets4.root");

    // label style
    gROOT->SetStyle("Plain");
    gStyle->SetOptStat(0);

    gStyle->SetTitleOffset(1.1,"x");
    gStyle->SetTitleSize(0.025,"X");
    gStyle->SetLabelSize(0.025,"X");
    gStyle->SetTitleOffset(1.8,"y");
    gStyle->SetTitleSize(0.025,"y");
    gStyle->SetLabelSize(0.025,"y");


    TCanvas* c1 = new TCanvas("c1", "m top - Rec", 1400,800);
    TH1F* hMTopLep = (TH1F*) fData->Get("hMTopLep");
    TH1F* hMTopHad = (TH1F*) fData->Get("hMTopHad");
    TH1F* hMTopAv = (TH1F*) fData->Get("hMTopAv");

    //
    // define and fit the landau functions for the reconstructed top quark masses
    //

    TF1* fMTopLep = new TF1("fMTopLep", "[0]*TMath::Landau(x,[1],[2],0)" , 0,800);  // define function
    fMTopLep->SetParameters(1000,172,30);                                      // set start parameters for fit
    TF1* fMTopHad = new TF1("fMTopHad", "[0]*TMath::Landau(x,[1],[2],0)" , 0,800);  // define function
    fMTopHad->SetParameters(1000,172,30);                                      // set start parameters for fit
    TF1* fMTopAv = new TF1("fMTopAv", "[0]*TMath::Landau(x,[1],[2],0)" , 0,800);  // define function
    fMTopAv->SetParameters(1000,172,30);                                      // set start parameters for fit


    hMTopLep->SetTitle("reconstructed top mass");
    hMTopLep->SetLineColor(kRed);
    hMTopHad->SetLineColor(kGreen);
    hMTopAv->SetLineColor(kBlue);
    fMTopLep->SetLineColor(kRed);
    fMTopHad->SetLineColor(kGreen);
    fMTopAv->SetLineColor(kBlue);

    //
    // fit functions to histograms
    //
    hMTopLep->Fit("landau");
    TF1 *fit1 = hMTopLep->GetFunction("landau");
    Double_t m1 = fit1->GetParameter(1);
    hMTopHad->Fit("landau");
    TF1 *fit2 = hMTopHad->GetFunction("landau");
    Double_t m2 = fit2->GetParameter(1);
    hMTopAv->Fit("landau");
    TF1 *fit3 = hMTopAv->GetFunction("landau");
    Double_t m3 = fit3->GetParameter(1);

    hMTopLep->Draw("");
    hMTopHad->Draw("same");
    hMTopAv->Draw("same");
    cout << " the leptonic top mass is: " << m1 << endl;
    cout << " the hadronic top mass is: " << m2 << endl;
    cout << " the average top mass is: " << m3 << endl;

    TLegend *leg = new TLegend(0.55,0.7,0.9,0.82,NULL, "brNDC");
    leg->SetBorderSize(0);
    leg->SetTextSize(0.03);
    leg->SetFillColor(10);
    TLegendEntry* entry1[3];
    entry1[0] = leg->AddEntry(hMTopAv,"rec. av. t","L");
    entry1[1] = leg->AddEntry(hMTopHad,"rec. had. t", "L");
    entry1[2] = leg->AddEntry(hMTopLep,"rec. lep. t", "L");

    leg->Draw("Same");

  }
  //
  // exercise 7
  //


  if(Mode==6)
  {
    gROOT->SetStyle("Plain");
    gStyle->SetOptStat(0);

    TFile* fTTBar = new TFile("results/Histos_MC_TTBar_NJets4.root");

    TCanvas* c1 = new TCanvas("c1", "top quark mass", 800,600);

    TH1F* hMTTBar = (TH1F*) fTTBar->Get("hMTopAv");


    // define the landau functions
    TF1* fMTTBar = new TF1("fMTTBar", "[0]*TMath::Landau(x,[1],[2],0)" , 50,400);
    fMTTBar->SetParameters(10000,173,30);


    //
    // Fit the landau function of the reconstructed average top quark mass
    //
    for(int i=0;i<80;i++)	cout<< "-";
    cout << endl;

    cout << "fit MC_TTBar" << endl;
    hMTTBar->Fit("fMTTBar","N");


    //
    // Calculate difference between true top quark mass (172,5GeV) and the reconstructed  average top quark mass
    //
    double mass = fMTTBar->GetMaximumX(50,400);
    double difference=172.5 - mass;

    cout << "Difference between true top quark mass and reconstructed top quark mass from MC: " << difference << " GeV/c^2" << endl;


    // design

    hMTTBar->SetLineColor(4);
    fMTTBar->SetLineColor(4);

    hMTTBar->SetMinimum(0);
    hMTTBar->SetMaximum(1.2*hMTTBar->GetMaximum());
    hMTTBar->SetAxisRange(50,400,"x");
    hMTTBar->SetTitle("reconstructed top mass from MC");
    hMTTBar->GetYaxis()->SetTitle("# of events");
    hMTTBar->GetXaxis()->SetTitle("m_{t} [GeV/c^{2}]");

    hMTTBar->SetTitleOffset(1.1,"x");
    hMTTBar->SetTitleSize(0.04,"X");
    hMTTBar->SetLabelSize(0.04,"X");
    hMTTBar->SetTitleOffset(1.45,"y");
    hMTTBar->SetTitleSize(0.035,"y");
    hMTTBar->SetLabelSize(0.03,"y");


    // Draw line with true top mass
    hMTTBar->Draw();
    fMTTBar->Draw("Same");
    TLine* line = new TLine(172.5,0,172.5,hMTTBar->GetMaximum());
    line->SetLineColor(2);
    line->SetLineWidth(3);
    line->Draw("Same");


    // Draw line with reconstructed top mass
    cout << "get maximum of landau of MC: " << fMTTBar->GetMaximumX(50,400) << " GeV/c^2" <<endl;
    TLine* line2 = new TLine(fMTTBar->GetMaximumX(50,400),0,fMTTBar->GetMaximumX(50,400),hMTTBar->GetMaximum());
    line2->SetLineColor(4);
    line2->SetLineWidth(3);
    line2->Draw("Same");



    // Draw legend
    TLegend *leg = new TLegend(0.45,0.7,0.9,0.82,NULL, "brNDC");
    leg->SetBorderSize(0);
    leg->SetTextSize(0.03);
    leg->SetFillColor(10);
    TLegendEntry* entry1[2];
    entry1[0] = leg->AddEntry(hMTTBar,"MC rec. av. top quark mass", "L");
    entry1[1] = leg->AddEntry(line,"true top quark mass: 172.5 GeV/c^2", "L");

    leg->Draw("Same");
    hMTTBar->Draw("Same AXIS");

    c1->SaveAs("results/correction_top_mass.png");

    for(int i=0;i<80;i++)
      cout<< "-";
    cout << endl;



    TCanvas* c2 = new TCanvas("c2", "top quark mass", 800,600);

    TFile* fData = new TFile("results/Histos_data_NJets4.root");
    TFile* fWJets = new TFile("results/Histos_MC_WJets_NJets4.root");

    TH1F* hMData2 = (TH1F*) fData->Get("hMTopAv");
    TH1F* hMTTBar2 = (TH1F*) fTTBar->Get("hMTopAv");
    TH1F* hMWJets2 = (TH1F*) fWJets->Get("hMTopAv");
    TF1* fMData2 = new TF1("fMData2", "[0]*TMath::Landau(x,[1],[2],0)" , 50,400);
    fMData2->SetParameters(1000,173,30);

    Double_t sigFracB = 1/10.8384;
    hMWJets2->Scale(1-sigFracB);
    hMData2->Add(hMWJets2,-1);
    //
    // subtract scaled background from hMData2
    //


    // Fit the Landau function fMData2
    for(int i=0;i<80;i++)	cout<< "-";
    cout << endl;

    cout << "fit MC_TTBar without background" << endl;
    hMData2->Fit("fMData2","N");

    hMData2->SetLineColor(1);
    fMData2->SetLineColor(2);

    hMData2->SetMinimum(0);
    hMData2->SetMaximum(1.2*hMData2->GetMaximum());
    hMData2->SetAxisRange(50,400,"x");
    hMData2->SetTitle("reconstructed top mass without background");
    hMData2->GetYaxis()->SetTitle("# of events");
    hMData2->GetXaxis()->SetTitle("m_{t} [GeV/c^{2}]");

    hMData2->SetTitleOffset(1.1,"x");
    hMData2->SetTitleSize(0.04,"X");
    hMData2->SetLabelSize(0.04,"X");
    hMData2->SetTitleOffset(1.4,"y");
    hMData2->SetTitleSize(0.035,"y");
    hMData2->SetLabelSize(0.035,"y");

    hMData2->Draw("E1");
    fMData2->Draw("Same");

    TLegend *leg2 = new TLegend(0.5,0.7,0.9,0.82,NULL, "brNDC");
    leg2->SetBorderSize(0);
    leg2->SetTextSize(0.03);
    leg2->SetFillColor(10);
    TLegendEntry* entry2[2];
    entry2[0] = leg2->AddEntry(hMData2,"bg-subtracted data","le");
    entry2[1] = leg2->AddEntry(fMData2,"Landau fit","L");
    leg2->Draw("Same");
    hMData2->Draw("Same AXIS");

    //
    // Calculate true top quark mass from data
    //

    double dataMaximum=fMData2->GetMaximumX();

    cout << "reconstructed average top quark mass \t\t\t" << dataMaximum << " GeV/c^2" << endl;
    cout << "reconstructed and corrected average top quark mass: \t" << dataMaximum+difference << " GeV/c^2" << endl;

    c2->SaveAs("results/top_mass.png");




  }
}




void style1D(TH1F* histo, TString nameXaxis, TString nameYaxis)
{
  histo->SetTitleOffset(1.4,"y");
  histo->SetLabelSize(0.025,"y");
  histo->GetXaxis()->SetTitle(nameXaxis);
  histo->GetYaxis()->SetTitle(nameYaxis);

  histo->SetMinimum(0);
}

void style2D(TH2F* histo, TString nameXaxis, TString nameYaxis)
{
  histo->SetTitleOffset(1.4,"y");
  histo->SetLabelSize(0.025,"y");
  histo->GetXaxis()->SetTitle(nameXaxis);
  histo->GetYaxis()->SetTitle(nameYaxis);

  histo->SetMinimum(0);
}



void shapeVar(TH1F* histo1, TH1F* histo2, TString nameXaxis, TString nameYaxis)
{
  histo1->SetLineColor(1);
  histo2->SetLineColor(2);
  Double_t scale1 = 1.0/histo1->Integral();
  Double_t scale2 = 1.0/histo2->Integral();
  histo1->Scale(scale1);
  histo2->Scale(scale2);

  //
  // enter code to normalize the histograms
  //

  style1D(histo1,nameXaxis, nameYaxis);
  histo1->SetMaximum(1.1*histo1->GetMaximum());
  histo1->Draw();
  histo2->Draw("Same");


  TLegend *leg = new TLegend(0.62,0.67,0.8,0.8,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.04);
  leg->SetFillColor(10);
  leg->SetLineColor(1);
  TLegendEntry* entry[2];
  entry[0] = leg->AddEntry(histo1,"t#bar{t} signal MC","L");
  entry[1] = leg->AddEntry(histo2,"W+Jets","L");

  leg->Draw("Same");

}
