#include "interface/KITAGenInfo.h"
#include "interface/KITAGenJet.h"
#include "interface/KITAGenMet.h"
#include "interface/KITAGenParticle.h"
#include "interface/KITAMcParticle.h"
#include "interface/KITAGenTopEvent.h"
#include "interface/KITAGenSingleTopEvent.h"
#include "interface/KITAGenTprime.h"
#include "interface/KITAGenWFlavor.h"

#include "interface/KITAHlt.h"
#include "interface/KITAJet.h"
#include "interface/KITAElectron.h"
#include "interface/KITAMuon.h"
#include "interface/KITAMet.h"
#include "interface/KITAPFMet.h"
#include "interface/KITAMisc.h"
#include "interface/KITAGenFlavor.h"
#include "interface/KITAPrimaryVertex.h"
#include "interface/KITASemiSols.h"

#include "interface/KITAJetWithSubjets.h"
#include "interface/KITATopJet.h"

#include "interface/KITADataCleaning.h"

// need to explicitely create instances of vector<object> classes
// in order to make genreflex happy

namespace {
  namespace {
    KITAGenMet genmet;
    KITAGenJet genjet;
    KITAGenJets genjets;
    KITAGenParticle genparticle;
    KITAGenParticles genparticles;
    KITAMcParticle mcparticle;
    KITAMcParticles mcparticles;
    KITAGenTopEvent genTopEvent;
    KITAGenSingleTopEvent genSingleTopEvent;
    KITAGenTprime genTprime;
    KITAGenWFlavor genWFlavor;

    KITAJet jet;
    std::map<int, float> mapp;
    std::map<std::string, uint64_t> map2;
    std::vector<KITAJet_PFlowVars> vec_pvars;
    std::vector<KITAJet_CaloVars> vec_cvars;
    std::vector<KITAJet_svBTagInfos> jet_btagsvtaginfos;
    std::vector<KITAJet_TrackbTagInfos> jet_btagtrackinfos;
    KITAJets jets;
    KITAElectron electron;
    KITAElectrons electrons;
    KITAMuon muon;
    KITAMuons muons;
    KITAMet  met;
    KITAPFMet  pfmet;
    KITAPrimaryVertex pv;
    KITAPrimaryVertices pvs;

    KITASemiSol semisol;
    KITASemiSols semisols;

    KITA4Vector vec;

    KITAMap map;
    KITAIntMap intmap;
    
    KITAJetsWithSubjets jets_with_subjets;
    KITAGenJetsWithSubjets genjets_with_subjets;
    KITAJetWithSubjets jet_with_subjets;
    KITAGenJetWithSubjets genjet_with_subjets;
    
    KITATopJet topjet;
    KITATopJets topjets;
    
    KITAGenFlavor flavor;
    
    KITAHlt hlt;
    KITAHlt::KITATriggerObject trgobj;
    std::vector<KITAHlt::KITATriggerObject> vtriggerobject;
    std::map<int, std::vector<KITAHlt::KITATriggerObject> > triggerObjects;

    KITADataCleaning cleandata;

  }
}

