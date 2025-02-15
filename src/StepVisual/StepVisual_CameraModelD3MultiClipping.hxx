// Created on: 2016-10-25
// Created by: Irina KRYLOVA
// Copyright (c) 2016 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _StepVisual_CameraModelD3MultiClipping_HeaderFile
#define _StepVisual_CameraModelD3MultiClipping_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <StepVisual_CameraModelD3.hxx>
class StepGeom_Axis2Placement3d;
class StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect;
class StepVisual_ViewVolume;
class TCollection_HAsciiString;

DEFINE_STANDARD_HANDLE(StepVisual_CameraModelD3MultiClipping, StepVisual_CameraModelD3)

class StepVisual_CameraModelD3MultiClipping : public StepVisual_CameraModelD3
{
public:
  //! Returns a CameraModelD3MultiClipping
  Standard_EXPORT StepVisual_CameraModelD3MultiClipping();

  Standard_EXPORT void Init(
    const Handle(TCollection_HAsciiString)&  theName,
    const Handle(StepGeom_Axis2Placement3d)& theViewReferenceSystem,
    const Handle(StepVisual_ViewVolume)&     thePerspectiveOfVolume,
    const Handle(StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect)&
      theShapeClipping);

  void SetShapeClipping(
    const Handle(StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect)& theShapeClipping)
  {
    myShapeClipping = theShapeClipping;
  }

  const Handle(StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect) ShapeClipping()
  {
    return myShapeClipping;
  }
  DEFINE_STANDARD_RTTIEXT(StepVisual_CameraModelD3MultiClipping, StepVisual_CameraModelD3)

private:
  Handle(StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect) myShapeClipping;
};
#endif // _StepVisual_CameraModelD3MultiClipping_HeaderFile
