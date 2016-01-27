from ROOT import TFile, TH1F, TH2F,  TTree, gROOT

gROOT.SetBatch(True)
hist = TH1F('hist','DO Mass',80,1.3,2.1)
f = TFile.Open("resultswithqcut.root")
for event in f.variables:
	hist.Fill(event.daughter__bo0__cmInvM__bc)
file = TFile.Open("hist.root","RECREATE")
hist.Write()
# FIXME Implement your code here.
# branch daughter__bo0__cmInvM__bc
