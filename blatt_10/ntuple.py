from basf2 import *
from modularAnalysis import *

data = "/scratch/TP1/gen_mc_data.root"
decay_1 = "D0 -> K- pi+"
decay_2 = "D*+ -> D0 pi+"
cut_1 = "1.3 < M < 2.1"
cut_2 = "1.3 < M < 5.5"
kaons = ('K-','M>0.350')
pions = ('pi+','M>0.1')

input = inputMdst(data)
fillParticleLists([kaons, pions])
reconstructDecay(decay_1,cut_1)
dstar = reconstructDecay(decay_2,cut_2)
#applyCuts('D0','0.0 < p < 5.0')
matchMCTruth('D*+')
cutAndCopyList('D*+:sig','D*+','isSignal == 1')
variablesToNTuple('D0',['InvM','p'],filename="dotuble.root")
variablesToNTuple('D*+',['InvM','Q'],filename="d+tuple.root")
variablesToNTuple("D*+",['InvM','daughter(0,p)','Q', 'daughter(0,InvM)'],filename="results.root")
applyCuts('D*+', ' 0.004 < Q < 0.01')
variablesToNTuple("D*+",['Q', 'daughter(0,InvM)'],filename="resultswithqcut.root")
process(analysis_main)
print(statistics)
