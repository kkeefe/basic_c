// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file EventAction.hh
/// \brief Definition of the EventAction class
//
//

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef __EVENT_ACTION__
#define __EVENT_ACTION__

#include "G4UserEventAction.hh"

#include "G4RunManager.hh"
#include "G4Event.hh"
#include "G4SDManager.hh"
#include "G4HCofThisEvent.hh"
#include "G4UnitsTable.hh"
#include "G4THitsMap.hh"
#include "globals.hh"

class RunAction;
class AnalysisManager;

class EventAction : public G4UserEventAction
{
public:
  EventAction(RunAction*, AnalysisManager*);
  virtual ~EventAction();

  virtual void  BeginOfEventAction(const G4Event* event);
  virtual void  EndOfEventAction(const G4Event* event);

  void AddAbs(G4double de, G4double dl) {fEnergyAbs += de; fTrackLAbs += dl;};
  void AddGap(G4double de, G4double dl) {fEnergyGap += de; fTrackLGap += dl;};
  
private:
  // methods
  G4THitsMap<G4double>* GetHitsCollection(G4int hcID,
					  const G4Event* event) const;
  G4int fPhotonNumber;
  G4int evtNumber;
  G4int fPDHCID;

  RunAction*    fRunAct;
  AnalysisManager* fAnalysisManager;
  
  G4double  fEnergyAbs, fEnergyGap;
  G4double  fTrackLAbs, fTrackLGap;
 
  G4int     fPrintModulo;                            
  
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif