rootstyle() {
  
  TStyle *GloStyle;
  GloStyle = gStyle;                          // save the global style reference
  
  TStyle *MyStyle = new TStyle("MyStyle","Nice ROOT settings");
  gStyle = MyStyle;
  
  MyStyle->SetTextFont        (52);
  
  
  // Canvas
  MyStyle->SetCanvasColor     (0);
  MyStyle->SetCanvasBorderSize(10);
  MyStyle->SetCanvasBorderMode(0);
  MyStyle->SetCanvasDefH      (600);
  MyStyle->SetCanvasDefW      (800);
  MyStyle->SetCanvasDefX      (10);
  MyStyle->SetCanvasDefY      (10);
  
  // Pads
  MyStyle->SetPadColor       (0);
  MyStyle->SetPadBorderSize  (10);
  MyStyle->SetPadBorderMode  (0);
  MyStyle->SetPadBottomMargin(0.16);
  MyStyle->SetPadTopMargin   (0.12);
  MyStyle->SetPadLeftMargin  (0.2);
  MyStyle->SetPadRightMargin (0.1);
  MyStyle->SetPadGridX       (0);
  MyStyle->SetPadGridY       (0);
  MyStyle->SetPadTickX       (1);
  MyStyle->SetPadTickY       (1);
  
  
  // Frames
  MyStyle->SetFrameFillStyle (0);
  MyStyle->SetFrameFillColor (kWhite);
  MyStyle->SetFrameLineColor (kBlack);
  MyStyle->SetFrameLineStyle (0);
  MyStyle->SetFrameLineWidth (1);
  MyStyle->SetFrameBorderSize(10);
  MyStyle->SetFrameBorderMode(0);
  
  // Histograms
  MyStyle->SetHistFillColor(kWhite);
  MyStyle->SetHistFillStyle(0);
  MyStyle->SetHistLineColor(kBlack);
  MyStyle->SetHistLineStyle(0);
  MyStyle->SetHistLineWidth(1);
  
  // Functions
  MyStyle->SetFuncColor(1);
  MyStyle->SetFuncStyle(0);
  MyStyle->SetFuncWidth(1);
  
  // Markers
  MyStyle->SetMarkerStyle(0); 
  MyStyle->SetMarkerSize(1);
  
  // Various
  MyStyle->SetTickLength (0.03,"XYZ");
  
  MyStyle->SetTitleSize  (0.060,"X");
  MyStyle->SetTitleOffset(1.150,"X");
  MyStyle->SetTitleFont  (52   ,"X");
  MyStyle->SetLabelOffset(0.004,"X");
  MyStyle->SetLabelSize  (0.060,"X");
  MyStyle->SetLabelFont  (52   ,"X");
  MyStyle->SetNdivisions (405  ,"X");
  
  MyStyle->SetTitleSize  (0.060,"Y");
  MyStyle->SetTitleOffset(1.500,"Y");
  MyStyle->SetTitleFont  (52   ,"Y");
  MyStyle->SetLabelOffset(0.015,"Y");
  MyStyle->SetLabelSize  (0.06 ,"Y");
  MyStyle->SetLabelFont  (52   ,"Y");
  MyStyle->SetNdivisions (505  ,"Y");
  
  MyStyle->SetTitleSize  (0.060,"Z");
  MyStyle->SetTitleOffset(1.150,"Z");
  MyStyle->SetTitleFont  (52   ,"Z");
  MyStyle->SetLabelOffset(0.015,"Z");
  MyStyle->SetLabelSize  (0.060,"Z");
  MyStyle->SetLabelFont  (52   ,"Z");
  MyStyle->SetNdivisions (505  ,"Z");
  
  MyStyle->SetStatFont   (52);
  MyStyle->SetTitleFont  (52);
  
  // Options
  
  MyStyle->SetOptFit     (0);
  MyStyle->SetOptStat    (1111);
  
  gROOT->ForceStyle();
  
  printf(">> gStyle initialized with Tutorial Style!\n");
  
  return;
}












