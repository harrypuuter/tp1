void calibrateEM()
{

  // FIXME: There are two possibilities to execute the script:
  // i) root run_hadron_g4.C
  //    root[] .L calibrateEM.C
  //    root[] calibrateEM()
  // or ii) Include the basics from run_hadron_g4.C here and 
  //    execute simply:
  //    root calibrateEM.C

  //FIXME: Load "CountChargedinScint.C"


  //FIXME: Initialize the geometry

  //FIXME: Set the primary particle to photon
 
  // Profile histogram - will show us the mean numbers of counts in bins of the energy.
  // The given binning refers to the energy, the other binning will be inferred automatically.
  TProfile* hcounts = new TProfile("hcounts","Counts per particle energy",
				   10,0,10);
  hcounts->SetXTitle("energy [GeV]");
  hcounts->SetYTitle("mean number of counts");
  
  // FIXME loop over different particle momenta, and for each momentum simulate several events (e.g. 10)
  {
    //FIXME: Set the momentum of the primary particle to p
    //FIXME: Run the simulation
    //FIXME: Fill both the momentum and the output from CountChargedinScint
    //        into the profile histogram hcounts
  }
  
  TCanvas* c = new TCanvas();
  c->cd();
  hcounts->Draw();

  //FIXME: Fit the histogram to get the calibration factor

}
