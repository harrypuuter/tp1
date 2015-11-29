#ifndef KITASemiSols_h
#define KITASemiSols_h

#include "interface/KITA4Vector.h"

#include<vector>

class KITASemiSol {

  public:

  // indices of KITAJet/KITAMuon for this solution
  int IndMuon,IndHadP,IndHadQ,IndHadB,IndLepB;
  // reconstructed Mt,MW
  float MtRec,MwRec;
  // kinematic fit: probab, fitted Mt,MW
  float FitProb,MtFit,MwFit;
  // signal selection LR value,probab
  float SigLRVal,SigLRProb;
  // jet combination LR value,probab
  float JetCombLRVal,JetCombLRProb;

  std::vector<float> SigLRVar;
  std::vector<float> JetCombLRVar;
};

class KITASemiSols
{

  public:

  int IndMcBest; // mc truth best combination
  int IndSimpleBest; // simple best combination
  int IndLRBest; // LR best combination
  int ChangeWq; // quarks from had. W flipped?

  // vector of solutions (normally 12, if >=4 jets and >=1 lepton found)
  std::vector<KITASemiSol> Sols;

};

#endif

