#ifndef KITAGenParticle_h
#define KITAGenParticle_h

#include "interface/KITA4Vector.h"
#include "interface/KITAObject.h"

#include <vector>
#include "cmath"

class KITAGenParticle : public KITAObject
{

  public:

  KITAGenParticle(){};
  KITAGenParticle(KITA4Vector vec1, int pid1) : 
    KITAObject(vec1),pid(pid1){};
    KITAGenParticle(float px, float py, float pz, float e, int pid1) : 
      KITAObject(KITA4Vector(px,py,pz,e)),pid(pid1){};
  KITAGenParticle(KITA4Vector vec1, int pid1, float Charge1) : 
    KITAObject(vec1),pid(pid1),Charge(Charge1){};
    KITAGenParticle(float px, float py, float pz, float e, int pid1, float Charge1) : 
      KITAObject(KITA4Vector(px,py,pz,e)),pid(pid1),Charge(Charge1){};
  
  
  int pid;                      // pdg ID of the generated particle 
  int MoID;                     // pdg ID of the mother particle 
  float Charge;                 // charge (in units of |e|) of the generated particle

  int Tau_decay;                // in case of a generated tau: how does the tau decay)
                                //  = 0   : hadronic tau-decay (tau -> nu + W(->q + qbar))
                                //  = 11  : leptonic tau-decay (tau -> nu + W(->nu + e))
                                //  = 13  : leptonic tau-decay (tau -> nu + W(->nu + mu))
                                
// extra define 
/* 
 double Pt()
  {
       	 return (sqrt(pow(this->vec.Px(),2)+pow(this->vec.Py(),2)));
  }

  double Rapidity()
  {
	return 0.5*log((this->vec.E()+this->vec.Pz())/(this->vec.E()-this->vec.Pz()));
  }
*/	
};

typedef std::vector<KITAGenParticle> KITAGenParticles;

#endif
