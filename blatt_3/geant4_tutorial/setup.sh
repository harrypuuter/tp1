

export USE_VGM=1

source /opt/geant4.10.00.p02/bin/geant4.sh  2> /dev/null
export VMC_INSTALL="/opt/geant4_vmc.2.15a"
export LD_LIBRARY_PATH="/opt/vgm.3.06/lib:$LD_LIBRARY_PATH"
export LD_LIBRARY_PATH="/opt/geant4_vmc.2.15a/lib/tgt_linuxx8664gcc:$LD_LIBRARY_PATH"
export LD_LIBRARY_PATH="$PWD/TutorialApplication/lib:$LD_LIBRARY_PATH"
export G4LEVELGAMMADATA=/opt/geant4.10.00.p02/share/Geant4-10.0.2/data/PhotonEvaporation3.0
export G4NEUTRONXSDATA=/opt/geant4.10.00.p02/share/Geant4-10.0.2/data/G4NEUTRONXS1.4
export G4LEDATA=/opt/geant4.10.00.p02/share/Geant4-10.0.2/data/G4EMLOW6.35
export G4SAIDXSDATA=/opt/geant4.10.00.p02/share/Geant4-10.0.2/data/G4SAIDDATA1.1
