#ifndef KITAPFMet_h
#define KITAPFMet_h

#include "interface/KITA4Vector.h"

class KITAPFMet
{

  public:

  // 4-vector
  KITA4Vector vec;

  float ucorrPt_full, ucorrPhi_full; //fully uncorrected MET
  float ucorrPt_JES, ucorrPhi_JES;   //only JES corrections are not applied
  float ucorrPt_Mu, ucorrPhi_Mu;      //only muon corrections are not applied

  double sumEt;                      //scalar sum of transverse energy over all objects
  double METsig;                     //MET Significance = MET / sqrt(sumEt)

  double NeutralEMEtFraction;
  double NeutralEMEt;
  double NeutralHadEtFraction;
  double NeutralHadEt;
  double ChargedEMEtFraction;
  double ChargedEMEt;
  double ChargedHadEtFraction;
  double ChargedHadEt;
  double MuonEtFraction;
  double MuonEt;
  double Type6EtFraction;
  double Type6Et;
  double Type7EtFraction;
  double Type7Et;

  
};

#endif

