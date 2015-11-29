#ifndef KITAMcParticle_h
#define KITAMcParticle_h

#include "interface/KITA4Vector.h"
#include "interface/KITAObject.h"

#include <vector>

class KITAMcParticle : public KITAObject
{

  public:

  KITAMcParticle(){};

  KITAMcParticle(KITA4Vector vec1, int idx1, int pid1, int status1, int mo1, int mo2, int d1, int d2, float ch1) : 
    KITAObject(vec1),idx(idx1),pid(pid1),status(status1),mother1(mo1),mother2(mo2),daug1(d1),daug2(d2),ch(ch1){};

    KITAMcParticle(float px, float py, float pz, float e, int idx1, int pid1, int status1, int mo1, int mo2, int d1, int d2, float ch1) : 
      KITAObject(KITA4Vector(px,py,pz,e)),idx(idx1),pid(pid1),status(status1),mother1(mo1),mother2(mo2),daug1(d1),daug2(d2),ch(ch1){};

  int idx,pid,status,mother1,mother2,daug1,daug2;  
  float ch;

};

typedef std::vector<KITAMcParticle> KITAMcParticles;

#endif
