# set link to special root version
export ROOTSYS=/usr/local/root532
export PATH=$ROOTSYS/bin:$PATH
export LD_LIBRARY_PATH=$ROOTSYS/lib:$PATH_LIBRARY_PATH 

# set PATH to geant installation
export G4PATH="/usr/local/geant4"

source $G4PATH/geant4.9.5.p02-install/bin/geant4.sh
export G4LEVELGAMMADATA=`readlink -e $G4PATH/PhotonEvaporation2.2/`
export G4LEDATA=`readlink -e $G4PATH/G4EMLOW6.23/`
export USE_VGM=1

export LD_LIBRARY_PATH=`readlink -e $G4PATH/vgm.3.05/lib/Linux-g++`:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=`readlink -e $G4PATH/geant4_vmc/lib/tgt_linux`:$LD_LIBRARY_PATH
# path to geant4
