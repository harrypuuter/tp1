#ifndef KITAGenWFlavor_h
#define KITAGenWFlavor_h

class KITAGenWFlavor {

  public:

   // Information about the chains
   void setnChains(int newN){
	   nChains_ = newN;
	   //allocate arrays
	   pdgId_.resize(nChains_);
	   flavorSource_.resize(nChains_);
	   pt_.resize(nChains_);
	   eta_.resize(nChains_);
	   phi_.resize(nChains_);
	   energy_.resize(nChains_);
	   length2_.resize(nChains_);
	   length3_.resize(nChains_);
	   nParents_.resize(nChains_);
	   nSisters_.resize(nChains_);

   }
   void setMaxnParents(int maxParents){
	   //conservative size estimate is nChains times maximum of nParents
	   parentsPdgId_.reserve(nChains_*maxParents);
   }
   int getnChains(){return nChains_;}
  private: //set private to ensure usage of set function
   int nChains_;
  public:
   std::vector<int>pdgId_;
   std::vector<int>flavorSource_;
   std::vector<float>pt_;
   std::vector<float>eta_;
   std::vector<float>phi_;
   std::vector<float>energy_;
   std::vector<int>length2_;
   std::vector<int>length3_;
   std::vector<int>nParents_;  // number of parents for each chain, it sums up to sizeParentsGlobal_
   int nParentsGlobal_;  // needed to emulated dynamic 2D arrays in ROOT tree
   std::vector<int>parentsPdgId_;
   int nSistersGlobal_;  // needed to emulated dynamic 2D arrays in ROOT tree
   std::vector<int>nSisters_;  //  number of sisters for each chain, it sums up to sizeSistersGlobal_
   void setMaxnSisters(int maxSisters){
	   sisters_.reserve(nChains_*maxSisters);
   }
   std::vector<int>sisters_;
        
   // Generator information
   unsigned int processId_;
   int pdfIdFirst_, pdfIdSecond_;
   float xFirst_, xSecond_;
   float ptFirst_, etaFirst_, phiFirst_, energyFirst_;
   float ptSecond_, etaSecond_, phiSecond_, energySecond_;
        
   // Information about light partons leaving ME
  private:
   int nLight_;
  public:
   void setnLight(int nLight){
	   nLight_ = nLight;
	   pdgIdLight_.resize(nLight_);
	   ptLight_.resize(nLight_);
	   etaLight_.resize(nLight_);
	   phiLight_.resize(nLight_);
	   energyLight_.resize(nLight_);
   }
   std::vector<int>pdgIdLight_;
   std::vector<float>ptLight_;
   std::vector<float>etaLight_;
   std::vector<float>phiLight_;
   std::vector<float>energyLight_;
        
   // Generator jets

  private:
   int nJets;
  public:
   void setnJets(int nJets_){
	   nJets= nJets_;
	   ptJet_.resize(nJets);
	   etaJet_.resize(nJets);
	   phiJet_.resize(nJets);
	   energyJet_.resize(nJets);
   }
   int getnJets(){return nJets;}
   std::vector<float>ptJet_;
   std::vector<float>etaJet_;
   std::vector<float>phiJet_;
   std::vector<float>energyJet_;

};

#endif

