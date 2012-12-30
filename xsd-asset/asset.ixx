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

#ifndef CXX___SCHEMA_XSD_ASSET_ASSET_IXX
#define CXX___SCHEMA_XSD_ASSET_ASSET_IXX

// Begin prologue.
//
//
// End prologue.

#include "convention.ixx"

#include "obligor.ixx"

#include "cashflow.ixx"

// XsdAsset
// 

inline
const XsdAsset::convention_optional& XsdAsset::
convention () const
{
  return this->convention_;
}

inline
XsdAsset::convention_optional& XsdAsset::
convention ()
{
  return this->convention_;
}

inline
void XsdAsset::
convention (const convention_type& x)
{
  this->convention_.set (x);
}

inline
void XsdAsset::
convention (const convention_optional& x)
{
  this->convention_ = x;
}

inline
void XsdAsset::
convention (::std::auto_ptr< convention_type > x)
{
  this->convention_.set (x);
}

inline
const XsdAsset::issuer_optional& XsdAsset::
issuer () const
{
  return this->issuer_;
}

inline
XsdAsset::issuer_optional& XsdAsset::
issuer ()
{
  return this->issuer_;
}

inline
void XsdAsset::
issuer (const issuer_type& x)
{
  this->issuer_.set (x);
}

inline
void XsdAsset::
issuer (const issuer_optional& x)
{
  this->issuer_ = x;
}

inline
void XsdAsset::
issuer (::std::auto_ptr< issuer_type > x)
{
  this->issuer_.set (x);
}

inline
const XsdAsset::issueDate_optional& XsdAsset::
issueDate () const
{
  return this->issueDate_;
}

inline
XsdAsset::issueDate_optional& XsdAsset::
issueDate ()
{
  return this->issueDate_;
}

inline
void XsdAsset::
issueDate (const issueDate_type& x)
{
  this->issueDate_.set (x);
}

inline
void XsdAsset::
issueDate (const issueDate_optional& x)
{
  this->issueDate_ = x;
}

inline
void XsdAsset::
issueDate (::std::auto_ptr< issueDate_type > x)
{
  this->issueDate_.set (x);
}

inline
const XsdAsset::maturity_optional& XsdAsset::
maturity () const
{
  return this->maturity_;
}

inline
XsdAsset::maturity_optional& XsdAsset::
maturity ()
{
  return this->maturity_;
}

inline
void XsdAsset::
maturity (const maturity_type& x)
{
  this->maturity_.set (x);
}

inline
void XsdAsset::
maturity (const maturity_optional& x)
{
  this->maturity_ = x;
}

inline
void XsdAsset::
maturity (::std::auto_ptr< maturity_type > x)
{
  this->maturity_.set (x);
}

inline
const XsdAsset::notional_optional& XsdAsset::
notional () const
{
  return this->notional_;
}

inline
XsdAsset::notional_optional& XsdAsset::
notional ()
{
  return this->notional_;
}

inline
void XsdAsset::
notional (const notional_type& x)
{
  this->notional_.set (x);
}

inline
void XsdAsset::
notional (const notional_optional& x)
{
  this->notional_ = x;
}

inline
XsdAsset::notional_type XsdAsset::
notional_default_value ()
{
  return notional_type (1.0);
}

inline
const XsdAsset::seniority_optional& XsdAsset::
seniority () const
{
  return this->seniority_;
}

inline
XsdAsset::seniority_optional& XsdAsset::
seniority ()
{
  return this->seniority_;
}

inline
void XsdAsset::
seniority (const seniority_type& x)
{
  this->seniority_.set (x);
}

inline
void XsdAsset::
seniority (const seniority_optional& x)
{
  this->seniority_ = x;
}

inline
void XsdAsset::
seniority (::std::auto_ptr< seniority_type > x)
{
  this->seniority_.set (x);
}

inline
const XsdAsset::seniority_type& XsdAsset::
seniority_default_value ()
{
  return seniority_default_value_;
}

inline
const XsdAsset::quotes_sequence& XsdAsset::
quotes () const
{
  return this->quotes_;
}

inline
XsdAsset::quotes_sequence& XsdAsset::
quotes ()
{
  return this->quotes_;
}

inline
void XsdAsset::
quotes (const quotes_sequence& s)
{
  this->quotes_ = s;
}

inline
const XsdAsset::marketID_optional& XsdAsset::
marketID () const
{
  return this->marketID_;
}

inline
XsdAsset::marketID_optional& XsdAsset::
marketID ()
{
  return this->marketID_;
}

inline
void XsdAsset::
marketID (const marketID_type& x)
{
  this->marketID_.set (x);
}

inline
void XsdAsset::
marketID (const marketID_optional& x)
{
  this->marketID_ = x;
}

inline
void XsdAsset::
marketID (::std::auto_ptr< marketID_type > x)
{
  this->marketID_.set (x);
}

inline
const XsdAsset::marketIDType_type& XsdAsset::
marketIDType () const
{
  return this->marketIDType_.get ();
}

