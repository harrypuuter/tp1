#include "TGeoManager.h"
#include "TGeoTrack.h"
#include "TDatabasePDG.h"

#include "TMath.h"
#include <iostream>

Float_t FinalRofPrimary()
{
  TObjArray* tracks = gGeoManager->GetListOfTracks();
  
  //get primary
  TGeoTrack* track = (TGeoTrack*)tracks->At(0);
  
  //get the last point of this track
  Double_t x,y,z,t;
  Int_t npoints = track->GetNpoints();
  track->GetPoint(npoints - 1,x,y,z,t);
  
  return TMath::Sqrt(x*x+y*y);
}
