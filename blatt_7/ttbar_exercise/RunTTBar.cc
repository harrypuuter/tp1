//
// Teilchenphysik 1: Top-Quark Exercise
// Author: Matthias Schnepf
//

#include "TROOT.h"
#include "TChain.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TStopwatch.h"
#include "TLorentzVector.h"


#include "vector"
#include "iostream"
#include "iomanip"
#include "cmath"
#include "cassert"

#include "Cintex/Cintex.h"
#include "ttbarrec.h"

#include "interface/KITAJet.h"
#include "interface/KITAElectron.h"
#include "interface/KITAMuon.h"
#include "interface/KITAPFMet.h"


#include "interface/KITAGenTopEvent.h"
#include "interface/KITAGenJet.h"
#include "interface/KITAGenMet.h"
#include "interface/KITAGenParticle.h"
#include "interface/KITAInterpretation.hh"

using namespace std;

int main(int argc, char **argv)
{

  if(argc!=2)
  {
    cout << "program needs one argument" << endl;
    return 1;
  }

  TStopwatch sw;
  ROOT::Cintex::Cintex::Enable();

  //
  //root file
  //

  //pathName must be changed to match the directory where the samples are located
  TString pathName;
  pathName="/home/staff/chwalek/WS1516/ttbar_CMS/samples/";
  pathName+=argv[1];

  //read Tree
  TChain* ch = new TChain("KITATree");
  ch->Add(pathName);

  // class which is used in tree and branch address

  //Jets
  vector<KITAJet>* KitaJets;
  KitaJets = new	vector<KITAJet>;
  ch->SetBranchAddress("KITAJets", &KitaJets);

  //Muons
  vector<KITAMuon>* KitaMuon;
  KitaMuon = new vector<KITAMuon>;
  ch->SetBranchAddress("KITAMuonsIsolated", &KitaMuon);


  // Missing transverse Energy
  KITAPFMet* KitaMet;
  KitaMet = new KITAPFMet;
  ch->SetBranchAddress("KITAPFMet", &KitaMet);


  // GenTopEvents
  KITAGenTopEvent* KitaGen;
  KitaGen = new KITAGenTopEvent;
  cout << argv[1] << endl;
  if(strcmp(argv[1], "MC_TTBar_NJets2.root") == 0)
  {
    ch->SetBranchAddress("KITAGenTopEvent", &KitaGen);
  }



  //
  //Histograms
  //

  //exercise 1
  TH1F* hPtGenTop = new TH1F("hPtGenTop", "transverse momentum",100,0,1000);
  TH1F* hPtGenAntiTop = new TH1F("hPtGenAntiTop", "transverse momentum",100,0,1000);
  TH1F* hRapGenTop = new TH1F("hRapGenTop", "Pseudorapidity", 20,-5,5);
  TH1F* hRapGenAntiTop = new TH1F("hRapGenAntiTop", "pseudorapidity", 20,-5,5);
  TH2F* h2PtRapGenTop = new TH2F("h2PtRapGenTop", "pseudorapidity vs tranverse momentum", 50, 0, 500, 20, -5,5);
  TH2F* h2PtRapGenAntiTop = new TH2F("h2PtRapGenAntiTop", "pseudorapidity vs transverse momentum", 50, 0, 500, 20, -5,5);

  //exercise 2
  TH1F* hNJets = new TH1F("hNJets", "number of jets",9,1.5,10.5);

  //exercise 3
  TH1F* hHt = new TH1F("hHt", "sum of all transverse energy", 25,0,2500);
  TH1F* hMuonPt = new TH1F("hMuonPt", "transverse momentum of muon", 30,0,300);
  TH1F* hMet = new TH1F("hMet", "missing transverse energy", 20,0,400);
  TH1F* hMuonPseudo = new TH1F("hMuonPseudo", "pseudorapidity of muon", 21,-3.5,3.5);
  TH1F* hM3 = new TH1F("hM3", "mass of 3 jets", 35, 0,700);

  //exercise 4
  TH1F* hM3B = new TH1F("hM3B", "mass of 3 jets with 1 b- tag", 35,0,700);

  //exercise 6
  TH1F* hMTopHad = new TH1F("hMTopHad", "hadronic top mass", 35,0,700);
  TH1F* hMTopLep = new TH1F("hMTopLep", "leptonic top mass", 35,0,700);
  TH1F* hMTopAv = new TH1F("hMTopAv", "average top mass", 35,0,700);

  //number of events
  int chEnt = ch->GetEntries();
  cout << "File has " << chEnt << " Events" << endl;




//
//loop over all events
// chEnt

  for (int iE=1;iE<=chEnt; iE++)
  {
    //change entry
    ch->GetEntry(iE);

    if(iE%10000==0)
    {
      cout << iE << endl;
    }


    //
    //exercise 1
    //

    //Fill histogram
    if(strcmp(argv[1], "MC_TTBar_NJets2.root") == 0)
    {
      //if tops[0] is top and tops[1] is antitop
      if(KitaGen->tops[0].pid == 6)
      {
        hPtGenTop->Fill(KitaGen->tops[0].vec.Pt());
        hRapGenTop->Fill(KitaGen->tops[0].vec.Eta());                                                     // fill pseudorapidity
        h2PtRapGenTop->Fill(KitaGen->tops[0].vec.Pt(), KitaGen->tops[0].vec.Eta());                       // fill transverse momentum over pseudorapidity
        // antitops
        hPtGenAntiTop->Fill(KitaGen->tops[1].vec.Pt());
        hRapGenAntiTop->Fill(KitaGen->tops[1].vec.Eta());                                                 // fill pseudorapidity
        h2PtRapGenAntiTop->Fill(KitaGen->tops[1].vec.Pt(), KitaGen->tops[0].vec.Eta());                   // fill transverse momentum over pseudorapidity
      }
      //if tops[1] is top and tops[0] is antitop
      if(KitaGen->tops[0].pid == -6)
      {
        hPtGenTop->Fill(KitaGen->tops[1].vec.Pt());
        hRapGenTop->Fill(KitaGen->tops[1].vec.Eta());                                                     // fill pseudorapidity
        h2PtRapGenTop->Fill(KitaGen->tops[1].vec.Pt(), KitaGen->tops[1].vec.Eta());                       // fill transverse momentum over pseudorapidity
        // antitops
        hPtGenAntiTop->Fill(KitaGen->tops[0].vec.Pt());
        hRapGenAntiTop->Fill(KitaGen->tops[0].vec.Eta());                                                 // fill pseudorapidity
        h2PtRapGenAntiTop->Fill(KitaGen->tops[0].vec.Pt(), KitaGen->tops[0].vec.Eta());                   // fill transverse momentum over pseudorapidity
      }

    }

    //
    //exercise  2: number of Jets
    //
    hNJets->Fill(KitaJets->size());



    //
    //exercise 3: shape variables
    //

    if(KitaJets->size()<4)
      continue;  // select events with at least 4 Jets

    //muon pt, muon pseudorapidity, missing Et
    double muon_pt = KitaMuon->at(0).vec.Pt();
    double miss_pt = KitaMet->vec.Pt();
    //Ht: sum of transverse energy
    double Ht=0;
    int jet_size = KitaJets->size();
    for (int k=0; k<jet_size; k++)
    {
      Ht += KitaJets->at(k).vec.Pt();
    }
    Ht += muon_pt;
    Ht += miss_pt;
    // M3: mass of the 3 jets with the highest pt
    float M3= 0;
    float maxPt = 0;
    KITA4Vector tvec;	//summed 4-vector
    int comp[3];
    //loop 1 over all jets
    for (int i=0; i<jet_size; ++i)
    {
      //loop 2 over all jets
      for (int j=0; j<jet_size; ++j)
      {
        //loop 3 over all jets
        for (int k=0; k<jet_size; ++k)
        {
          //take care to skip combinations where a jet is used more than once!
          if (i != k && i!=j && k!=j)
          {
	    //calculate pt and remember this combination if it has larger pt than previous maximum
	    KITA4Vector tmp = KitaJets->at(i).vec + KitaJets->at(j).vec + KitaJets->at(k).vec;
            float pt = tmp.Pt();
            //cout << "pt: " << pt << "M: " << m << endl;
            if (pt > maxPt)
              {
                maxPt = pt;
                comp[0] = i;
                comp[1] = j;
                comp[2] = k;
              }
          }
          }
        }
      }
        //close loop 3
      //close loop 2
    //close loop 1
      //calculate invariante mass:  tvec.M()= M3
    tvec = KitaJets->at(comp[0]).vec + KitaJets->at(comp[1]).vec + KitaJets->at(comp[2]).vec;
    M3 = tvec.M();
    //Fill histogram with M3
    hHt->Fill(Ht);
    hMuonPt->Fill(muon_pt);
    hMet->Fill(miss_pt);
    hMuonPseudo->Fill(KitaMuon->at(0).vec.Eta());
    hM3->Fill(M3);



    //
    //exercise 4 M3 with b-tagging
    //

    const double bcut= 0.679; // medium working point b tagging
    int btag=0;
    for (int i=0; i<jet_size; ++i)
    {
      if (KitaJets->at(i).btag_combSV > bcut)
      {
        btag++;
      }
    }
    //
    //select events with at least one b-tagged jet
    //Fill histogram with M3
    if (btag > 0)
    {
      hM3B->Fill(M3);
    }







    //
    //exercise 6
    //
    if (btag > 0) // makesure at least one b-jet
    {
      //count number of loose b-tagged jets
      const double bcut_loose= 0.244; // medium working point b tagging
      int btag_loose=0;
      for (int i=0; i<jet_size; ++i)
      {
        if (KitaJets->at(i).btag_combSV > bcut_loose)
        {
          btag_loose++;
        }
      }
      //////////////////////////
      // declare some values ///
      //////////////////////////
      double w_had_exp = 78.1;
      double w_had_err = 11.2;
      double top_err = 45.2;
      double mass_err = -7.5;
      // mass of leptonic top candidate in the best combination
      double MTopLepBest = -99999;
      // mass of hadronic top candidate in the best combination
      double MTopHadBest = -99999;
      // minimal chi2 of kinematic reconstruction
      double minChi = 99999;
      //loop for quark 1 from W_had
      for (int q1=0; q1<jet_size; q1++)
      {
         //loop for quark 2 from W_had
         for (int q2=0; q2<jet_size; q2++)
         {
           //loop for b-quark from top_lep
           for (int b1=0; b1<jet_size; b1++)
           {
              //loop for b-quark from top_had
              for (int b2=0; b2<jet_size; b2++)
              {
              //in loop
              //make sure that the loose b-tagged jet(s) are/is assigned to the b-quarks, otherwise continue
	      if (q1 != q2 && q1!=b1 && q1!=b2 && q2!=b1 && q2!=b2 && b1!=b2)
	      {
		if (btag_loose == 1 && (KitaJets->at(b1).btag_combSV > bcut_loose || KitaJets->at(b2).btag_combSV > bcut_loose))
		{
		  KITA4Vector p4_b1=KitaJets->at(b1).vec;
		  KITA4Vector p4_b2=KitaJets->at(b2).vec;
		  KITA4Vector p4_q1=KitaJets->at(q1).vec;
		  KITA4Vector p4Neutrino=KitaMet->vec;
		  KITA4Vector p4_q2=KitaJets->at(q2).vec;
		  //reconstruct W_had
		  KITA4Vector W_had = p4_q1 + p4_q2;
		  //reconstruct top_had
		  KITA4Vector top_had = W_had + p4_b1;
		  //reconstruct neutrino (calculate z component first)
		  double pznu = calcNuPz(KitaMuon->at(0).vec,KitaMet->vec);
		  p4Neutrino.SetPz(pznu); // z component of neutrino and x/y component of missing momentum -> 4-vector of neutrino
		  p4Neutrino.SetE(p4Neutrino.P());
		  //reconstruct W_lep
		  KITA4Vector W_lep = KitaMuon->at(0).vec + p4Neutrino;
		  //reconstruct top_lep
		  KITA4Vector top_lep = W_lep + p4_b2;
		  //calculate chi^2
		  double chi2 = pow((W_had.M() - w_had_exp),2)/pow(w_had_err,2) + pow((top_lep.M() - top_had.M()-mass_err),2)/pow(top_err,2);
		  //store invariant masses of top quarks if this is the combination with minimal chi2 as of yet
		  if (chi2 < minChi)
		  {
		    minChi = chi2;
		    MTopLepBest = top_lep.M();
		    MTopHadBest = top_had.M();
		  }
		}
		else if (btag_loose > 1 && KitaJets->at(b1).btag_combSV > bcut_loose && KitaJets->at(b2).btag_combSV > bcut_loose)
		{
		  KITA4Vector p4_b1=KitaJets->at(b1).vec;
		  KITA4Vector p4_b2=KitaJets->at(b2).vec;
		  KITA4Vector p4_q1=KitaJets->at(q1).vec;
		  KITA4Vector p4Neutrino=KitaMet->vec;
		  KITA4Vector p4_q2=KitaJets->at(q2).vec;
		  //reconstruct W_had
		  KITA4Vector W_had = p4_q1 + p4_q2;
		  //reconstruct top_had
		  KITA4Vector top_had = W_had + p4_b1;
		  //reconstruct neutrino (calculate z component first)
		  double pznu = calcNuPz(KitaMuon->at(0).vec,KitaMet->vec);
		  p4Neutrino.SetPz(pznu); // z component of neutrino and x/y component of missing momentum -> 4-vector of neutrino
		  p4Neutrino.SetE(p4Neutrino.P());
		  //reconstruct W_lep
		  KITA4Vector W_lep = KitaMuon->at(0).vec + p4Neutrino;
		  //reconstruct top_lep
		  KITA4Vector top_lep = W_lep + p4_b2;
		  //calculate chi^2
		  double chi2 = pow((W_had.M() - w_had_exp),2)/pow(w_had_err,2) + pow((top_lep.M() - top_had.M()-mass_err),2)/pow(top_err,2);
		  //store invariant masses of top quarks if this is the combination with minimal chi2 as of yet
		  if (chi2 < minChi)
		  {
		    minChi = chi2;
		    MTopLepBest = top_lep.M();
		    MTopHadBest = top_had.M();
		  }
		}
		else
		{
		  continue;
		}
	      }
            }
            //close loop for b-quark from top_had
          }
          //close loop for quark 2 from W_had
        }
        //close loop for quark 1 from W_had
      }
      //close loop for b-quark from top_lep
      hMTopHad->Fill(MTopHadBest);
      hMTopLep->Fill(MTopLepBest);
      double MTopAvg = (MTopLepBest+MTopHadBest)/2;
      hMTopAv->Fill(MTopAvg);

      //Fill the histograms with the three reconstucted top quark masses
    }
  } // end of loop over events



  //
  // Write histogramms in file
  //


  TString resultPath;
  resultPath="results/Histos_";
  resultPath+=argv[1];

  TFile* resultFile = new TFile(resultPath, "RECREATE");

  hPtGenTop->Write();
  hPtGenAntiTop->Write();
  hRapGenTop->Write();
  hRapGenAntiTop->Write();
  h2PtRapGenTop->Write();
  h2PtRapGenAntiTop->Write();

  hNJets->Write();

  //push overflow bin into last regular bin
  hM3->SetBinContent(hM3->GetNbinsX(),hM3->GetBinContent(hM3->GetNbinsX())+hM3->GetBinContent(hM3->GetNbinsX()+1));
  hM3->SetBinContent(hM3->GetNbinsX()+1,0);
  hM3B->SetBinContent(hM3B->GetNbinsX(),hM3B->GetBinContent(hM3B->GetNbinsX())+hM3B->GetBinContent(hM3B->GetNbinsX()+1));
  hM3B->SetBinContent(hM3B->GetNbinsX()+1,0);



  hHt->Write();
  hM3->Write();
  hMuonPt->Write();
  hMuonPseudo->Write();
  hMet->Write();

  hM3B->Write();

  hMTopHad->Write();
  hMTopLep->Write();
  hMTopAv->Write();


}
