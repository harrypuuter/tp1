#ifndef KITAHlt_h
#define KITAHlt_h

#include <vector>
#include "interface/KITAMap.h"
#include "interface/KITA4Vector.h"
#include "stdint.h"

class KITAHlt {
public:
  std::map<std::string, uint64_t> triggerInfos; // map from trigger name to info integer
  
  static int l1_prescale(uint64_t trigger_info){
      return (trigger_info >> 34);
  }
  
  static int hlt_prescale(uint64_t trigger_info){
      return (trigger_info >> 4) & 0x3FFFFFFF;
  }
  
  static int status(uint64_t trigger_info){
      return trigger_info & 0xF;
  }
  
  static uint64_t build_trigger_info(int l1_pre, int hlt_pre, int stat){
      return ((uint64_t)l1_pre << 34) | ((uint64_t)hlt_pre << 4) | (stat & 0xF);
  }
  
  // trigger object stuff:
  enum triggerObjectCodes{jets, muonsl3, muons17iso, ele25, ele25iso, stmu_bjets, stele_bjets};

  struct KITATriggerObject{
    KITA4Vector vec;
  };
  std::map<int, std::vector<KITATriggerObject> > triggerObjects;
};

#endif

