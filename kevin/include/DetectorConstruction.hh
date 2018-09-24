#ifndef _DETECTOR_CONSTRUCTION_
#define _DETECTOR_CONSTRUCTION_

#include "SensDetHit.hh"
#include "G4VUserDetectorConstruction.hh"
#include "G4NistManager.hh"
#include "G4Box.hh"
#include "G4Sphere.hh"
#include "G4PVPlacement.hh"
#include "G4LogicalVolume.hh"
#include "G4SubtractionSolid.hh"
#include "G4Element.hh"
#include "G4LogicalSkinSurface.hh"
#include "G4OpticalSurface.hh"
#include "G4LogicalBorderSurface.hh"
#include "G4MultiFunctionalDetector.hh"
#include "G4VPrimitiveScorer.hh"
#include "G4SDManager.hh"
#include "G4PSFlatSurfaceCurrent.hh"
#include "G4PSNofSecondary.hh"
#include "G4SDParticleFilter.hh"
#include "SensitiveDetector.hh"


// generates physical experiment geometry
class DetectorConstruction : public G4VUserDetectorConstruction {

public:
  DetectorConstruction();
  virtual ~DetectorConstruction();

public:
    void               ConstructSDandField();

 public:
  virtual G4VPhysicalVolume* Construct();


private:
  G4LogicalVolume*   createWorld();
  G4LogicalVolume*   createSlide();
  G4LogicalVolume*   createBox();
  G4LogicalVolume*   createDelrinBox();
  G4LogicalVolume*   createInterfacePad();
  G4LogicalVolume*   createSiPM();
  G4Material*        createBorosilicateGlass(const G4String name);

  G4double Box_x;
  G4double Box_y;
  G4double Box_z;

  G4double world_x;
  G4double world_y;
  G4double world_z;

  G4double SDet_x;
  G4double SDet_y;
  G4double SDet_z;

};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif /*DetectorConstruction_h*/