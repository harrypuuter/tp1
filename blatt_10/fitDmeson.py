from ROOT import TCanvas, TF1, TH1F, TFile, gSystem, gStyle, gROOT
import numpy as np

gROOT.SetBatch(True)

# FIXME Implement your code here. 

class Dmeson(object):

    def __init__(self):

        print('ROOT file opened')

        # Load ROOT file with the D0 mass distribution

        self.loadFile = TFile('')

    def __del__(self):

        print('Plot saved')

    def setstyle(self):

        # Delete previous PostScript plots and set Canvas options

        gSystem.Exec('rm -f '+'D0.pdf')
        gSystem.Exec('rm -f '+'Fit.pdf')
        gStyle.SetCanvasBorderMode(0)
        gStyle.SetCanvasColor(0)
        gStyle.SetStatBorderSize(1)
        gStyle.SetStatColor(0)



    def plotAndFit(self):

        # Plot 
        self.setstyle()

        # Get D0 histogram out of file 'loadFile'
        h1 = self.loadFile.Get('')
        h1.UseCurrentStyle()

        # Plot D0 mass distribution before fit
        c1 = TCanvas('c1', 'Canvas1', 0, 0, 700, 500)
        c1.Clear()
        h1.Draw()
        c1.Update()
        c1.SaveAs('D0.pdf')
           
         
        # Fit h1 with Breit-Wigner distribution

        breitW = TF1('breitW', BreitWig, 1.7, 2.0, 5)

        # The value given in breitW.SetParameter(1, 1.8648) is the 
	# PDG value of the D0 mass

        breitW.SetParameter(0, 0.05) # Width
        breitW.SetParameter(1, 1.8648) # Mean Value
        breitW.SetParameter(2, 0.1) # Norm
        breitW.SetParameter(3, 1.75) # Bkg parameter 1
        breitW.SetParameter(4, 0.0) # Bkg parameter 2

        gStyle.SetStatH(0.4)

	# Choose fit options: Print fit probability,
	# chisquare/number of degress of freedom,
	# errors, name/value of parameters

        gStyle.SetOptFit(1111)

        h1.UseCurrentStyle()

	# Start fit with breitW	

      

def BreitWig(x, par):

    f = (par[0]/2.)*par[2]/((x[0] - par[1])*(x[0] - par[1]) + (par[0]/2.)*(par[0]/2.)) + bkg1(x, par)

    return f


def bkg1(x, par):

    # Simple background model with constant and linear term.

    return par[3] + par[4]*x[0]


def bkg2(x, par):

    # Simple background model with constant and exponential term.

    return par[3]*np.exp(par[4]*x[0])


def bkg3(x, par):

    # Simple background model with quadratic term.

    return (par[3] - x[0])*(par[3] - x[0])*par[4]


# Declaration of an object of the class Dmeson

