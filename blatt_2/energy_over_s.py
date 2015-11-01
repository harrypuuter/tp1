from kafe import *
from kafe.function_library import linear_2par

dataset = build_dataset(
[1,2,4,6,8,10,12,14],
[54,471,1111,1761,2391,3039,3714,4340],
title = 'cross section over energy',
axis_labels = ['Energy in TeV' , 'cross section in pb'])

my_fit = Fit(dataset,linear_2par)
my_fit.do_fit()

my_plot = Plot(my_fit)
my_plot.plot_all()
my_plot.show()
