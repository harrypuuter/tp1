#ifndef KITAElectron_h
#define KITAElectron_h

#include <vector>
#include <map>

#include "interface/KITA4Vector.h"
#include "interface/KITAObject.h"

class KITAElectron : public KITAObject {

  public:
  int charge;

  // 4-vector and charge of matched generated electron
  KITA4Vector genVec;
  int genLeptonCharge;

  // vertex
  float vtxX,vtxY,vtxZ;
  // electron category
  int category;
  // our own simplified electron category 0:golden 1:narrow 2:big brem 3:shower
  int myClass;
  float fBremMode; // brem fraction mean/mode
 
  // diverse stuff
  float caloEnergy,ptIn,ptCalo,ptOut,eOverPIn,eOverPScOut,dEtaIn,dEtaOut,dPhiIn,dPhiOut,hadOverEm;
  float errorECalo,errorPTrack; // the errors on the supercluster energy and track momentum

  // isolations
  float pf_iso_particle, pf_iso_neutrals, pf_iso_charged, pf_iso_photon;

  // electron id
  float electronIdLoose; 
  float electronIdRobustHE;
  float electronIdRobustLoose;
  float electronIdRobustTight;
  float electronIdTight;

  // track and IP variables
  float trNoOfHits, trNoOfLostHits, trChi2, d0, d0Error;
  int trNoOfValidPxHits;  //number of valid hits in the pixel detector
  int trNoOfECL_Inner; //number of expected crossed layers before the first valid hit (tracker) see AN-2009/159

  //IP wrt BSp or wrt PV
  float dB, dxyPV, dxyBSp;
  float IPPV, IPPVErr, IPPVSig;
  float IP3DPV, IP3DPVErr, IP3DPVSig;
  float distEleVtxPV, distEleVtxBSp;

  // supercluster
  float sclE,sclEt,sclEta,sclPhi;

  // conversion finder see AN-2009/159
  double dist;
  double dcot;
  double radiusOfConversion;
  int conv_flag;
  //note the old 'isConversion' is equivalent to 'fabs(dist) < 0.02 && fabs(dcot) < 0.02'. In SKITA, use isConversion, defined in Utils.hpp.
  //bool isConversion;

  //for comissioning
  double sclphiwidth, scletawidth;   //eta and phi width of the supercluster
  double trackp, trackpt, trackpx, trackpy, trackpz, trackphi, tracketa, trackouterp, trackouterpt, trackoutereta, trackouterphi;  //gsf-track parameters
  bool isEcaldriven, isTrackerdriven;  //seeding is Ecal or Tracker driven
  //track cluster matching
  float eSuperClusterOverP;   // the supercluster energy / track momentum at the PCA to the beam spot
  float eSeedClusterOverP;    // the seed cluster energy / track momentum at the PCA to the beam spot
  float eSeedClusterOverPout; // the seed cluster energy / track momentum at calo extrapolated from the outermost track state
  float eEleClusterOverPout;  // the electron cluster energy / track momentum at calo extrapolated from the outermost track state
  float deltaEtaSuperClusterAtVtx; // the supercluster eta - track eta position at calo extrapolated from innermost track state
  float deltaEtaSeedClusterAtCalo; // the seed cluster eta - track eta position at calo extrapolated from the outermost track state
  float deltaEtaEleClusterAtCalo;  // the electron cluster eta - track eta position at calo extrapolated from the outermost state
  float deltaPhiEleClusterAtCalo;  // the electron cluster phi - track phi position at calo extrapolated from the outermost track state
  float deltaPhiSuperClusterAtVtx; // the supercluster phi - track phi position at calo extrapolated from the innermost track state
  float deltaPhiSeedClusterAtCalo; // the seed cluster phi - track phi position at calo extrapolated from the outermost track state
  
  struct point{
    float x;
    float y;
    float z;

    void setCoord(float xcomp, float ycomp, float zcomp) {
      x = xcomp;
      y = ycomp;
      z = zcomp;
    }
  };
  struct vector{
    float x;
    float y;
    float z;

    void setCoord(float xcomp, float ycomp, float zcomp) {
      x = xcomp;
      y = ycomp;
      z = zcomp;
    }
  };

  point trackPositionAtVtx;                  // the track PCA to the beam spot
  point trackPositionAtCalo;                 // the track PCA to the supercluster position
  vector trackMomentumAtVtx;                 // the track momentum at the PCA to the beam spot
  vector trackMomentumAtCalo; // the track momentum extrapolated at the supercluster position from the innermost track state
  vector trackMomentumOut; // the track momentum extrapolated at the seed cluster position from the outermost track state
  vector trackMomentumAtEleClus; // the track momentum extrapolated at the ele cluster position from the outermost track state
  vector trackMomentumAtVtxWithConstraint; // the track momentum at the PCA to the beam spot using bs constraint
  
  bool isEB;        // true if particle is in ECAL Barrel
  bool isEE;        // true if particle is in ECAL Endcaps
  bool isGap;       // true if particle is in any crack

  float sigmaEtaEta;        // weighted cluster rms along eta and inside 5x5 (absolute eta)
  float sigmaIetaIeta;      // weighted cluster rms along eta and inside 5x5 (new, Xtal eta)
  float e1x5;               // energy inside 1x5 in etaxphi around the seed Xtal
  float e2x5Max;            // energy inside 2x5 in etaxphi around the seed Xtal (max bwt the 2 possible sums)
  float e5x5;               // energy inside 5x5 in etaxphi around the seed Xtal
  float hcalDepth1OverEcal; // hcal over ecal seed cluster energy using first hcal depth (hcal is energy of towers within dR=015)
  float hcalDepth2OverEcal; // hcal over ecal seed cluster energy using 2nd hcal depth (hcal is energy of towers within dR=015)

  int BCsize; //number of BasicCluster constituents of the Supercluster
  
  int jet_index; // the ak5pfjet this electron has been clustered to. -2 if this matching was disabled in the config, -1 if not clustered to a jet.
};

typedef std::vector<KITAElectron> KITAElectrons;

#endif

