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

#ifndef CXX___SCHEMA_XSD_MODEL_BOND_CALC_IXX
#define CXX___SCHEMA_XSD_MODEL_BOND_CALC_IXX

// Begin prologue.
//
//
// End prologue.

#include "market.ixx"

// XsdBondResult
// 

inline
const XsdBondResult::yield_optional& XsdBondResult::
yield () const
{
  return this->yield_;
}

inline
XsdBondResult::yield_optional& XsdBondResult::
yield ()
{
  return this->yield_;
}

inline
void XsdBondResult::
yield (const yield_type& x)
{
  this->yield_.set (x);
}

inline
void XsdBondResult::
yield (const yield_optional& x)
{
  this->yield_ = x;
}

inline
void XsdBondResult::
yield (::std::auto_ptr< yield_type > x)
{
  this->yield_.set (x);
}

inline
const XsdBondResult::spread_optional& XsdBondResult::
spread () const
{
  return this->spread_;
}

inline
XsdBondResult::spread_optional& XsdBondResult::
spread ()
{
  return this->spread_;
}

inline
void XsdBondResult::
spread (const spread_type& x)
{
  this->spread_.set (x);
}

inline
void XsdBondResult::
spread (const spread_optional& x)
{
  this->spread_ = x;
}

inline
void XsdBondResult::
spread (::std::auto_ptr< spread_type > x)
{
  this->spread_.set (x);
}

inline
const XsdBondResult::price_optional& XsdBondResult::
price () const
{
  return this->price_;
}

inline
XsdBondResult::price_optional& XsdBondResult::
price ()
{
  return this->price_;
}

inline
void XsdBondResult::
price (const price_type& x)
{
  this->price_.set (x);
}

inline
void XsdBondResult::
price (const price_optional& x)
{
  this->price_ = x;
}

inline
void XsdBondResult::
price (::std::auto_ptr< price_type > x)
{
  this->price_.set (x);
}

inline
const XsdBondResult::accrual_optional& XsdBondResult::
accrual () const
{
  return this->accrual_;
}

inline
XsdBondResult::accrual_optional& XsdBondResult::
accrual ()
{
  return this->accrual_;
}

inline
void XsdBondResult::
accrual (const accrual_type& x)
{
  this->accrual_.set (x);
}

inline
void XsdBondResult::
accrual (const accrual_optional& x)
{
  this->accrual_ = x;
}

inline
const XsdBondResult::duration_optional& XsdBondResult::
duration () const
{
  return this->duration_;
}

inline
XsdBondResult::duration_optional& XsdBondResult::
duration ()
{
  return this->duration_;
}

inline
void XsdBondResult::
duration (const duration_type& x)
{
  this->duration_.set (x);
}

inline
void XsdBondResult::
duration (const duration_optional& x)
{
  this->duration_ = x;
}

inline
void XsdBondResult::
duration (::std::auto_ptr< duration_type > x)
{
  this->duration_.set (x);
}

inline
const XsdBondResult::convexity_optional& XsdBondResult::
convexity () const
{
  return this->convexity_;
}

inline
XsdBondResult::convexity_optional& XsdBondResult::
convexity ()
{
  return this->convexity_;
}

inline
void XsdBondResult::
convexity (const convexity_type& x)
{
  this->convexity_.set (x);
}

inline
void XsdBondResult::
convexity (const convexity_optional& x)
{
  this->convexity_ = x;
}

inline
void XsdBondResult::
convexity (::std::auto_ptr< convexity_type > x)
{
  this->convexity_.set (x);
}


// XsdBondCalculator
// 

inline
const XsdBondCalculator::result_optional& XsdBondCalculator::
result () const
{
  return this->result_;
}

inline
XsdBondCalculator::result_optional& XsdBondCalculator::
result ()
{
  return this->result_;
}

inline
void XsdBondCalculator::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdBondCalculator::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdBondCalculator::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdBondCalculator::bond_type& XsdBondCalculator::
bond () const
{
  return this->bond_.get ();
}

inline
XsdBondCalculator::bond_type& XsdBondCalculator::
bond ()
{
  return this->bond_.get ();
}

inline
void XsdBondCalculator::
bond (const bond_type& x)
{
  this->bond_.set (x);
}

inline
void XsdBondCalculator::
bond (::std::auto_ptr< bond_type > x)
{
  this->bond_.set (x);
}

inline
const XsdBondCalculator::frequency_optional& XsdBondCalculator::
frequency () const
{
  return this->frequency_;
}

inline
XsdBondCalculator::frequency_optional& XsdBondCalculator::
frequency ()
{
  return this->frequency_;
}

inline
void XsdBondCalculator::
frequency (const frequency_type& x)
{
  this->frequency_.set (x);
}

