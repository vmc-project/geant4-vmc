//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007 - 2014 Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: root-vmc@cern.ch
//-------------------------------------------------

/// \ingroup E03
/// \file E03/g4Config3.C
/// \brief Configuration macro for Geant4 VirtualMC for Example03
///
/// Demonstrates activation of user defined regions

void Config()
{
/// The configuration function for Geant4 VMC for Example03
/// called during MC application initialization.
/// It demonstrates activation of user defined regions.

  // Run configuration with user defined regions
  Ex03RunConfiguration3* runConfiguration
    = new Ex03RunConfiguration3("geomRootToGeant4", "FTFP_BERT");

  // TGeant4
  TGeant4* geant4
    = new TGeant4("TGeant4", "The Geant4 Monte Carlo", runConfiguration);

  // Customise Geant4 setting
  // (verbose level, global range cut, ..)
  geant4->ProcessGeantMacro("g4config.in");
  geant4->ProcessGeantCommand("/mcVerbose/composedPhysicsList 2");

  cout << "Geant4 has been created." << endl;
}
