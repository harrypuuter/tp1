#include <iostream>
#include "TFile.h"
#include "TH1.h"

using namespace std;

void MyMacro(){

    cout<< "this is a ROOT macro template"<<endl;
    	TFile *file1 = new TFile("./gauss.root");
	myc1 = new TCanvas("myc1","My Canvas");
    	TH1F *histo = (TH1F*) file1->Get("h1");
	histo->GetXaxis()->SetTitle("X-Axis");
	histo->GetXaxis()->CenterTitle(1);
	histo->Fit("gaus");
	//histo->Draw();
	//histo->Write();
	myc1->Modified();
	myc1->Update();
	TFile *hfile =  new TFile("fit_gauss.root","RECREATE");
	hfile->Append(myc1);
	hfile->Write();
};
