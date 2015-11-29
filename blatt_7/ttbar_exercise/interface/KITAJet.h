#ifndef KITAJet_h
#define KITAJet_h

#include <vector>
#include <map>

#include "interface/KITA4Vector.h"
#include "interface/KITAObject.h"


struct KITAJet_CaloVars {
    float emFrac;
    //these are from the jetid:
    float fHPD; 
    float fRBX;
    int n90Hits;
    float fSubDetector1;
    float fSubDetector2;
    float fSubDetector3;
    float fSubDetector4;
    float restrictedEMF;
    int nHCALTowers;
    int nECALTowers;
    float approximatefHPD;
    float approximatefRBX;
    int hitsInN90;
    int numberOfHits2RPC;
    int numberOfHits3RPC;
    int numberOfHitsRPC;
};
  
struct KITAJet_PFlowVars {
    //energies of the different components
    float ChHadronEnergy;        //energy of the charged hadrons in the jet
    float NHadronEnergy;         //energy of the neutral hadrons in the jet
    float PhEnergy;              //energy of the photons in the jet
    float EleEnergy;             //energy of the electrons in the jet
    float MuEnergy;              //energy of the muons in the jet
    float HFHadronEnergy;        //hadronic energy in the HF 
    float HFEmEnergy;            //electromagnetic energy in the HF

    //multiplicities of the different components
    int ChHadronMult;            //charged hadron multiplicity
    int NHadronMult;             //neutral hadron multiplicity
    int PhMult;                  //photon multiplicity
    int EleMult;                 //electron multiplicity
    int MuMult;                  //muon multiplicity
    int HFHadronMult;            //hadron multiplicity in the HF
    int HFEmMult;                //electromagnetic multiplicity in the HF
};

struct KITAJet_TrackbTagInfos{
	float ip_trackMomentum;
	float ip_trackEta;
	float ip_trackEtaRel;
	float ip_trackPtRel;
	float ip_trackPPar;
	float ip_trackDeltaR;
	float ip_trackPtRatio;
	float ip_trackPParRatio;
	float ip_trackSip3dVal;
	float ip_trackSip3dSig;
	float ip_trackSip2dVal;
	float ip_trackSip2dSig;
	float ip_trackDecayLenVal;
	float ip_trackJetDistVal;
	float ip_trackJetDistSig;
	float ip_trackGhostTrackDistVal;
	float ip_trackGhostTrackDistSig;
	float ip_trackGhostTrackWeight;
	float ip_trackChi2;
	float ip_trackNTotalHits;
	float ip_trackNPixelHits;
};

struct KITAJet_svBTagInfos{
	int 	svt_nSelectedTracks;
	int 	svt_nVertexTracks;
	int 	svt_nVertices;
	int 	svt_nVertexCandidates;
	int 	svt_vertexType;
	int	svt_isValid;
	int	svt_isFake;
	int  	svt_hasRefittedTracks;
	float  	svt_vertexMass;
	float  	svt_vertexPt;
	double 	svt_chi2;
	double 	svt_ndof;
	double 	svt_normalizedChi2;
	double 	svt_x;
	double 	svt_y;
	double 	svt_z;
	double 	svt_xError;
	double 	svt_yError;
	double 	svt_zError;
};

class KITAJet: public KITAObject {
  public:
  //default constructor resets all fields to "empty" values:
  // - -1e9 for floats
  // - -1e9 for integer quantities, including particle ids
  // - (0,0,0,0) for four-vectors
  KITAJet(): partonVec(0,0,0,0), genJetVec(0,0,0,0){
      const int not_filled_int = -1000000000;
      const float not_filled = -1e9;
      partonFlav = not_filled_int;
      btag_simpleSVHE = btag_simpleSVHP = btag_combSV = btag_combSVMVA = not_filled;
      btag_trkcntHE = btag_trkcntHP = btag_softele = btag_softmuon = not_filled;
      jetCharge = not_filled;
      nTracks = not_filled_int;
  }
  
  int partonFlav;
  KITA4Vector partonVec;
  KITA4Vector genJetVec;    //4-vector of the matched genJet

  // b-tagging info
  float btag_simpleSVHE;      //simple Secondary Vertex tagger - high efficiency
  float btag_simpleSVHP;      //simple Secondary Vertex tagger - high purity
  float btag_combSV;        //combined Secondary Vertex tagger
  float btag_combSVMVA;     //combined Secondary Vertex tagger using MVA
  float btag_trkcntHE;      //track counting high efficiency
  float btag_trkcntHP;      //track counting high purity
  float btag_softele;       //soft electron tagger
  float btag_softmuon;      //soft muon tagger

  //JES correction: multiply the jet four vector with the corresponding factor to get the jet corrected 
  //up to this level - standard PAT corrections depend on the configuration, usually up to L3
  //Example:
  // jet.vec * jet.jec_factors[KITAJet::RAW]
  //is the four vector of the uncorrected jet.
  std::map<int, float> jec_factors;
  enum jec_factors_keys{
     RAW, L1, L2, L3, 
     L2L3Res,
     L4,
     L5g, L5uds, L5c, L5b,
     L6g, L6uds, L6c, L6b,
     L7g, L7uds, L7c, L7b,
     Uncertainty
  };


  // jet charge and number of assoc tracks
  float jetCharge;
  int nTracks;
  float area;
  float pileup_energy;

  //these vectors have either 0 or exactly 1 entry, depending on the jet type.
  std::vector<KITAJet_CaloVars> calovars;
  std::vector<KITAJet_PFlowVars> pflowvars;

  //vector of size nTracks containing IP bTagInfos for each track inside of the jet
  std::vector<KITAJet_TrackbTagInfos> btagtrackinfos;
  //vector of size nSecondaryVertices containing SV bTagInfos for each secondary vertex inside of the jet
  std::vector<KITAJet_svBTagInfos>    btagsvtaginfos;
};

typedef std::vector<KITAJet> KITAJets;

#endif

