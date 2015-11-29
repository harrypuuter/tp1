//
//	Author: Matthias Schnepf
//

#include "TMinuit"


vector<double> NPred;	//number of predicted events in one bin
vector<double> NData;	//number of observed data events in one bin
vector<double> NTTBar;	//number of events in one bin of the ttbar histogramm normalized to the total number of data events
vector<double> NBkg;	//number of events in one bin of the background histogramm normalized to the total number of data events



double chi2Func(Int_t &npar, Double_t *gin, Double_t &f, Double_t *par, Int_t iflag)
{
  //calculate the number of predicted events in each bin
  for(int i=0; i<NData.size();i++)
  {
    double NiPred = -9999;   // enter code to calculate the predicted number of events; par[1] is the signal fraction
    NPred.push_back(NiPred);
  }

  double chi2=0;
  //calulate chi^2
  for(int iBin=0; iBin < NData.size(); iBin++)
  {
    if(NPred[iBin] != 0)
    {
      chi2+=-9999;   // enter code to calculate chi^2
    }

  }

  NPred.clear();

  f=chi2;
}

double PerformFit(TH1F* hdata,TH1F* httbar, TH1F* hbkg)
{

  //fill vector with bin content from histogram
  for(int i=1;i<=hdata->GetNbinsX();i++)
  {
    NData.push_back(hdata->GetBinContent(i));
    NTTBar.push_back(httbar->GetBinContent(i));
    NBkg.push_back(hbkg->GetBinContent(i));
  }


  //initialisation of TMinuit
  TMinuit *gMinuit = new TMinuit(2);
  gMinuit->SetFCN(chi2Func);

  // define start value and range
  double vstart[2]={1,0.8};
  double vstep[2]={0.01,0.005};
  double vlbound[2] = {0.,0};
  double vubound[2] = {100.,1};

  gMinuit->DefineParameter(0, "chiORlog", vstart[0], vstep[0], vlbound[0], vubound[0]);
  gMinuit->DefineParameter(1, "f_{Sig.}", vstart[1], vstep[1], vlbound[1], vubound[1]);

  //start minimization
  gMinuit->FixParameter(0);

  gMinuit->SetMaxIterations(10000);
  gMinuit->SetPrintLevel(1);

  gMinuit->Migrad();	//Migrand miniazer
  gMinuit->mnmnos();	// mnmnos error analyser

  // Print results
  double par1 = -1; double epar1 = -1;
  gMinuit->GetParameter(1,par1,epar1);


  cout << "Signal fraction: \t\t"<< par1 << endl;
  cout << "Uncertainty on signal fraction:\t"<< epar1 << endl;
  cout << "number of ttbar events:\t" << par1*hdata->Integral() << endl;
  delete gMinuit;

  NData.clear();
  NPred.clear();
  NTTBar.clear();
  NBkg.clear();

  return par1;


}

