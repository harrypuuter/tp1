#ifndef KITAGenTopEvent_h
#define KITAGenTopEvent_h

#include "interface/KITAGenParticle.h"

#include <vector>


class KITAGenTopEvent {

  public:

  std::vector<KITAGenParticle> quarks;
  std::vector<KITAGenParticle> leptons;
  std::vector<KITAGenParticle> neutrinos;
  std::vector<KITAGenParticle> tops;
  std::vector<KITAGenParticle> ws;
  std::vector<KITAGenParticle> initialpartons;
  std::vector<KITAGenParticle> topbottoms;
  std::vector<KITAGenParticle> higgs;
  std::vector<KITAGenParticle> higgsbottoms;
  std::vector<KITAGenParticle> otherbottoms;

  int DecChan;           // Decay Channel


  ////////////////////////////////////////////////////
  //     nomenclatur: pids of the charged leptons   //
  //                  from the ttbar decay          //
  //                                                //
  //      0       : All hadronic                    //
  //      11      : Lepton(electron) + Jets         // 
  //      13      : Lepton(muon) + Jets             //
  //      15      : Lepton(tau) + Jets              //  
  //      1111    : Dilepton (e+e)                  // 
  //      1113    : Dilepton (e+mu)                 //
  //      1115    : Dilepton (e+tau)                // 
  //      1313    : Dilepton (mu+mu)                //
  //      1315    : Dilepton (mu+tau)               //
  //      1515    : Dilepton (tau+tau)              //
  ////////////////////////////////////////////////////

  int ProdProc;
  // 1: q+qbar
  // 2: gluon+gluon, q+q, qbar+qbar (symmetric)
  // 3: q+gluon, qbar+gluon

};

#endif
