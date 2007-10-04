// $Id$

//------------------------------------------------
// The Geant4 Virtual Monte Carlo package
// Copyright (C) 2007, Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: vmc@pcroot.cern.ch
//-------------------------------------------------

/// \ingroup physics
/// \class TG4TrackInformation
/// \brief Defines additional track information.
///
/// \author I. Hrivnacova; IPN Orsay

#ifndef TG4_TRACK_INFORMATION_H
#define TG4_TRACK_INFORMATION_H

#include <G4VUserTrackInformation.hh>
#include <G4Allocator.hh>
#include <globals.hh>

class TG4TrackInformation : public G4VUserTrackInformation
{
  public:
    TG4TrackInformation();
    TG4TrackInformation(G4int trackParticleID);
    //TG4TrackInformation(G4int trackParticleID, G4int parentParticleID);
    virtual ~TG4TrackInformation();
   
    // operators
    // required by G4
    inline void *operator new(size_t);
      // Override "new" for "G4Allocator".
    inline void operator delete(void *trackInformation);
      // Override "delete" for "G4Allocator".
      
    // methods
    virtual void Print() const;  

    // set methods
    void SetTrackParticleID(G4int trackParticleID);
    void SetParentParticleID(G4int parentParticleID);
    void SetIsUserTrack(G4bool isUserTrack);

    // get methods
    G4int  GetTrackParticleID() const;
    G4int  GetParentParticleID() const;
    G4bool IsUserTrack() const;

  private:
    // data members
    G4int  fTrackParticleID; //the index of track particle in VMC stack
    G4int  fParentParticleID;//the index of parent track in VMC stack
    G4bool fIsUserTrack;     //true if defined by user and not primary track
};

// inline methods
#include "TG4TrackInformation.icc"

#endif //TG4_TRACK_INFORMATION_H
