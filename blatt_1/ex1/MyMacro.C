#include <iostream>
#include "TFile.h"
#include "TH1.h"

using namespace std;

void MyMacro(){

    cout<< "this is a ROOT macro template"<<endl;
    	TFile *file1 = new TFile("./gauss.root");
    	TH1F *histo = (TH1F*) file1->Get("h1");
	histo->GetXaxis()->SetTitle("X-Axis");
	histo->GetXaxis()->CenterTitle(1);
	histo->Fit("gaus");
	myc1 = new TCanvas("myc1","My Canvas");
	histo->Draw();
	TFile *hfile =  new TFile("fit_gauss.root","RECREATE");
	histo->Write();
	myc1->Modified();
	myc1->Update();
	hfile->Append(myc1);
	hfile->Write();
};