inline
XsdAsset::marketIDType_type& XsdAsset::
marketIDType ()
{
  return this->marketIDType_.get ();
}

inline
void XsdAsset::
marketIDType (const marketIDType_type& x)
{
  this->marketIDType_.set (x);
}

inline
void XsdAsset::
marketIDType (::std::auto_ptr< marketIDType_type > x)
{
  this->marketIDType_.set (x);
}

inline
const XsdAsset::marketIDType_type& XsdAsset::
marketIDType_default_value ()
{
  return marketIDType_default_value_;
}

inline
const XsdAsset::marketIDDate_optional& XsdAsset::
marketIDDate () const
{
  return this->marketIDDate_;
}

inline
XsdAsset::marketIDDate_optional& XsdAsset::
marketIDDate ()
{
  return this->marketIDDate_;
}

inline
void XsdAsset::
marketIDDate (const marketIDDate_type& x)
{
  this->marketIDDate_.set (x);
}

inline
void XsdAsset::
marketIDDate (const marketIDDate_optional& x)
{
  this->marketIDDate_ = x;
}

inline
void XsdAsset::
marketIDDate (::std::auto_ptr< marketIDDate_type > x)
{
  this->marketIDDate_.set (x);
}


// XsdQuoteKey
// 

inline
const XsdQuoteKey::assetID_type& XsdQuoteKey::
assetID () const
{
  return this->assetID_.get ();
}

inline
XsdQuoteKey::assetID_type& XsdQuoteKey::
assetID ()
{
  return this->assetID_.get ();
}

inline
void XsdQuoteKey::
assetID (const assetID_type& x)
{
  this->assetID_.set (x);
}

inline
void XsdQuoteKey::
assetID (::std::auto_ptr< assetID_type > x)
{
  this->assetID_.set (x);
}

inline
const XsdQuoteKey::type_type& XsdQuoteKey::
type () const
{
  return this->type_.get ();
}

inline
XsdQuoteKey::type_type& XsdQuoteKey::
type ()
{
  return this->type_.get ();
}

inline
void XsdQuoteKey::
type (const type_type& x)
{
  this->type_.set (x);
}

inline
void XsdQuoteKey::
type (::std::auto_ptr< type_type > x)
{
  this->type_.set (x);
}

inline
const XsdQuoteKey::type_type& XsdQuoteKey::
type_default_value ()
{
  return type_default_value_;
}

inline
const XsdQuoteKey::currency_type& XsdQuoteKey::
currency () const
{
  return this->currency_.get ();
}

inline
XsdQuoteKey::currency_type& XsdQuoteKey::
currency ()
{
  return this->currency_.get ();
}

inline
void XsdQuoteKey::
currency (const currency_type& x)
{
  this->currency_.set (x);
}

inline
void XsdQuoteKey::
currency (::std::auto_ptr< currency_type > x)
{
  this->currency_.set (x);
}

inline
const XsdQuoteKey::currency_type& XsdQuoteKey::
currency_default_value ()
{
  return currency_default_value_;
}

inline
const XsdQuoteKey::unit_type& XsdQuoteKey::
unit () const
{
  return this->unit_.get ();
}

inline
XsdQuoteKey::unit_type& XsdQuoteKey::
unit ()
{
  return this->unit_.get ();
}

inline
void XsdQuoteKey::
unit (const unit_type& x)
{
  this->unit_.set (x);
}

inline
void XsdQuoteKey::
unit (::std::auto_ptr< unit_type > x)
{
  this->unit_.set (x);
}

inline
const XsdQuoteKey::unit_type& XsdQuoteKey::
unit_default_value ()
{
  return unit_default_value_;
}

inline
const XsdQuoteKey::source_type& XsdQuoteKey::
source () const
{
  return this->source_.get ();
}

inline
XsdQuoteKey::source_type& XsdQuoteKey::
source ()
{
  return this->source_.get ();
}

inline
void XsdQuoteKey::
source (const source_type& x)
{
  this->source_.set (x);
}

inline
void XsdQuoteKey::
source (::std::auto_ptr< source_type > x)
{
  this->source_.set (x);
}

inline
const XsdQuoteKey::source_type& XsdQuoteKey::
source_default_value ()
{
  return source_default_value_;
}


// XsdQuoteSeries
// 

inline
const XsdQuoteSeries::value_sequence& XsdQuoteSeries::
value () const
{
  return this->value_;
}

inline
XsdQuoteSeries::value_sequence& XsdQuoteSeries::
value ()
{
  return this->value_;
}

inline
void XsdQuoteSeries::
value (const value_sequence& s)
{
  this->value_ = s;
}


// XsdQuote
// 

inline
const XsdQuote::value_type& XsdQuote::
value () const
{
  return this->value_.get ();
}

inline
XsdQuote::value_type& XsdQuote::
value ()
{
  return this->value_.get ();
}

inline
void XsdQuote::
value (const value_type& x)
{
  this->value_.set (x);
}

inline
void XsdQuote::
value (::std::auto_ptr< value_type > x)
{
  this->value_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_ASSET_ASSET_IXX