inline
void XsdBondCalculator::
frequency (const frequency_optional& x)
{
  this->frequency_ = x;
}

inline
void XsdBondCalculator::
frequency (::std::auto_ptr< frequency_type > x)
{
  this->frequency_.set (x);
}

inline
const XsdBondCalculator::dayCount_optional& XsdBondCalculator::
dayCount () const
{
  return this->dayCount_;
}

inline
XsdBondCalculator::dayCount_optional& XsdBondCalculator::
dayCount ()
{
  return this->dayCount_;
}

inline
void XsdBondCalculator::
dayCount (const dayCount_type& x)
{
  this->dayCount_.set (x);
}

inline
void XsdBondCalculator::
dayCount (const dayCount_optional& x)
{
  this->dayCount_ = x;
}

inline
void XsdBondCalculator::
dayCount (::std::auto_ptr< dayCount_type > x)
{
  this->dayCount_.set (x);
}

inline
const XsdBondCalculator::duration_optional& XsdBondCalculator::
duration () const
{
  return this->duration_;
}

inline
XsdBondCalculator::duration_optional& XsdBondCalculator::
duration ()
{
  return this->duration_;
}

inline
void XsdBondCalculator::
duration (const duration_type& x)
{
  this->duration_.set (x);
}

inline
void XsdBondCalculator::
duration (const duration_optional& x)
{
  this->duration_ = x;
}

inline
XsdBondCalculator::duration_type XsdBondCalculator::
duration_default_value ()
{
  return duration_type (false);
}

inline
const XsdBondCalculator::convexity_optional& XsdBondCalculator::
convexity () const
{
  return this->convexity_;
}

inline
XsdBondCalculator::convexity_optional& XsdBondCalculator::
convexity ()
{
  return this->convexity_;
}

inline
void XsdBondCalculator::
convexity (const convexity_type& x)
{
  this->convexity_.set (x);
}

inline
void XsdBondCalculator::
convexity (const convexity_optional& x)
{
  this->convexity_ = x;
}

inline
XsdBondCalculator::convexity_type XsdBondCalculator::
convexity_default_value ()
{
  return convexity_type (false);
}

inline
const XsdBondCalculator::market_type& XsdBondCalculator::
market () const
{
  return this->market_.get ();
}

inline
XsdBondCalculator::market_type& XsdBondCalculator::
market ()
{
  return this->market_.get ();
}

inline
void XsdBondCalculator::
market (const market_type& x)
{
  this->market_.set (x);
}

inline
void XsdBondCalculator::
market (::std::auto_ptr< market_type > x)
{
  this->market_.set (x);
}

inline
const XsdBondCalculator::params_optional& XsdBondCalculator::
params () const
{
  return this->params_;
}

inline
XsdBondCalculator::params_optional& XsdBondCalculator::
params ()
{
  return this->params_;
}

inline
void XsdBondCalculator::
params (const params_type& x)
{
  this->params_.set (x);
}

inline
void XsdBondCalculator::
params (const params_optional& x)
{
  this->params_ = x;
}

inline
void XsdBondCalculator::
params (::std::auto_ptr< params_type > x)
{
  this->params_.set (x);
}


// XsdBondYieldCalculator
// 

inline
const XsdBondYieldCalculator::price_optional& XsdBondYieldCalculator::
price () const
{
  return this->price_;
}

inline
XsdBondYieldCalculator::price_optional& XsdBondYieldCalculator::
price ()
{
  return this->price_;
}

inline
void XsdBondYieldCalculator::
price (const price_type& x)
{
  this->price_.set (x);
}

inline
void XsdBondYieldCalculator::
price (const price_optional& x)
{
  this->price_ = x;
}

inline
void XsdBondYieldCalculator::
price (::std::auto_ptr< price_type > x)
{
  this->price_.set (x);
}

inline
const XsdBondYieldCalculator::yield_optional& XsdBondYieldCalculator::
yield () const
{
  return this->yield_;
}

inline
XsdBondYieldCalculator::yield_optional& XsdBondYieldCalculator::
yield ()
{
  return this->yield_;
}

inline
void XsdBondYieldCalculator::
yield (const yield_type& x)
{
  this->yield_.set (x);
}

inline
void XsdBondYieldCalculator::
yield (const yield_optional& x)
{
  this->yield_ = x;
}

inline
void XsdBondYieldCalculator::
yield (::std::auto_ptr< yield_type > x)
{
  this->yield_.set (x);
}

inline
const XsdBondYieldCalculator::yieldType_optional& XsdBondYieldCalculator::
yieldType () const
{
  return this->yieldType_;
}

inline
XsdBondYieldCalculator::yieldType_optional& XsdBondYieldCalculator::
yieldType ()
{
  return this->yieldType_;
}

inline
void XsdBondYieldCalculator::
yieldType (const yieldType_type& x)
{
  this->yieldType_.set (x);
}

