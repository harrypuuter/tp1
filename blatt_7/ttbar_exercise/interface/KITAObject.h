#ifndef KITAObject_h
#define KITAObject_h

#include <vector>

#include "interface/KITA4Vector.h"

class KITAObject
{

  public:

  KITAObject(){};
  KITAObject(KITA4Vector vec1) : vec(vec1) {};

  KITA4Vector vec;


};

#endif
