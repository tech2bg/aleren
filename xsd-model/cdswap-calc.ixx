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

#ifndef CXX___SCHEMA_XSD_MODEL_CDSWAP_CALC_IXX
#define CXX___SCHEMA_XSD_MODEL_CDSWAP_CALC_IXX

// Begin prologue.
//
//
// End prologue.

#include "market.ixx"

// XsdCDSwapResult
// 

inline
const XsdCDSwapResult::couponLeg_optional& XsdCDSwapResult::
couponLeg () const
{
  return this->couponLeg_;
}

inline
XsdCDSwapResult::couponLeg_optional& XsdCDSwapResult::
couponLeg ()
{
  return this->couponLeg_;
}

inline
void XsdCDSwapResult::
couponLeg (const couponLeg_type& x)
{
  this->couponLeg_.set (x);
}

inline
void XsdCDSwapResult::
couponLeg (const couponLeg_optional& x)
{
  this->couponLeg_ = x;
}

inline
void XsdCDSwapResult::
couponLeg (::std::auto_ptr< couponLeg_type > x)
{
  this->couponLeg_.set (x);
}

inline
const XsdCDSwapResult::defaultLeg_optional& XsdCDSwapResult::
defaultLeg () const
{
  return this->defaultLeg_;
}

inline
XsdCDSwapResult::defaultLeg_optional& XsdCDSwapResult::
defaultLeg ()
{
  return this->defaultLeg_;
}

inline
void XsdCDSwapResult::
defaultLeg (const defaultLeg_type& x)
{
  this->defaultLeg_.set (x);
}

inline
void XsdCDSwapResult::
defaultLeg (const defaultLeg_optional& x)
{
  this->defaultLeg_ = x;
}

inline
void XsdCDSwapResult::
defaultLeg (::std::auto_ptr< defaultLeg_type > x)
{
  this->defaultLeg_.set (x);
}

inline
const XsdCDSwapResult::upfrontFee_optional& XsdCDSwapResult::
upfrontFee () const
{
  return this->upfrontFee_;
}

inline
XsdCDSwapResult::upfrontFee_optional& XsdCDSwapResult::
upfrontFee ()
{
  return this->upfrontFee_;
}

inline
void XsdCDSwapResult::
upfrontFee (const upfrontFee_type& x)
{
  this->upfrontFee_.set (x);
}

inline
void XsdCDSwapResult::
upfrontFee (const upfrontFee_optional& x)
{
  this->upfrontFee_ = x;
}

inline
void XsdCDSwapResult::
upfrontFee (::std::auto_ptr< upfrontFee_type > x)
{
  this->upfrontFee_.set (x);
}

inline
const XsdCDSwapResult::fair_optional& XsdCDSwapResult::
fair () const
{
  return this->fair_;
}

inline
XsdCDSwapResult::fair_optional& XsdCDSwapResult::
fair ()
{
  return this->fair_;
}

inline
void XsdCDSwapResult::
fair (const fair_type& x)
{
  this->fair_.set (x);
}

inline
void XsdCDSwapResult::
fair (const fair_optional& x)
{
  this->fair_ = x;
}

inline
void XsdCDSwapResult::
fair (::std::auto_ptr< fair_type > x)
{
  this->fair_.set (x);
}


// XsdCDSwapCalculator
// 

inline
const XsdCDSwapCalculator::result_optional& XsdCDSwapCalculator::
result () const
{
  return this->result_;
}

inline
XsdCDSwapCalculator::result_optional& XsdCDSwapCalculator::
result ()
{
  return this->result_;
}

inline
void XsdCDSwapCalculator::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdCDSwapCalculator::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdCDSwapCalculator::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdCDSwapCalculator::swap_type& XsdCDSwapCalculator::
swap () const
{
  return this->swap_.get ();
}

inline
XsdCDSwapCalculator::swap_type& XsdCDSwapCalculator::
swap ()
{
  return this->swap_.get ();
}

inline
void XsdCDSwapCalculator::
swap (const swap_type& x)
{
  this->swap_.set (x);
}

inline
void XsdCDSwapCalculator::
swap (::std::auto_ptr< swap_type > x)
{
  this->swap_.set (x);
}

inline
const XsdCDSwapCalculator::market_optional& XsdCDSwapCalculator::
market () const
{
  return this->market_;
}

inline
XsdCDSwapCalculator::market_optional& XsdCDSwapCalculator::
market ()
{
  return this->market_;
}

inline
void XsdCDSwapCalculator::
market (const market_type& x)
{
  this->market_.set (x);
}

