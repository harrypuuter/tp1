# source script for Computerpraktikum Teilchenphysik I - Belle II Versuch -  
# M. Gelb Nov 2015

# source the tools
currentdir=${PWD}
source /home/staff/gelb/TP1/basf2_automated/tools/setup_belle2 
cd /home/staff/gelb/TP1/basf2_automated/basf2

# don't use the system root 
unset ROOTSYS
export PATH=/home/staff/gelb/TP1/externals/v01-01-01/Linux_x86_64/opt/bin:/home/staff/gelb/TP1/externals/v01-01-01/Linux_x86_64/opt/bin:/home/staff/gelb/TP1/externals/v01-01-01/Linux_x86_64/common/bin:/home/staff/gelb/TP1/basf2_automated/basf2/bin/Linux_x86_64/debug:/home/staff/gelb/TP1/tools/gcc/bin:/home/staff/gelb/TP1/tools:/home/staff/gelb/bin:/usr/local/bin:/usr/bin:/bin:/usr/bin/X11:/usr/games:/opt/kde3/bin:/usr/lib/qt3/bin:/opt/clhep-2.1.2.5/bin
setuprel
setoption opt
cd $currentdir

# if using ssh you need the following for using b2display
#export LIBGL_ALWAYS_INDIRECT=y
