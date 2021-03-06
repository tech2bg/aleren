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

#ifndef CXX___SCHEMA_XSD_ASSET_PORTFOLIO_IXX
#define CXX___SCHEMA_XSD_ASSET_PORTFOLIO_IXX

// Begin prologue.
//
//
// End prologue.

#include "asset.ixx"

// XsdPosition
// 

inline
const XsdPosition::asset_type& XsdPosition::
asset () const
{
  return this->asset_.get ();
}

inline
XsdPosition::asset_type& XsdPosition::
asset ()
{
  return this->asset_.get ();
}

inline
void XsdPosition::
asset (const asset_type& x)
{
  this->asset_.set (x);
}

inline
void XsdPosition::
asset (::std::auto_ptr< asset_type > x)
{
  this->asset_.set (x);
}

inline
const XsdPosition::weight_type& XsdPosition::
weight () const
{
  return this->weight_.get ();
}

inline
XsdPosition::weight_type& XsdPosition::
weight ()
{
  return this->weight_.get ();
}

inline
void XsdPosition::
weight (const weight_type& x)
{
  this->weight_.set (x);
}

inline
XsdPosition::weight_type XsdPosition::
weight_default_value ()
{
  return weight_type (1.0);
}


// XsdPortfolio
// 

inline
const XsdPortfolio::position_sequence& XsdPortfolio::
position () const
{
  return this->position_;
}

inline
XsdPortfolio::position_sequence& XsdPortfolio::
position ()
{
  return this->position_;
}

inline
void XsdPortfolio::
position (const position_sequence& s)
{
  this->position_ = s;
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_ASSET_PORTFOLIO_IXX