inline
void XsdCDSwapCalculator::
market (const market_optional& x)
{
  this->market_ = x;
}

inline
void XsdCDSwapCalculator::
market (::std::auto_ptr< market_type > x)
{
  this->market_.set (x);
}

inline
const XsdCDSwapCalculator::params_optional& XsdCDSwapCalculator::
params () const
{
  return this->params_;
}

inline
XsdCDSwapCalculator::params_optional& XsdCDSwapCalculator::
params ()
{
  return this->params_;
}

inline
void XsdCDSwapCalculator::
params (const params_type& x)
{
  this->params_.set (x);
}

inline
void XsdCDSwapCalculator::
params (const params_optional& x)
{
  this->params_ = x;
}

inline
void XsdCDSwapCalculator::
params (::std::auto_ptr< params_type > x)
{
  this->params_.set (x);
}


// XsdVanillaCDSwapCalculator
// 

inline
const XsdVanillaCDSwapCalculator::hazardCurve_type& XsdVanillaCDSwapCalculator::
hazardCurve () const
{
  return this->hazardCurve_.get ();
}

inline
XsdVanillaCDSwapCalculator::hazardCurve_type& XsdVanillaCDSwapCalculator::
hazardCurve ()
{
  return this->hazardCurve_.get ();
}

inline
void XsdVanillaCDSwapCalculator::
hazardCurve (const hazardCurve_type& x)
{
  this->hazardCurve_.set (x);
}

inline
void XsdVanillaCDSwapCalculator::
hazardCurve (::std::auto_ptr< hazardCurve_type > x)
{
  this->hazardCurve_.set (x);
}


// XsdLoanCDSwapCalculator
// 

inline
const XsdLoanCDSwapCalculator::refinanceRate_optional& XsdLoanCDSwapCalculator::
refinanceRate () const
{
  return this->refinanceRate_;
}

inline
XsdLoanCDSwapCalculator::refinanceRate_optional& XsdLoanCDSwapCalculator::
refinanceRate ()
{
  return this->refinanceRate_;
}

inline
void XsdLoanCDSwapCalculator::
refinanceRate (const refinanceRate_type& x)
{
  this->refinanceRate_.set (x);
}

inline
void XsdLoanCDSwapCalculator::
refinanceRate (const refinanceRate_optional& x)
{
  this->refinanceRate_ = x;
}

inline
void XsdLoanCDSwapCalculator::
refinanceRate (::std::auto_ptr< refinanceRate_type > x)
{
  this->refinanceRate_.set (x);
}

inline
const XsdLoanCDSwapCalculator::refiCorrelation_optional& XsdLoanCDSwapCalculator::
refiCorrelation () const
{
  return this->refiCorrelation_;
}

inline
XsdLoanCDSwapCalculator::refiCorrelation_optional& XsdLoanCDSwapCalculator::
refiCorrelation ()
{
  return this->refiCorrelation_;
}

inline
void XsdLoanCDSwapCalculator::
refiCorrelation (const refiCorrelation_type& x)
{
  this->refiCorrelation_.set (x);
}

inline
void XsdLoanCDSwapCalculator::
refiCorrelation (const refiCorrelation_optional& x)
{
  this->refiCorrelation_ = x;
}

inline
void XsdLoanCDSwapCalculator::
refiCorrelation (::std::auto_ptr< refiCorrelation_type > x)
{
  this->refiCorrelation_.set (x);
}


// XsdSpreadAndValue
// 

inline
const XsdSpreadAndValue::spread_optional& XsdSpreadAndValue::
spread () const
{
  return this->spread_;
}

inline
XsdSpreadAndValue::spread_optional& XsdSpreadAndValue::
spread ()
{
  return this->spread_;
}

inline
void XsdSpreadAndValue::
spread (const spread_type& x)
{
  this->spread_.set (x);
}

inline
void XsdSpreadAndValue::
spread (const spread_optional& x)
{
  this->spread_ = x;
}

inline
const XsdSpreadAndValue::value_optional& XsdSpreadAndValue::
value () const
{
  return this->value_;
}

inline
XsdSpreadAndValue::value_optional& XsdSpreadAndValue::
value ()
{
  return this->value_;
}

inline
void XsdSpreadAndValue::
value (const value_type& x)
{
  this->value_.set (x);
}

inline
void XsdSpreadAndValue::
value (const value_optional& x)
{
  this->value_ = x;
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MODEL_CDSWAP_CALC_IXX