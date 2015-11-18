{
     // Load basic libraries
  gROOT->LoadMacro("$G4PATH/geant4_vmc/examples/macro/basiclibs.C");
  basiclibs();
  
  // Load Geant4 libraries
  gROOT->LoadMacro("$G4PATH/geant4_vmc/examples/macro/g4libs.C");
  g4libs();
  
  // Load the tutorial application library
  gSystem->Load("libTutorialApplication");
  
  // MC application
  TutorialApplication* app 
    = new TutorialApplication("TutorialApplication",
      "Tutorial Application for HEP Lecture @EKP");
    
      
  // configure Geant4
  gROOT->LoadMacro("g4Config.C");
  Config();

  // instantiate graphical user interface for tutorial application
  new TutorialMainFrame(app);
}
