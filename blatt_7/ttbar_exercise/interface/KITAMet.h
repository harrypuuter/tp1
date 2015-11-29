#ifndef KITAMet_h
#define KITAMet_h

#include "interface/KITA4Vector.h"

class KITAMet
{

  public:

  // 4-vector
  KITA4Vector vec;

  float ucorrPt_full, ucorrPhi_full; //fully uncorrected MET
  float ucorrPt_JES, ucorrPhi_JES;   //only JES corrections are not applied
  float ucorrPt_Mu, ucorrPhi_Mu;      //only muon corrections are not applied

  double sumEt;                      //scalar sum of transverse energy over all objects
  double METsig;                     //MET Significance = MET / sqrt(sumEt)

};

#endif

