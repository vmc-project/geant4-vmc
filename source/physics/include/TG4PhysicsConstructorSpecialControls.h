// $Id: TG4PhysicsConstructorSpecialControls.h,v 1.4 2005/09/01 10:04:33 brun Exp $
/// \ingroup physics
//
/// \class TG4PhysicsConstructorSpecialControls
/// \brief Constructor of special controls of physics processes.
///
/// Author: I. Hrivnacova

#ifndef TG4_PHYSICS_CONSTRUCTOR_SPECIAL_CONTROLS_H
#define TG4_PHYSICS_CONSTRUCTOR_SPECIAL_CONTROLS_H

#include "TG4VPhysicsConstructor.h"

#include <globals.hh>

class TG4SpecialControls;

class TG4PhysicsConstructorSpecialControls: public TG4VPhysicsConstructor
{
  public:
    TG4PhysicsConstructorSpecialControls(
      const G4String& name = "Special controls");
    TG4PhysicsConstructorSpecialControls(
      G4int verboseLevel,
      const G4String& name = "Special controls");
    virtual ~TG4PhysicsConstructorSpecialControls();

  protected:
    // methods
          // construct particle and physics
    virtual void ConstructParticle();
    virtual void ConstructProcess();

  private:
    // data members
    TG4SpecialControls*  fSpecialControls;
};

#endif //TG4_PHYSICS_CONSTRUCTOR_SPECIAL_CONTROLS_H
