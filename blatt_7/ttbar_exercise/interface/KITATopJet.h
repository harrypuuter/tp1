#ifndef KITA_TOPJET_H
#define KITA_TOPJET_H

#include <vector>
#include "interface/KITAJet.h"
#include "interface/KITAGenJet.h"

class KITATopJet {
public:
  KITAJet fat_jet;
  std::vector<KITA4Vector> subjets;
};

typedef std::vector<KITATopJet> KITATopJets;

class KITAGenTopJet {
public:
  KITAGenJet fat_jet;
  std::vector<KITA4Vector> subjets;
};

typedef std::vector<KITAGenTopJet> KITAGenTopJets;

#endif
