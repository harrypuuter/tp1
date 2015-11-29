#ifndef KITAGenInfo_h
#define KITAGenInfo_h

#include <string>
#include <vector>

#include "interface/KITA4Vector.h"


class KITAGenInfo {

  public:
  std::vector<double> binningValues;
  std::vector<double> weights;

  // pdf info
  int id1,id2; // id of partons 1,2
  float x1,x2,scale,pdf1,pdf2; // x1,x2 scale pdf1,pdf2
  
  int pileup_intime; // in-time pileup
  int pileup_ootbefore; // oot pileup before
  int pileup_ootafter; // oot pileup after
  float poisson_mean; // Poisson mean used to generate pileup
};

#endif

