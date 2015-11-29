#ifndef KITAGenSingleTopEvent_h
#define KITAGenSingleTopEvent_h

#include "interface/KITAGenParticle.h"

#include <vector>


class KITAGenSingleTopEvent {

  public:
  KITAGenParticle q1;
  KITAGenParticle q2;
  KITAGenParticle secb;
  KITAGenParticle top;
  KITAGenParticle Wtop;
  KITAGenParticle btop;
  KITAGenParticle lep;
  KITAGenParticle nu;

  int DecChan;           // decay channel
  			// 0 e,mu/nu 1 tau,nu 2 qqbar (old)
                        // 0 e/nu, 1 mu/nu 2 tau,nu 3 qqbar
  int procID;           // 22, 23
  int mcLepID;
  int btop_id;		// top decays to 5 b 3 s 1 d
  int secb_id;          // sec b aka soft quark from gluon splitting
  double eventWeight;
  double QLep_gen;
  
};

#endif