inline
void XsdBondYieldCalculator::
yieldType (const yieldType_optional& x)
{
  this->yieldType_ = x;
}

inline
void XsdBondYieldCalculator::
yieldType (::std::auto_ptr< yieldType_type > x)
{
  this->yieldType_.set (x);
}

inline
const XsdBondYieldCalculator::yieldType_type& XsdBondYieldCalculator::
yieldType_default_value ()
{
  return yieldType_default_value_;
}

inline
const XsdBondYieldCalculator::bound_optional& XsdBondYieldCalculator::
bound () const
{
  return this->bound_;
}

inline
XsdBondYieldCalculator::bound_optional& XsdBondYieldCalculator::
bound ()
{
  return this->bound_;
}

inline
void XsdBondYieldCalculator::
bound (const bound_type& x)
{
  this->bound_.set (x);
}

inline
void XsdBondYieldCalculator::
bound (const bound_optional& x)
{
  this->bound_ = x;
}

inline
void XsdBondYieldCalculator::
bound (::std::auto_ptr< bound_type > x)
{
  this->bound_.set (x);
}


// XsdBondSpreadCalculator
// 

inline
const XsdBondSpreadCalculator::price_optional& XsdBondSpreadCalculator::
price () const
{
  return this->price_;
}

inline
XsdBondSpreadCalculator::price_optional& XsdBondSpreadCalculator::
price ()
{
  return this->price_;
}

inline
void XsdBondSpreadCalculator::
price (const price_type& x)
{
  this->price_.set (x);
}

inline
void XsdBondSpreadCalculator::
price (const price_optional& x)
{
  this->price_ = x;
}

inline
void XsdBondSpreadCalculator::
price (::std::auto_ptr< price_type > x)
{
  this->price_.set (x);
}

inline
const XsdBondSpreadCalculator::price_type& XsdBondSpreadCalculator::
price_default_value ()
{
  return price_default_value_;
}

inline
const XsdBondSpreadCalculator::spread_optional& XsdBondSpreadCalculator::
spread () const
{
  return this->spread_;
}

inline
XsdBondSpreadCalculator::spread_optional& XsdBondSpreadCalculator::
spread ()
{
  return this->spread_;
}

inline
void XsdBondSpreadCalculator::
spread (const spread_type& x)
{
  this->spread_.set (x);
}

inline
void XsdBondSpreadCalculator::
spread (const spread_optional& x)
{
  this->spread_ = x;
}

inline
void XsdBondSpreadCalculator::
spread (::std::auto_ptr< spread_type > x)
{
  this->spread_.set (x);
}

inline
const XsdBondSpreadCalculator::discount_type& XsdBondSpreadCalculator::
discount () const
{
  return this->discount_.get ();
}

inline
XsdBondSpreadCalculator::discount_type& XsdBondSpreadCalculator::
discount ()
{
  return this->discount_.get ();
}

inline
void XsdBondSpreadCalculator::
discount (const discount_type& x)
{
  this->discount_.set (x);
}

inline
void XsdBondSpreadCalculator::
discount (::std::auto_ptr< discount_type > x)
{
  this->discount_.set (x);
}

inline
const XsdBondSpreadCalculator::spreadType_optional& XsdBondSpreadCalculator::
spreadType () const
{
  return this->spreadType_;
}

inline
XsdBondSpreadCalculator::spreadType_optional& XsdBondSpreadCalculator::
spreadType ()
{
  return this->spreadType_;
}

inline
void XsdBondSpreadCalculator::
spreadType (const spreadType_type& x)
{
  this->spreadType_.set (x);
}

inline
void XsdBondSpreadCalculator::
spreadType (const spreadType_optional& x)
{
  this->spreadType_ = x;
}

inline
void XsdBondSpreadCalculator::
spreadType (::std::auto_ptr< spreadType_type > x)
{
  this->spreadType_.set (x);
}

inline
const XsdBondSpreadCalculator::spreadType_type& XsdBondSpreadCalculator::
spreadType_default_value ()
{
  return spreadType_default_value_;
}

inline
const XsdBondSpreadCalculator::bound_optional& XsdBondSpreadCalculator::
bound () const
{
  return this->bound_;
}

inline
XsdBondSpreadCalculator::bound_optional& XsdBondSpreadCalculator::
bound ()
{
  return this->bound_;
}

inline
void XsdBondSpreadCalculator::
bound (const bound_type& x)
{
  this->bound_.set (x);
}

inline
void XsdBondSpreadCalculator::
bound (const bound_optional& x)
{
  this->bound_ = x;
}

inline
void XsdBondSpreadCalculator::
bound (::std::auto_ptr< bound_type > x)
{
  this->bound_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MODEL_BOND_CALC_IXX
