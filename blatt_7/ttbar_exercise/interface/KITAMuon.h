#ifndef KITAMuon_h
#define KITAMuon_h

#include "interface/KITA4Vector.h"
#include "interface/KITAObject.h"
//#include "DataFormats/DetId/interface/DetId.h"


#include <vector>

class KITAMuon : public KITAObject {

  public:

  struct point{
    float x, y, z;

    void setCoord(float xcomp, float ycomp, float zcomp) {
      x = xcomp;
      y = ycomp;
      z = zcomp;
    }
  };

  int charge;

  // 4-vector and Charge of matched generated electron
  KITA4Vector genVec;
  int genLeptonCharge;

  //GlobalMuonPromptID;
  bool isGlobalMuonPromptTight;

  //Muon Category
  bool isGlobalMuon, isStandAloneMuon, isTrackerMuon, isCaloMuon;

  // isolation 
  float pf_iso_particle, pf_iso_neutrals, pf_iso_charged, pf_iso_photon;

  //Global muon and IP wrt (0,0,0)
  float NoOfHits, NoOfLostHits, redChi2, d0, d0Error;
  //tracker muon
  float trackerNoOfHits, trackerNoOfLostHits, trackerChi2, trackerd0, trackerd0Error, trackerPt;
  // SA muon quantities
  float trSaNoOfHits,trSaChi2;

  //variables introduced by the VBTF (06/04/10)
  int NoOfMatches;   //Number of used stations
  int trackerNoOfValidTrackerHits, trackerNoOfValidPixelHits, trackerNoOfValidStripHits,trackerNoOfValidMuonHits; //quality for Muon tracker track
  int NoOfValidTrackerHits, NoOfValidPixelHits, NoOfValidStripHits, NoOfValidMuonHits; //quality for Muon global track

  int PixelLayersWithMeasurements, trackerPixelLayersWithMeasurements;


  //IP with respect to PrimaryVertex in Perigee approximation; (error not avail -> need to be invest. with error propag.)
  float dxyPV, dxyBSp, dB, dBSig;

  float IPPV, IPPVErr, IPPVSig;
  float trackerIPPV, trackerIPPVErr, trackerIPPVSig;
  float IP3DPV, IP3DPVErr, IP3DPVSig;
  float trackerIP3DPV, trackerIP3DPVErr, trackerIP3DPVSig;

  //Coordinates of the MuonVtx;
  float GMvtxX, GMvtxY, GMvtxZ;
  float vtxX, vtxY, vtxZ;

  //Z-Distances of the MuonVtx to PV/Bsp
  float distGlobalMuVtxPV, distMuVtxPV, distGlobalMuVtxBSp, distMuVtxBSp;

  // trigger matching
  std::vector<int> trigMatchFilterIdxs;
  std::vector<KITA4Vector> trigMatchVecs;
  
  int numberOfChambers;
  int jet_index; // index of PFJet this muon was clustered to. More details in KITAElectron.h
};



typedef std::vector<KITAMuon> KITAMuons;

#endif

