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

#ifndef CXX___SCHEMA_XSD_MODEL_MARKET_IXX
#define CXX___SCHEMA_XSD_MODEL_MARKET_IXX

// Begin prologue.
//
//
// End prologue.

#include "discount.ixx"

#include "volatility.ixx"

#include "fxrates.ixx"

#include "hazard.ixx"

#include "inflation.ixx"

#include "expected-loss.ixx"

// XsdMarket
// 

inline
const XsdMarket::tradeDate_type& XsdMarket::
tradeDate () const
{
  return this->tradeDate_.get ();
}

inline
XsdMarket::tradeDate_type& XsdMarket::
tradeDate ()
{
  return this->tradeDate_.get ();
}

inline
void XsdMarket::
tradeDate (const tradeDate_type& x)
{
  this->tradeDate_.set (x);
}

inline
void XsdMarket::
tradeDate (::std::auto_ptr< tradeDate_type > x)
{
  this->tradeDate_.set (x);
}

inline
const XsdMarket::fxRates_optional& XsdMarket::
fxRates () const
{
  return this->fxRates_;
}

inline
XsdMarket::fxRates_optional& XsdMarket::
fxRates ()
{
  return this->fxRates_;
}

inline
void XsdMarket::
fxRates (const fxRates_type& x)
{
  this->fxRates_.set (x);
}

inline
void XsdMarket::
fxRates (const fxRates_optional& x)
{
  this->fxRates_ = x;
}

inline
void XsdMarket::
fxRates (::std::auto_ptr< fxRates_type > x)
{
  this->fxRates_.set (x);
}

inline
const XsdMarket::hazard_sequence& XsdMarket::
hazard () const
{
  return this->hazard_;
}

inline
XsdMarket::hazard_sequence& XsdMarket::
hazard ()
{
  return this->hazard_;
}

inline
void XsdMarket::
hazard (const hazard_sequence& s)
{
  this->hazard_ = s;
}

inline
const XsdMarket::inflation_sequence& XsdMarket::
inflation () const
{
  return this->inflation_;
}

inline
XsdMarket::inflation_sequence& XsdMarket::
inflation ()
{
  return this->inflation_;
}

inline
void XsdMarket::
inflation (const inflation_sequence& s)
{
  this->inflation_ = s;
}

inline
const XsdMarket::loss_sequence& XsdMarket::
loss () const
{
  return this->loss_;
}

inline
XsdMarket::loss_sequence& XsdMarket::
loss ()
{
  return this->loss_;
}

inline
void XsdMarket::
loss (const loss_sequence& s)
{
  this->loss_ = s;
}

inline
const XsdMarket::discount_sequence& XsdMarket::
discount () const
{
  return this->discount_;
}

inline
XsdMarket::discount_sequence& XsdMarket::
discount ()
{
  return this->discount_;
}

inline
void XsdMarket::
discount (const discount_sequence& s)
{
  this->discount_ = s;
}

inline
const XsdMarket::volatility_sequence& XsdMarket::
volatility () const
{
  return this->volatility_;
}

inline
XsdMarket::volatility_sequence& XsdMarket::
volatility ()
{
  return this->volatility_;
}

inline
void XsdMarket::
volatility (const volatility_sequence& s)
{
  this->volatility_ = s;
}

inline
const XsdMarket::quote_sequence& XsdMarket::
quote () const
{
  return this->quote_;
}

inline
XsdMarket::quote_sequence& XsdMarket::
quote ()
{
  return this->quote_;
}

inline
void XsdMarket::
quote (const quote_sequence& s)
{
  this->quote_ = s;
}

inline
const XsdMarket::schemaType_type& XsdMarket::
schemaType () const
{
  return this->schemaType_.get ();
}

inline
const XsdMarket::schemaType_type& XsdMarket::
schemaType_default_value ()
{
  return schemaType_default_value_;
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MODEL_MARKET_IXX
