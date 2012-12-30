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

#ifndef CXX___SCHEMA_XSD_MODEL_ASSET_CALC_IXX
#define CXX___SCHEMA_XSD_MODEL_ASSET_CALC_IXX

// Begin prologue.
//
//
// End prologue.

#include "types.ixx"

#include "market.ixx"

// XsdMarketCashflow
// 

inline
const XsdMarketCashflow::result_optional& XsdMarketCashflow::
result () const
{
  return this->result_;
}

inline
XsdMarketCashflow::result_optional& XsdMarketCashflow::
result ()
{
  return this->result_;
}

inline
void XsdMarketCashflow::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdMarketCashflow::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdMarketCashflow::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdMarketCashflow::market_type& XsdMarketCashflow::
market () const
{
  return this->market_.get ();
}

inline
XsdMarketCashflow::market_type& XsdMarketCashflow::
market ()
{
  return this->market_.get ();
}

inline
void XsdMarketCashflow::
market (const market_type& x)
{
  this->market_.set (x);
}

inline
void XsdMarketCashflow::
market (::std::auto_ptr< market_type > x)
{
  this->market_.set (x);
}

inline
const XsdMarketCashflow::asset_type& XsdMarketCashflow::
asset () const
{
  return this->asset_.get ();
}

inline
XsdMarketCashflow::asset_type& XsdMarketCashflow::
asset ()
{
  return this->asset_.get ();
}

inline
void XsdMarketCashflow::
asset (const asset_type& x)
{
  this->asset_.set (x);
}

inline
void XsdMarketCashflow::
asset (::std::auto_ptr< asset_type > x)
{
  this->asset_.set (x);
}


// XsdScenarioCashflow
// 

inline
const XsdScenarioCashflow::result_optional& XsdScenarioCashflow::
result () const
{
  return this->result_;
}

inline
XsdScenarioCashflow::result_optional& XsdScenarioCashflow::
result ()
{
  return this->result_;
}

inline
void XsdScenarioCashflow::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdScenarioCashflow::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdScenarioCashflow::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdScenarioCashflow::scenario_type& XsdScenarioCashflow::
scenario () const
{
  return this->scenario_.get ();
}

inline
XsdScenarioCashflow::scenario_type& XsdScenarioCashflow::
scenario ()
{
  return this->scenario_.get ();
}

inline
void XsdScenarioCashflow::
scenario (const scenario_type& x)
{
  this->scenario_.set (x);
}

inline
void XsdScenarioCashflow::
scenario (::std::auto_ptr< scenario_type > x)
{
  this->scenario_.set (x);
}

inline
const XsdScenarioCashflow::asset_type& XsdScenarioCashflow::
asset () const
{
  return this->asset_.get ();
}

inline
XsdScenarioCashflow::asset_type& XsdScenarioCashflow::
asset ()
{
  return this->asset_.get ();
}

inline
void XsdScenarioCashflow::
asset (const asset_type& x)
{
  this->asset_.set (x);
}

inline
void XsdScenarioCashflow::
asset (::std::auto_ptr< asset_type > x)
{
  this->asset_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MODEL_ASSET_CALC_IXX