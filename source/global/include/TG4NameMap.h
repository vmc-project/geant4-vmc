// $Id$

//------------------------------------------------
// The Geant4 Virtual Monte Carlo package
// Copyright (C) 2007, Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: vmc@pcroot.cern.ch
//-------------------------------------------------

/// \ingroup global
/// \class TG4NameMap
/// \brief The map container for associated names. 
///
/// The names can be added into map either in pairs (Add() method)
/// or standalone - then they are paired with the fSecond data member 
/// (AddName() method)
///
/// \author I. Hrivnacova; IPN, Orsay

#ifndef TG4_NAME_MAP_H
#define TG4_NAME_MAP_H

#include <map>
#include <globals.hh>

class TG4NameMap
{
  typedef std::map<G4String, G4String, std::less<G4String> >  Map;
  typedef Map::iterator        MapIterator;
  typedef Map::const_iterator  MapConstIterator;

  public:
    TG4NameMap();
    virtual ~TG4NameMap();

    // methods
    G4bool Add(const G4String& first, const G4String& second);  
    G4bool AddInverse(const G4String& first, const G4String& second);  
    G4bool AddName(const G4String& name);  
    const G4String& GetFirst(const G4String& second) const;
    const G4String& GetSecond(const G4String& first) const;
    void PrintAll() const;
    void Clear();

    // set methods
    void SetSecond(const G4String& name);

  private:
    TG4NameMap(const TG4NameMap& right);
    TG4NameMap& operator=(const TG4NameMap& right);
  
    // static data members
    static G4String fgUndefined;  //the value of undefined second

    // data members
    Map       fMap;        //map container
    Map       fInverseMap; //inverse map container
    G4String  fSecond;     //the current second
};

// inline methods

inline void TG4NameMap::SetSecond(const G4String& secondName) { 
  /// Set the current second
  fSecond = secondName; 
}

#endif //TG4_NAME_MAP_H
