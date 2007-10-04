// $Id$

//------------------------------------------------
// The Virtual Monte Carlo examples
// Copyright (C) 2007, Ivana Hrivnacova
// All rights reserved.
//
// For the licensing terms see geant4_vmc/LICENSE.
// Contact: vmc@pcroot.cern.ch
//-------------------------------------------------

//
// Geant4 ExampleN02 adapted to Virtual Monte Carlo 
//
// Id: Ex02ChamberParameterisation.hh,v 1.6 2002/01/09 17:24:08 ranjard Exp 
// GEANT4 tag Name: geant4-04-00-patch-02 
//
//  A parameterisation that describes a series of boxes along Z
//    The boxes have equal width, & their lengths are a linear equation.
//    They are spaced an equal distance apart, starting from given location.
//
// by Ivana Hrivnacova, 21.4.2002


#ifndef Ex02ChamberParameterisation_H
#define Ex02ChamberParameterisation_H

#include <TObject.h>

class Ex02ChamberParameterisation : public TObject
{ 
  public:  
    Ex02ChamberParameterisation(Int_t    NoChambers, 
                                Double_t startZ, 
                                Double_t spacing,
                                Double_t widthChamber, 
                                Double_t lengthInitial,
                                Double_t lengthFinal );

    virtual ~Ex02ChamberParameterisation();
   
    // methods
    void ComputeTransformation (Int_t copyNo, Double_t* position) const;    
    void ComputeDimensions (Int_t copyNo, Double_t* dimension) const;


  private:
    Int_t     fNoChambers;   
    Double_t  fStartZ;       //  Z of center of first 
    Double_t  fHalfWidth;    //  The half-width of each tracker chamber
    Double_t  fSpacing;      //  The distance between the chambers' center
    Double_t  fHalfLengthFirst;  //  The first half-length 
    Double_t  fHalfLengthIncr;   //  The Increment for the half-length 
    
  ClassDef(Ex02ChamberParameterisation,1) //Ex02ChamberParameterisation  
};

#endif


