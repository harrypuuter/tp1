//Modified calorimeter config file, variable size depending on 
//the mean interaction length of mixture of materials (Lines 7-11)
//Benjamin Treiber, Karlsruhe 2011-10-27

void comp_calor(Double_t width1 = 0.45, Double_t width2 = 1.0)
{
    //Double_t lambda_i_Abs = 17.59; //Hadr. interaction length Lead
  Double_t lambda_i_Abs = 16.77; // Hadr. interaction length Iron
  Double_t lambda_i_Scint = 78.80; //Hadr. interaction length PVT
	
  Double_t x = exp(width1/lambda_i_Abs)*exp(width2/lambda_i_Scint);
  Double_t comb_lambda_i = 1/log(x)*(width1+width2); //combined interaction length
	
  // identifier of tracking media
  Int_t indVac = gGeoManager->GetMedium("Vacuum")->GetId();
  Int_t indPb  = gGeoManager->GetMedium("Fe")->GetId();
  Int_t indSci = gGeoManager->GetMedium("Scintillator")->GetId();
  
  Double_t offsetX      = 0.0;
  Double_t exphXYZ[3]   = {comb_lambda_i*10,comb_lambda_i*5,comb_lambda_i*5}; // calorimeter size using comb. int.length
  Double_t layer1XYZ[3] = {width1 / 2, exphXYZ[1], exphXYZ[2]};
  Double_t layer2XYZ[3] = {width2 / 2, exphXYZ[1], exphXYZ[2]};
  
  Double_t*ubuf(0);
  
  // experimental hall, "world volume"  
  TGeoVolume* top = gGeoManager->Volume("EXPH","BOX",indVac,exphXYZ,3);
  gGeoManager->SetTopVolume(top);

  // calorimeter layers
  Int_t ilayer(1);
  Double_t x=2.*offsetX;
  for (;x<exphXYZ[0]-2*layer1XYZ[0]-2*layer2XYZ[0];++ilayer) {
    cout<<"ilayer="<<ilayer<<endl;
    x+=layer1XYZ[0];
    stringstream ss1; ss1<<"ABS"<<ilayer;
    gGeoManager->Volume(ss1.str().c_str(),"BOX",indPb,layer1XYZ,3);
    gGeoManager->Node(ss1.str().c_str(),1,"EXPH",x,0.,0.,0,kTRUE,ubuf);
    x+=layer1XYZ[0];
    x+=layer2XYZ[0];
    stringstream ss2; ss2<<"SCI"<<ilayer;
    gGeoManager->Volume(ss2.str().c_str(),"BOX",indSci,layer2XYZ,3);
    gGeoManager->Node(ss2.str().c_str(),1,"EXPH",x,0.,0.,0,kTRUE,ubuf);
    x+=layer2XYZ[0];
  }
  
}
