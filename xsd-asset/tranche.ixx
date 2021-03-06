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

#ifndef CXX___SCHEMA_XSD_ASSET_TRANCHE_IXX
#define CXX___SCHEMA_XSD_ASSET_TRANCHE_IXX

// Begin prologue.
//
//
// End prologue.

#include "bond.ixx"

#include "swap.ixx"

#include "cashflow.ixx"

// XsdTranche
// 

inline
const XsdTranche::deficiency_sequence& XsdTranche::
deficiency () const
{
  return this->deficiency_;
}

inline
XsdTranche::deficiency_sequence& XsdTranche::
deficiency ()
{
  return this->deficiency_;
}

inline
void XsdTranche::
deficiency (const deficiency_sequence& s)
{
  this->deficiency_ = s;
}

inline
const XsdTranche::excess_sequence& XsdTranche::
excess () const
{
  return this->excess_;
}

inline
XsdTranche::excess_sequence& XsdTranche::
excess ()
{
  return this->excess_;
}

inline
void XsdTranche::
excess (const excess_sequence& s)
{
  this->excess_ = s;
}

inline
const XsdTranche::deal_type& XsdTranche::
deal () const
{
  return this->deal_.get ();
}

inline
XsdTranche::deal_type& XsdTranche::
deal ()
{
  return this->deal_.get ();
}

inline
void XsdTranche::
deal (const deal_type& x)
{
  this->deal_.set (x);
}

inline
void XsdTranche::
deal (::std::auto_ptr< deal_type > x)
{
  this->deal_.set (x);
}

inline
const XsdTranche::tranche_type& XsdTranche::
tranche () const
{
  return this->tranche_.get ();
}

inline
XsdTranche::tranche_type& XsdTranche::
tranche ()
{
  return this->tranche_.get ();
}

inline
void XsdTranche::
tranche (const tranche_type& x)
{
  this->tranche_.set (x);
}

inline
void XsdTranche::
tranche (::std::auto_ptr< tranche_type > x)
{
  this->tranche_.set (x);
}


// XsdTrancheDeficiency
// 

inline
const XsdTrancheDeficiency::type_type& XsdTrancheDeficiency::
type () const
{
  return this->type_.get ();
}

inline
XsdTrancheDeficiency::type_type& XsdTrancheDeficiency::
type ()
{
  return this->type_.get ();
}

inline
void XsdTrancheDeficiency::
type (const type_type& x)
{
  this->type_.set (x);
}

inline
void XsdTrancheDeficiency::
type (::std::auto_ptr< type_type > x)
{
  this->type_.set (x);
}

inline
const XsdTrancheDeficiency::currency_type& XsdTrancheDeficiency::
currency () const
{
  return this->currency_.get ();
}

inline
XsdTrancheDeficiency::currency_type& XsdTrancheDeficiency::
currency ()
{
  return this->currency_.get ();
}

inline
void XsdTrancheDeficiency::
currency (const currency_type& x)
{
  this->currency_.set (x);
}

inline
void XsdTrancheDeficiency::
currency (::std::auto_ptr< currency_type > x)
{
  this->currency_.set (x);
}

inline
const XsdTrancheDeficiency::currency_type& XsdTrancheDeficiency::
currency_default_value ()
{
  return currency_default_value_;
}

inline
const XsdTrancheDeficiency::flag_type& XsdTrancheDeficiency::
flag () const
{
  return this->flag_.get ();
}

inline
XsdTrancheDeficiency::flag_type& XsdTrancheDeficiency::
flag ()
{
  return this->flag_.get ();
}

inline
void XsdTrancheDeficiency::
flag (const flag_type& x)
{
  this->flag_.set (x);
}

inline
XsdTrancheDeficiency::flag_type XsdTrancheDeficiency::
flag_default_value ()
{
  return flag_type (0LL);
}

inline
const XsdTrancheDeficiency::deficiency_type& XsdTrancheDeficiency::
deficiency () const
{
  return this->deficiency_.get ();
}

inline
XsdTrancheDeficiency::deficiency_type& XsdTrancheDeficiency::
deficiency ()
{
  return this->deficiency_.get ();
}

inline
void XsdTrancheDeficiency::
deficiency (const deficiency_type& x)
{
  this->deficiency_.set (x);
}

inline
void XsdTrancheDeficiency::
deficiency (::std::auto_ptr< deficiency_type > x)
{
  this->deficiency_.set (x);
}

inline
const XsdTrancheDeficiency::deficiency_type& XsdTrancheDeficiency::
deficiency_default_value ()
{
  return deficiency_default_value_;
}


// XsdTrancheExcess
// 

inline
const XsdTrancheExcess::type_type& XsdTrancheExcess::
type () const
{
  return this->type_.get ();
}

inline
XsdTrancheExcess::type_type& XsdTrancheExcess::
type ()
{
  return this->type_.get ();
}

inline
void XsdTrancheExcess::
type (const type_type& x)
{
  this->type_.set (x);
}

inline
void XsdTrancheExcess::
type (::std::auto_ptr< type_type > x)
{
  this->type_.set (x);
}

inline
const XsdTrancheExcess::currency_type& XsdTrancheExcess::
currency () const
{
  return this->currency_.get ();
}

inline
XsdTrancheExcess::currency_type& XsdTrancheExcess::
currency ()
{
  return this->currency_.get ();
}

inline
void XsdTrancheExcess::
currency (const currency_type& x)
{
  this->currency_.set (x);
}

inline
void XsdTrancheExcess::
currency (::std::auto_ptr< currency_type > x)
{
  this->currency_.set (x);
}

inline
const XsdTrancheExcess::currency_type& XsdTrancheExcess::
currency_default_value ()
{
  return currency_default_value_;
}

inline
const XsdTrancheExcess::flag_type& XsdTrancheExcess::
flag () const
{
  return this->flag_.get ();
}

inline
XsdTrancheExcess::flag_type& XsdTrancheExcess::
flag ()
{
  return this->flag_.get ();
}

inline
void XsdTrancheExcess::
flag (const flag_type& x)
{
  this->flag_.set (x);
}

inline
XsdTrancheExcess::flag_type XsdTrancheExcess::
flag_default_value ()
{
  return flag_type (0LL);
}

inline
const XsdTrancheExcess::excess_type& XsdTrancheExcess::
excess () const
{
  return this->excess_.get ();
}

inline
XsdTrancheExcess::excess_type& XsdTrancheExcess::
excess ()
{
  return this->excess_.get ();
}

inline
void XsdTrancheExcess::
excess (const excess_type& x)
{
  this->excess_.set (x);
}

inline
void XsdTrancheExcess::
excess (::std::auto_ptr< excess_type > x)
{
  this->excess_.set (x);
}

inline
const XsdTrancheExcess::excess_type& XsdTrancheExcess::
excess_default_value ()
{
  return excess_default_value_;
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_ASSET_TRANCHE_IXX
