#include "TutorialApplication.hh"
#include "TutorialMainFrame.hh"

#include <TGClient.h>
#include <TGFrame.h>
#include <RQ_OBJECT.h>
#include <TGButtonGroup.h>
#include <TGButton.h>
#include <TApplication.h>
#include <TRootEmbeddedCanvas.h>
#include <TCanvas.h>

#include <iostream>

class GeometryChoserFrame;


class Steering
{
  RQ_OBJECT("Steering");
  
private:
  TutorialApplication* app;
  virtual ~Steering() {}
public:
  Steering() {}
  void Start();
  void ConstructGeometry(int material);
};


Steering* gSteering = new Steering();


class GeometryChoserFrame
{
  RQ_OBJECT("GeometryChoserFrame");

private:
  TGMainFrame* fMain;
  int fMaterial;
  
public:
  GeometryChoserFrame();
  virtual ~GeometryChoserFrame();
  void SetMaterial(int mat) { fMaterial = mat;}
  void Done(); 
};


//______________________________________________________________________________
GeometryChoserFrame::GeometryChoserFrame()
{
  fMain = new TGMainFrame(gClient->GetRoot(),200,200);
  
  TGButtonGroup* bg = new TGButtonGroup(fMain,"chose Material",kVerticalFrame);
  TGRadioButton* mat[3];
  mat[0] = new TGRadioButton(bg,new TGHotString("&Pb"));
  mat[1] = new TGRadioButton(bg,new TGHotString("&Fe"));
  mat[2] = new TGRadioButton(bg,new TGHotString("&U"));
  
  mat[0]->Connect("Clicked()","GeometryChoserFrame",this,"SetMaterial(=3)");
  mat[1]->Connect("Clicked()","GeometryChoserFrame",this,"SetMaterial(=4)");
  mat[2]->Connect("Clicked()","GeometryChoserFrame",this,"SetMaterial(=5)");
  
  fMain->AddFrame(bg,new TGLayoutHints(kLHintsCenterX,10,10,10,1));
  
  TGTextButton* done = new TGTextButton(fMain,"&Done");
  done->Connect("Clicked()","GeometryChoserFrame",this,"Done()");

  fMain->AddFrame(done,new TGLayoutHints(kLHintsCenterX,10,10,10,1));
  
  fMain->SetWindowName("Geometry");
  fMain->MapSubwindows();
  fMain->Resize(fMain->GetDefaultSize());
  fMain->MapWindow();

  fMain->Connect("CloseWindow","GeometryChoserFrame",this,"Done()");
}


//______________________________________________________________________________
GeometryChoserFrame::~GeometryChoserFrame()
{
  fMain->Cleanup();
  delete fMain;
}


//______________________________________________________________________________
void GeometryChoserFrame::Done()
{ 
  if(fMaterial == -1 ) return;
  int mat = fMaterial;
  fMaterial = -1;
  gSteering->ConstructGeometry(mat);
  fMain->SendCloseMessage();
}


//______________________________________________________________________________
void Steering::Start()
{
  new GeometryChoserFrame();
}


//______________________________________________________________________________
void Steering::ConstructGeometry(int material)
{
  app = new TutorialApplication();
  TString geom("geometry/g1");
  geom.Append("(");
  char c = '0' + (char)material;
  geom.Append(c);
  geom.Append(")");
  new TutorialMainFrame(app);
  app->InitMC(geom);
}
