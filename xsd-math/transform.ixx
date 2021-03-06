// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#ifndef CXX___SCHEMA_XSD_MATH_TRANSFORM_IXX
#define CXX___SCHEMA_XSD_MATH_TRANSFORM_IXX

// Begin prologue.
//
//
// End prologue.

#include "axis.ixx"

// XsdTransform
// 

inline
const XsdTransform::length_optional& XsdTransform::
length () const
{
  return this->length_;
}

inline
XsdTransform::length_optional& XsdTransform::
length ()
{
  return this->length_;
}

inline
void XsdTransform::
length (const length_type& x)
{
  this->length_.set (x);
}

inline
void XsdTransform::
length (const length_optional& x)
{
  this->length_ = x;
}

inline
void XsdTransform::
length (::std::auto_ptr< length_type > x)
{
  this->length_.set (x);
}


// XsdFourierTransform
// 


// XsdWaveletTransform
// 

inline
const XsdWaveletTransform::type_optional& XsdWaveletTransform::
type () const
{
  return this->type_;
}

inline
XsdWaveletTransform::type_optional& XsdWaveletTransform::
type ()
{
  return this->type_;
}

inline
void XsdWaveletTransform::
type (const type_type& x)
{
  this->type_.set (x);
}

inline
void XsdWaveletTransform::
type (const type_optional& x)
{
  this->type_ = x;
}

inline
void XsdWaveletTransform::
type (::std::auto_ptr< type_type > x)
{
  this->type_.set (x);
}

inline
const XsdWaveletTransform::type_type& XsdWaveletTransform::
type_default_value ()
{
  return type_default_value_;
}


// XsdTransformTest1D
// 

inline
const XsdTransformTest1D::result_optional& XsdTransformTest1D::
result () const
{
  return this->result_;
}

inline
XsdTransformTest1D::result_optional& XsdTransformTest1D::
result ()
{
  return this->result_;
}

inline
void XsdTransformTest1D::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdTransformTest1D::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdTransformTest1D::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdTransformTest1D::direction_optional& XsdTransformTest1D::
direction () const
{
  return this->direction_;
}

inline
XsdTransformTest1D::direction_optional& XsdTransformTest1D::
direction ()
{
  return this->direction_;
}

inline
void XsdTransformTest1D::
direction (const direction_type& x)
{
  this->direction_.set (x);
}

inline
void XsdTransformTest1D::
direction (const direction_optional& x)
{
  this->direction_ = x;
}

inline
void XsdTransformTest1D::
direction (::std::auto_ptr< direction_type > x)
{
  this->direction_.set (x);
}

inline
const XsdTransformTest1D::direction_type& XsdTransformTest1D::
direction_default_value ()
{
  return direction_default_value_;
}

inline
const XsdTransformTest1D::yValues_type& XsdTransformTest1D::
yValues () const
{
  return this->yValues_.get ();
}

inline
XsdTransformTest1D::yValues_type& XsdTransformTest1D::
yValues ()
{
  return this->yValues_.get ();
}

inline
void XsdTransformTest1D::
yValues (const yValues_type& x)
{
  this->yValues_.set (x);
}

inline
void XsdTransformTest1D::
yValues (::std::auto_ptr< yValues_type > x)
{
  this->yValues_.set (x);
}

inline
const XsdTransformTest1D::xValues_type& XsdTransformTest1D::
xValues () const
{
  return this->xValues_.get ();
}

inline
XsdTransformTest1D::xValues_type& XsdTransformTest1D::
xValues ()
{
  return this->xValues_.get ();
}

inline
void XsdTransformTest1D::
xValues (const xValues_type& x)
{
  this->xValues_.set (x);
}

inline
void XsdTransformTest1D::
xValues (::std::auto_ptr< xValues_type > x)
{
  this->xValues_.set (x);
}

inline
const XsdTransformTest1D::transform_type& XsdTransformTest1D::
transform () const
{
  return this->transform_.get ();
}

inline
XsdTransformTest1D::transform_type& XsdTransformTest1D::
transform ()
{
  return this->transform_.get ();
}

inline
void XsdTransformTest1D::
transform (const transform_type& x)
{
  this->transform_.set (x);
}

inline
void XsdTransformTest1D::
transform (::std::auto_ptr< transform_type > x)
{
  this->transform_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MATH_TRANSFORM_IXX
