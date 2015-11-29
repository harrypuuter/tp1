#ifndef KITAGenTprime_h
#define KITAGenTprime_h

#include <string>
#include <vector>

#include "interface/KITA4Vector.h"


class KITAGenTprime {
  
 public:
  
  //for semileptonic decay (DecChan=0,1), variable
  // names are self-explanatory.
  //for the all-handronic decay (DecChan=2), the "lep"
  // part contains the hadronic information, particularly,
  // p4Lep_gen is the *anti*-quark and p4Nu_gen the (non-anti-)quark.
  // p4Top_lep_gen is always the ANTI-Top.
  //for the dilepton decay (DecChan=3,4,5), the "had" part
  // contains also lepton+nu. In particular,
  // p4Q1_had_gen refers to the neutrino and 
  // p4Q2_had_gen to the "second" lepton (always +).
  // p4Top_lep_gen is always the ANTI-Top. 
  KITA4Vector p4Parton1_gen; //type ptype[0], with larger z momentum (positive for most events)
  KITA4Vector p4Parton2_gen; //type ptype[1], with smaller z momentum (negative for most events)
  KITA4Vector p4Top_lep_gen;
  KITA4Vector p4Top_had_gen;
  KITA4Vector p4Lep_gen;
  KITA4Vector p4Nu_gen;
  KITA4Vector p4W_lep_gen;
  KITA4Vector p4B_lep_gen;
  KITA4Vector p4Q1_had_gen; //Q
  KITA4Vector p4Q2_had_gen; //Qbar
  KITA4Vector p4W_had_gen;
  KITA4Vector p4B_had_gen;
    
  // charge of the lepton. Only filled in DecChan = 0 or 1.
  int QLep_gen;
    

  int ProdProc; // =1 for q + qbar as initial partons (assymteric initial state)
  // =2 for (g + g) or (q + q) or (qbar + qbar) as initial partons
  //    ("symmetric" initial state)
  // =3 for (q + g) or (qbar + g) (assymetric).
  // =0 for "not specified" (should not happen ...).
  //for more detailed information, look at the ptype[] variable below. 

  int DecChan; // =0 for qqbar + e/mu/nu
  // =1 for qqbar + tau/nu
  // =2 for qqbar + qqbar
  // =3 for e/mu/nu + e/mu/nu
  // =4 for e/mu/nu + tau/nu
  // =5 for tau/nu + tau/nu
  //10 is added if the four vector saved in p4B_had_gen is no b (but a lighter quark)
  //100 is added if the four vector saved in p4B_lep_gen is no b (but a lighter quark)

  int mc_LepID; // set for decay channel = 0 and = 1
  // for channel 3,4,5 (=dilepton channels)
  // always refers to the lepton saved in *_lep_*-variables.
    
  int Q1id;
  int Q2id;//the particle ids for the particles referred to by p4Q1_had_gen and p4Q2_had_gen.
    
    
  //partons pdgids of initial state (via TQAF "initSubset"):
  int ptype[2];//0 in +z, 1 in -z direction.
};

#endif

