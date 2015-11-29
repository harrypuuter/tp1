#ifndef KITA_JET_WITH_SUBJETS_H
#define KITA_JET_WITH_SUBJETS_H

#include <vector>
#include "interface/KITAJet.h"
#include "interface/KITAGenJet.h"

class KITAJetWithSubjets{
public:
  KITAJet fat_jet;
  std::vector<KITAJet> subjets;
};

typedef std::vector<KITAJetWithSubjets> KITAJetsWithSubjets;

class KITAGenJetWithSubjets{
public:
  KITAGenJet fat_jet;
  std::vector<KITAGenJet> subjets;
};

typedef std::vector<KITAGenJetWithSubjets> KITAGenJetsWithSubjets;

#endif
