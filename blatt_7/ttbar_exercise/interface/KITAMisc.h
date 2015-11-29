#ifndef KITAMisc_h
#define KITAMisc_h

#include <map>

class KITAMisc {
  public:

  // run and event number
  int nRun,nEvent;
  int luminosityBlock,storeNumber,bunchCrossing,orbitNumber;
  bool isRealData;

  //beam spot position
  float BSpX,BSpY,BSpZ;
  
  // fastjet pileup estimation
  std::map<int, float> rhos;
  enum rho_keys{
     pf_kt6, pf_nopileup_kt6,
     pf_kt6_eta25, pf_nopileup_kt6_eta25
  };

  //scraping filter
  bool filteredByScraping;

};

#endif

