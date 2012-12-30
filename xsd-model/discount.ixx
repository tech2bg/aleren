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

#ifndef CXX___SCHEMA_XSD_MODEL_DISCOUNT_IXX
#define CXX___SCHEMA_XSD_MODEL_DISCOUNT_IXX

// Begin prologue.
//
//
// End prologue.

#include "term-structure.ixx"

// XsdDiscountKey
// 

inline
const XsdDiscountKey::currency_type& XsdDiscountKey::
currency () const
{
  return this->currency_.get ();
}

inline
XsdDiscountKey::currency_type& XsdDiscountKey::
currency ()
{
  return this->currency_.get ();
}

inline
void XsdDiscountKey::
currency (const currency_type& x)
{
  this->currency_.set (x);
}

inline
void XsdDiscountKey::
currency (::std::auto_ptr< currency_type > x)
{
  this->currency_.set (x);
}

inline
const XsdDiscountKey::currency_type& XsdDiscountKey::
currency_default_value ()
{
  return currency_default_value_;
}


// XsdDiscountCurve
// 

inline
const XsdDiscountCurve::rateType_optional& XsdDiscountCurve::
rateType () const
{
  return this->rateType_;
}

inline
XsdDiscountCurve::rateType_optional& XsdDiscountCurve::
rateType ()
{
  return this->rateType_;
}

inline
void XsdDiscountCurve::
rateType (const rateType_type& x)
{
  this->rateType_.set (x);
}

inline
void XsdDiscountCurve::
rateType (const rateType_optional& x)
{
  this->rateType_ = x;
}

inline
void XsdDiscountCurve::
rateType (::std::auto_ptr< rateType_type > x)
{
  this->rateType_.set (x);
}

inline
const XsdDiscountCurve::rateType_type& XsdDiscountCurve::
rateType_default_value ()
{
  return rateType_default_value_;
}

inline
const XsdDiscountCurve::inflationAdjusted_optional& XsdDiscountCurve::
inflationAdjusted () const
{
  return this->inflationAdjusted_;
}

inline
XsdDiscountCurve::inflationAdjusted_optional& XsdDiscountCurve::
inflationAdjusted ()
{
  return this->inflationAdjusted_;
}

inline
void XsdDiscountCurve::
inflationAdjusted (const inflationAdjusted_type& x)
{
  this->inflationAdjusted_.set (x);
}

inline
void XsdDiscountCurve::
inflationAdjusted (const inflationAdjusted_optional& x)
{
  this->inflationAdjusted_ = x;
}

inline
XsdDiscountCurve::inflationAdjusted_type XsdDiscountCurve::
inflationAdjusted_default_value ()
{
  return inflationAdjusted_type (false);
}

inline
const XsdDiscountCurve::schemaType_type& XsdDiscountCurve::
schemaType () const
{
  return this->schemaType_.get ();
}

inline
const XsdDiscountCurve::schemaType_type& XsdDiscountCurve::
schemaType_default_value ()
{
  return schemaType_default_value_;
}


// XsdFlatDiscountCurve
// 

inline
const XsdFlatDiscountCurve::discountRate_optional& XsdFlatDiscountCurve::
discountRate () const
{
  return this->discountRate_;
}

inline
XsdFlatDiscountCurve::discountRate_optional& XsdFlatDiscountCurve::
discountRate ()
{
  return this->discountRate_;
}

inline
void XsdFlatDiscountCurve::
discountRate (const discountRate_type& x)
{
  this->discountRate_.set (x);
}

inline
void XsdFlatDiscountCurve::
discountRate (const discountRate_optional& x)
{
  this->discountRate_ = x;
}

inline
XsdFlatDiscountCurve::discountRate_type XsdFlatDiscountCurve::
discountRate_default_value ()
{
  return discountRate_type (.0);
}


// XsdSimpleDiscountCurve
// 

inline
const XsdSimpleDiscountCurve::curve_optional& XsdSimpleDiscountCurve::
curve () const
{
  return this->curve_;
}

inline
XsdSimpleDiscountCurve::curve_optional& XsdSimpleDiscountCurve::
curve ()
{
  return this->curve_;
}

inline
void XsdSimpleDiscountCurve::
curve (const curve_type& x)
{
  this->curve_.set (x);
}

inline
void XsdSimpleDiscountCurve::
curve (const curve_optional& x)
{
  this->curve_ = x;
}

inline
void XsdSimpleDiscountCurve::
curve (::std::auto_ptr< curve_type > x)
{
  this->curve_.set (x);
}


// XsdInterpolatedDiscountCurve
// 

inline
const XsdInterpolatedDiscountCurve::rates_type& XsdInterpolatedDiscountCurve::
rates () const
{
  return this->rates_.get ();
}

inline
XsdInterpolatedDiscountCurve::rates_type& XsdInterpolatedDiscountCurve::
rates ()
{
  return this->rates_.get ();
}

inline
void XsdInterpolatedDiscountCurve::
rates (const rates_type& x)
{
  this->rates_.set (x);
}

inline
void XsdInterpolatedDiscountCurve::
rates (::std::auto_ptr< rates_type > x)
{
  this->rates_.set (x);
}

inline
const XsdInterpolatedDiscountCurve::interpolate_optional& XsdInterpolatedDiscountCurve::
interpolate () const
{
  return this->interpolate_;
}

inline
XsdInterpolatedDiscountCurve::interpolate_optional& XsdInterpolatedDiscountCurve::
interpolate ()
{
  return this->interpolate_;
}

inline
void XsdInterpolatedDiscountCurve::
interpolate (const interpolate_type& x)
{
  this->interpolate_.set (x);
}

inline
void XsdInterpolatedDiscountCurve::
interpolate (const interpolate_optional& x)
{
  this->interpolate_ = x;
}

inline
void XsdInterpolatedDiscountCurve::
interpolate (::std::auto_ptr< interpolate_type > x)
{
  this->interpolate_.set (x);
}

inline
const XsdInterpolatedDiscountCurve::extrapolate_optional& XsdInterpolatedDiscountCurve::
extrapolate () const
{
  return this->extrapolate_;
}

inline
XsdInterpolatedDiscountCurve::extrapolate_optional& XsdInterpolatedDiscountCurve::
extrapolate ()
{
  return this->extrapolate_;
}

inline
void XsdInterpolatedDiscountCurve::
extrapolate (const extrapolate_type& x)
{
  this->extrapolate_.set (x);
}

inline
void XsdInterpolatedDiscountCurve::
extrapolate (const extrapolate_optional& x)
{
  this->extrapolate_ = x;
}

inline
XsdInterpolatedDiscountCurve::extrapolate_type XsdInterpolatedDiscountCurve::
extrapolate_default_value ()
{
  return extrapolate_type (false);
}


// XsdCompositeDiscountCurve
// 

inline
const XsdCompositeDiscountCurve::add_optional& XsdCompositeDiscountCurve::
add () const
{
  return this->add_;
}

inline
XsdCompositeDiscountCurve::add_optional& XsdCompositeDiscountCurve::
add ()
{
  return this->add_;
}

inline
void XsdCompositeDiscountCurve::
add (const add_type& x)
{
  this->add_.set (x);
}

inline
void XsdCompositeDiscountCurve::
add (const add_optional& x)
{
  this->add_ = x;
}

inline
void XsdCompositeDiscountCurve::
add (::std::auto_ptr< add_type > x)
{
  this->add_.set (x);
}

inline
const XsdCompositeDiscountCurve::subtract_optional& XsdCompositeDiscountCurve::
subtract () const
{
  return this->subtract_;
}

inline
XsdCompositeDiscountCurve::subtract_optional& XsdCompositeDiscountCurve::
subtract ()
{
  return this->subtract_;
}

inline
void XsdCompositeDiscountCurve::
subtract (const subtract_type& x)
{
  this->subtract_.set (x);
}

inline
void XsdCompositeDiscountCurve::
subtract (const subtract_optional& x)
{
  this->subtract_ = x;
}

inline
void XsdCompositeDiscountCurve::
subtract (::std::auto_ptr< subtract_type > x)
{
  this->subtract_.set (x);
}

inline
const XsdCompositeDiscountCurve::multiply_optional& XsdCompositeDiscountCurve::
multiply () const
{
  return this->multiply_;
}

inline
XsdCompositeDiscountCurve::multiply_optional& XsdCompositeDiscountCurve::
multiply ()
{
  return this->multiply_;
}

inline
void XsdCompositeDiscountCurve::
multiply (const multiply_type& x)
{
  this->multiply_.set (x);
}

inline
void XsdCompositeDiscountCurve::
multiply (const multiply_optional& x)
{
  this->multiply_ = x;
}

inline
void XsdCompositeDiscountCurve::
multiply (::std::auto_ptr< multiply_type > x)
{
  this->multiply_.set (x);
}

inline
const XsdCompositeDiscountCurve::divide_optional& XsdCompositeDiscountCurve::
divide () const
{
  return this->divide_;
}

inline
XsdCompositeDiscountCurve::divide_optional& XsdCompositeDiscountCurve::
divide ()
{
  return this->divide_;
}

inline
void XsdCompositeDiscountCurve::
divide (const divide_type& x)
{
  this->divide_.set (x);
}

inline
void XsdCompositeDiscountCurve::
divide (const divide_optional& x)
{
  this->divide_ = x;
}

inline
void XsdCompositeDiscountCurve::
divide (::std::auto_ptr< divide_type > x)
{
  this->divide_.set (x);
}

inline
const XsdCompositeDiscountCurve::min_optional& XsdCompositeDiscountCurve::
min () const
{
  return this->min_;
}

inline
XsdCompositeDiscountCurve::min_optional& XsdCompositeDiscountCurve::
min ()
{
  return this->min_;
}

inline
void XsdCompositeDiscountCurve::
min (const min_type& x)
{
  this->min_.set (x);
}

inline
void XsdCompositeDiscountCurve::
min (const min_optional& x)
{
  this->min_ = x;
}

inline
void XsdCompositeDiscountCurve::
min (::std::auto_ptr< min_type > x)
{
  this->min_.set (x);
}

inline
const XsdCompositeDiscountCurve::max_optional& XsdCompositeDiscountCurve::
max () const
{
  return this->max_;
}

inline
XsdCompositeDiscountCurve::max_optional& XsdCompositeDiscountCurve::
max ()
{
  return this->max_;
}

inline
void XsdCompositeDiscountCurve::
max (const max_type& x)
{
  this->max_.set (x);
}

inline
void XsdCompositeDiscountCurve::
max (const max_optional& x)
{
  this->max_ = x;
}

inline
void XsdCompositeDiscountCurve::
max (::std::auto_ptr< max_type > x)
{
  this->max_.set (x);
}


// XsdCalibratedDiscountCurve
// 

inline
const XsdCalibratedDiscountCurve::result_optional& XsdCalibratedDiscountCurve::
result () const
{
  return this->result_;
}

inline
XsdCalibratedDiscountCurve::result_optional& XsdCalibratedDiscountCurve::
result ()
{
  return this->result_;
}

inline
void XsdCalibratedDiscountCurve::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdCalibratedDiscountCurve::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdCalibratedDiscountCurve::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdCalibratedDiscountCurve::market_optional& XsdCalibratedDiscountCurve::
market () const
{
  return this->market_;
}

inline
XsdCalibratedDiscountCurve::market_optional& XsdCalibratedDiscountCurve::
market ()
{
  return this->market_;
}

inline
void XsdCalibratedDiscountCurve::
market (const market_type& x)
{
  this->market_.set (x);
}

inline
void XsdCalibratedDiscountCurve::
market (const market_optional& x)
{
  this->market_ = x;
}

inline
void XsdCalibratedDiscountCurve::
market (::std::auto_ptr< market_type > x)
{
  this->market_.set (x);
}

inline
const XsdCalibratedDiscountCurve::options_optional& XsdCalibratedDiscountCurve::
options () const
{
  return this->options_;
}

inline
XsdCalibratedDiscountCurve::options_optional& XsdCalibratedDiscountCurve::
options ()
{
  return this->options_;
}

inline
void XsdCalibratedDiscountCurve::
options (const options_type& x)
{
  this->options_.set (x);
}

inline
void XsdCalibratedDiscountCurve::
options (const options_optional& x)
{
  this->options_ = x;
}

inline
void XsdCalibratedDiscountCurve::
options (::std::auto_ptr< options_type > x)
{
  this->options_.set (x);
}

inline
const XsdCalibratedDiscountCurve::assumptions_optional& XsdCalibratedDiscountCurve::
assumptions () const
{
  return this->assumptions_;
}

inline
XsdCalibratedDiscountCurve::assumptions_optional& XsdCalibratedDiscountCurve::
assumptions ()
{
  return this->assumptions_;
}

inline
void XsdCalibratedDiscountCurve::
assumptions (const assumptions_type& x)
{
  this->assumptions_.set (x);
}

inline
void XsdCalibratedDiscountCurve::
assumptions (const assumptions_optional& x)
{
  this->assumptions_ = x;
}

inline
void XsdCalibratedDiscountCurve::
assumptions (::std::auto_ptr< assumptions_type > x)
{
  this->assumptions_.set (x);
}

inline
const XsdCalibratedDiscountCurve::benchmark_sequence& XsdCalibratedDiscountCurve::
benchmark () const
{
  return this->benchmark_;
}

inline
XsdCalibratedDiscountCurve::benchmark_sequence& XsdCalibratedDiscountCurve::
benchmark ()
{
  return this->benchmark_;
}

inline
void XsdCalibratedDiscountCurve::
benchmark (const benchmark_sequence& s)
{
  this->benchmark_ = s;
}


// XsdBootstrapDiscountCurve
// 

inline
const XsdBootstrapDiscountCurve::interpolate_optional& XsdBootstrapDiscountCurve::
interpolate () const
{
  return this->interpolate_;
}

inline
XsdBootstrapDiscountCurve::interpolate_optional& XsdBootstrapDiscountCurve::
interpolate ()
{
  return this->interpolate_;
}

inline
void XsdBootstrapDiscountCurve::
interpolate (const interpolate_type& x)
{
  this->interpolate_.set (x);
}

inline
void XsdBootstrapDiscountCurve::
interpolate (const interpolate_optional& x)
{
  this->interpolate_ = x;
}

inline
void XsdBootstrapDiscountCurve::
interpolate (::std::auto_ptr< interpolate_type > x)
{
  this->interpolate_.set (x);
}

inline
const XsdBootstrapDiscountCurve::extrapolate_optional& XsdBootstrapDiscountCurve::
extrapolate () const
{
  return this->extrapolate_;
}

inline
XsdBootstrapDiscountCurve::extrapolate_optional& XsdBootstrapDiscountCurve::
extrapolate ()
{
  return this->extrapolate_;
}

inline
void XsdBootstrapDiscountCurve::
extrapolate (const extrapolate_type& x)
{
  this->extrapolate_.set (x);
}

inline
void XsdBootstrapDiscountCurve::
extrapolate (const extrapolate_optional& x)
{
  this->extrapolate_ = x;
}

inline
void XsdBootstrapDiscountCurve::
extrapolate (::std::auto_ptr< extrapolate_type > x)
{
  this->extrapolate_.set (x);
}

inline
const XsdBootstrapDiscountCurve::extrapolate_type& XsdBootstrapDiscountCurve::
extrapolate_default_value ()
{
  return extrapolate_default_value_;
}


// XsdLeastSquaresDiscountCurve
// 

inline
const XsdLeastSquaresDiscountCurve::exponential_optional& XsdLeastSquaresDiscountCurve::
exponential () const
{
  return this->exponential_;
}

inline
XsdLeastSquaresDiscountCurve::exponential_optional& XsdLeastSquaresDiscountCurve::
exponential ()
{
  return this->exponential_;
}

inline
void XsdLeastSquaresDiscountCurve::
exponential (const exponential_type& x)
{
  this->exponential_.set (x);
}

inline
void XsdLeastSquaresDiscountCurve::
exponential (const exponential_optional& x)
{
  this->exponential_ = x;
}

inline
void XsdLeastSquaresDiscountCurve::
exponential (::std::auto_ptr< exponential_type > x)
{
  this->exponential_.set (x);
}

inline
const XsdLeastSquaresDiscountCurve::nelsonSiegel_optional& XsdLeastSquaresDiscountCurve::
nelsonSiegel () const
{
  return this->nelsonSiegel_;
}

inline
XsdLeastSquaresDiscountCurve::nelsonSiegel_optional& XsdLeastSquaresDiscountCurve::
nelsonSiegel ()
{
  return this->nelsonSiegel_;
}

inline
void XsdLeastSquaresDiscountCurve::
nelsonSiegel (const nelsonSiegel_type& x)
{
  this->nelsonSiegel_.set (x);
}

inline
void XsdLeastSquaresDiscountCurve::
nelsonSiegel (const nelsonSiegel_optional& x)
{
  this->nelsonSiegel_ = x;
}

inline
void XsdLeastSquaresDiscountCurve::
nelsonSiegel (::std::auto_ptr< nelsonSiegel_type > x)
{
  this->nelsonSiegel_.set (x);
}

inline
const XsdLeastSquaresDiscountCurve::polynomial_optional& XsdLeastSquaresDiscountCurve::
polynomial () const
{
  return this->polynomial_;
}

inline
XsdLeastSquaresDiscountCurve::polynomial_optional& XsdLeastSquaresDiscountCurve::
polynomial ()
{
  return this->polynomial_;
}

inline
void XsdLeastSquaresDiscountCurve::
polynomial (const polynomial_type& x)
{
  this->polynomial_.set (x);
}

inline
void XsdLeastSquaresDiscountCurve::
polynomial (const polynomial_optional& x)
{
  this->polynomial_ = x;
}

inline
void XsdLeastSquaresDiscountCurve::
polynomial (::std::auto_ptr< polynomial_type > x)
{
  this->polynomial_.set (x);
}

inline
const XsdLeastSquaresDiscountCurve::svensson_optional& XsdLeastSquaresDiscountCurve::
svensson () const
{
  return this->svensson_;
}

inline
XsdLeastSquaresDiscountCurve::svensson_optional& XsdLeastSquaresDiscountCurve::
svensson ()
{
  return this->svensson_;
}

inline
void XsdLeastSquaresDiscountCurve::
svensson (const svensson_type& x)
{
  this->svensson_.set (x);
}

inline
void XsdLeastSquaresDiscountCurve::
svensson (const svensson_optional& x)
{
  this->svensson_ = x;
}

inline
void XsdLeastSquaresDiscountCurve::
svensson (::std::auto_ptr< svensson_type > x)
{
  this->svensson_.set (x);
}

inline
const XsdLeastSquaresDiscountCurve::bspline_optional& XsdLeastSquaresDiscountCurve::
bspline () const
{
  return this->bspline_;
}

inline
XsdLeastSquaresDiscountCurve::bspline_optional& XsdLeastSquaresDiscountCurve::
bspline ()
{
  return this->bspline_;
}

inline
void XsdLeastSquaresDiscountCurve::
bspline (const bspline_type& x)
{
  this->bspline_.set (x);
}

inline
void XsdLeastSquaresDiscountCurve::
bspline (const bspline_optional& x)
{
  this->bspline_ = x;
}

inline
void XsdLeastSquaresDiscountCurve::
bspline (::std::auto_ptr< bspline_type > x)
{
  this->bspline_.set (x);
}

inline
const XsdLeastSquaresDiscountCurve::solver_optional& XsdLeastSquaresDiscountCurve::
solver () const
{
  return this->solver_;
}

inline
XsdLeastSquaresDiscountCurve::solver_optional& XsdLeastSquaresDiscountCurve::
solver ()
{
  return this->solver_;
}

inline
void XsdLeastSquaresDiscountCurve::
solver (const solver_type& x)
{
  this->solver_.set (x);
}

inline
void XsdLeastSquaresDiscountCurve::
solver (const solver_optional& x)
{
  this->solver_ = x;
}

inline
void XsdLeastSquaresDiscountCurve::
solver (::std::auto_ptr< solver_type > x)
{
  this->solver_.set (x);
}

inline
const XsdLeastSquaresDiscountCurve::penalty_optional& XsdLeastSquaresDiscountCurve::
penalty () const
{
  return this->penalty_;
}

inline
XsdLeastSquaresDiscountCurve::penalty_optional& XsdLeastSquaresDiscountCurve::
penalty ()
{
  return this->penalty_;
}

inline
void XsdLeastSquaresDiscountCurve::
penalty (const penalty_type& x)
{
  this->penalty_.set (x);
}

inline
void XsdLeastSquaresDiscountCurve::
penalty (const penalty_optional& x)
{
  this->penalty_ = x;
}

inline
void XsdLeastSquaresDiscountCurve::
penalty (::std::auto_ptr< penalty_type > x)
{
  this->penalty_.set (x);
}


// XsdVasicekFongDiscountCurve
// 

inline
const XsdVasicekFongDiscountCurve::longRate_optional& XsdVasicekFongDiscountCurve::
longRate () const
{
  return this->longRate_;
}

inline
XsdVasicekFongDiscountCurve::longRate_optional& XsdVasicekFongDiscountCurve::
longRate ()
{
  return this->longRate_;
}

inline
void XsdVasicekFongDiscountCurve::
longRate (const longRate_type& x)
{
  this->longRate_.set (x);
}

inline
void XsdVasicekFongDiscountCurve::
longRate (const longRate_optional& x)
{
  this->longRate_ = x;
}

inline
void XsdVasicekFongDiscountCurve::
longRate (::std::auto_ptr< longRate_type > x)
{
  this->longRate_.set (x);
}

inline
const XsdVasicekFongDiscountCurve::splineBasis_type& XsdVasicekFongDiscountCurve::
splineBasis () const
{
  return this->splineBasis_.get ();
}

inline
XsdVasicekFongDiscountCurve::splineBasis_type& XsdVasicekFongDiscountCurve::
splineBasis ()
{
  return this->splineBasis_.get ();
}

inline
void XsdVasicekFongDiscountCurve::
splineBasis (const splineBasis_type& x)
{
  this->splineBasis_.set (x);
}

inline
void XsdVasicekFongDiscountCurve::
splineBasis (::std::auto_ptr< splineBasis_type > x)
{
  this->splineBasis_.set (x);
}


// XsdDiscountTest
// 

inline
const XsdDiscountTest::result_optional& XsdDiscountTest::
result () const
{
  return this->result_;
}

inline
XsdDiscountTest::result_optional& XsdDiscountTest::
result ()
{
  return this->result_;
}

inline
void XsdDiscountTest::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdDiscountTest::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdDiscountTest::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdDiscountTest::rateType_optional& XsdDiscountTest::
rateType () const
{
  return this->rateType_;
}

inline
XsdDiscountTest::rateType_optional& XsdDiscountTest::
rateType ()
{
  return this->rateType_;
}

inline
void XsdDiscountTest::
rateType (const rateType_type& x)
{
  this->rateType_.set (x);
}

inline
void XsdDiscountTest::
rateType (const rateType_optional& x)
{
  this->rateType_ = x;
}

inline
void XsdDiscountTest::
rateType (::std::auto_ptr< rateType_type > x)
{
  this->rateType_.set (x);
}

inline
const XsdDiscountTest::rateType_type& XsdDiscountTest::
rateType_default_value ()
{
  return rateType_default_value_;
}

inline
const XsdDiscountTest::begin_optional& XsdDiscountTest::
begin () const
{
  return this->begin_;
}

inline
XsdDiscountTest::begin_optional& XsdDiscountTest::
begin ()
{
  return this->begin_;
}

inline
void XsdDiscountTest::
begin (const begin_type& x)
{
  this->begin_.set (x);
}

inline
void XsdDiscountTest::
begin (const begin_optional& x)
{
  this->begin_ = x;
}

inline
void XsdDiscountTest::
begin (::std::auto_ptr< begin_type > x)
{
  this->begin_.set (x);
}

inline
const XsdDiscountTest::end_type& XsdDiscountTest::
end () const
{
  return this->end_.get ();
}

inline
XsdDiscountTest::end_type& XsdDiscountTest::
end ()
{
  return this->end_.get ();
}

inline
void XsdDiscountTest::
end (const end_type& x)
{
  this->end_.set (x);
}

inline
void XsdDiscountTest::
end (::std::auto_ptr< end_type > x)
{
  this->end_.set (x);
}

inline
const XsdDiscountTest::forward_optional& XsdDiscountTest::
forward () const
{
  return this->forward_;
}

inline
XsdDiscountTest::forward_optional& XsdDiscountTest::
forward ()
{
  return this->forward_;
}

inline
void XsdDiscountTest::
forward (const forward_type& x)
{
  this->forward_.set (x);
}

inline
void XsdDiscountTest::
forward (const forward_optional& x)
{
  this->forward_ = x;
}

inline
void XsdDiscountTest::
forward (::std::auto_ptr< forward_type > x)
{
  this->forward_.set (x);
}

inline
const XsdDiscountTest::forward_type& XsdDiscountTest::
forward_default_value ()
{
  return forward_default_value_;
}

inline
const XsdDiscountTest::discount_type& XsdDiscountTest::
discount () const
{
  return this->discount_.get ();
}

inline
XsdDiscountTest::discount_type& XsdDiscountTest::
discount ()
{
  return this->discount_.get ();
}

inline
void XsdDiscountTest::
discount (const discount_type& x)
{
  this->discount_.set (x);
}

inline
void XsdDiscountTest::
discount (::std::auto_ptr< discount_type > x)
{
  this->discount_.set (x);
}

inline
const XsdDiscountTest::frequency_optional& XsdDiscountTest::
frequency () const
{
  return this->frequency_;
}

inline
XsdDiscountTest::frequency_optional& XsdDiscountTest::
frequency ()
{
  return this->frequency_;
}

inline
void XsdDiscountTest::
frequency (const frequency_type& x)
{
  this->frequency_.set (x);
}

inline
void XsdDiscountTest::
frequency (const frequency_optional& x)
{
  this->frequency_ = x;
}

inline
void XsdDiscountTest::
frequency (::std::auto_ptr< frequency_type > x)
{
  this->frequency_.set (x);
}

inline
const XsdDiscountTest::frequency_type& XsdDiscountTest::
frequency_default_value ()
{
  return frequency_default_value_;
}

inline
const XsdDiscountTest::dayCount_optional& XsdDiscountTest::
dayCount () const
{
  return this->dayCount_;
}

inline
XsdDiscountTest::dayCount_optional& XsdDiscountTest::
dayCount ()
{
  return this->dayCount_;
}

inline
void XsdDiscountTest::
dayCount (const dayCount_type& x)
{
  this->dayCount_.set (x);
}

inline
void XsdDiscountTest::
dayCount (const dayCount_optional& x)
{
  this->dayCount_ = x;
}

inline
void XsdDiscountTest::
dayCount (::std::auto_ptr< dayCount_type > x)
{
  this->dayCount_.set (x);
}


// XsdDiscountResult
// 

inline
const XsdDiscountResult::curve_type& XsdDiscountResult::
curve () const
{
  return this->curve_.get ();
}

inline
XsdDiscountResult::curve_type& XsdDiscountResult::
curve ()
{
  return this->curve_.get ();
}

inline
void XsdDiscountResult::
curve (const curve_type& x)
{
  this->curve_.set (x);
}

inline
void XsdDiscountResult::
curve (::std::auto_ptr< curve_type > x)
{
  this->curve_.set (x);
}


// XsdDiscountArgs
// 

inline
const XsdDiscountArgs::scalar_optional& XsdDiscountArgs::
scalar () const
{
  return this->scalar_;
}

inline
XsdDiscountArgs::scalar_optional& XsdDiscountArgs::
scalar ()
{
  return this->scalar_;
}

inline
void XsdDiscountArgs::
scalar (const scalar_type& x)
{
  this->scalar_.set (x);
}

inline
void XsdDiscountArgs::
scalar (const scalar_optional& x)
{
  this->scalar_ = x;
}

inline
const XsdDiscountArgs::curve_optional& XsdDiscountArgs::
curve () const
{
  return this->curve_;
}

inline
XsdDiscountArgs::curve_optional& XsdDiscountArgs::
curve ()
{
  return this->curve_;
}

inline
void XsdDiscountArgs::
curve (const curve_type& x)
{
  this->curve_.set (x);
}

inline
void XsdDiscountArgs::
curve (const curve_optional& x)
{
  this->curve_ = x;
}

inline
void XsdDiscountArgs::
curve (::std::auto_ptr< curve_type > x)
{
  this->curve_.set (x);
}

inline
const XsdDiscountArgs::discount_optional& XsdDiscountArgs::
discount () const
{
  return this->discount_;
}

inline
XsdDiscountArgs::discount_optional& XsdDiscountArgs::
discount ()
{
  return this->discount_;
}

inline
void XsdDiscountArgs::
discount (const discount_type& x)
{
  this->discount_.set (x);
}

inline
void XsdDiscountArgs::
discount (const discount_optional& x)
{
  this->discount_ = x;
}

inline
void XsdDiscountArgs::
discount (::std::auto_ptr< discount_type > x)
{
  this->discount_.set (x);
}


// XsdDiscountBinary
// 

inline
const XsdDiscountBinary::first_type& XsdDiscountBinary::
first () const
{
  return this->first_.get ();
}

inline
XsdDiscountBinary::first_type& XsdDiscountBinary::
first ()
{
  return this->first_.get ();
}

inline
void XsdDiscountBinary::
first (const first_type& x)
{
  this->first_.set (x);
}

inline
void XsdDiscountBinary::
first (::std::auto_ptr< first_type > x)
{
  this->first_.set (x);
}

inline
const XsdDiscountBinary::second_type& XsdDiscountBinary::
second () const
{
  return this->second_.get ();
}

inline
XsdDiscountBinary::second_type& XsdDiscountBinary::
second ()
{
  return this->second_.get ();
}

inline
void XsdDiscountBinary::
second (const second_type& x)
{
  this->second_.set (x);
}

inline
void XsdDiscountBinary::
second (::std::auto_ptr< second_type > x)
{
  this->second_.set (x);
}

inline
const XsdDiscountBinary::frequency_optional& XsdDiscountBinary::
frequency () const
{
  return this->frequency_;
}

inline
XsdDiscountBinary::frequency_optional& XsdDiscountBinary::
frequency ()
{
  return this->frequency_;
}

inline
void XsdDiscountBinary::
frequency (const frequency_type& x)
{
  this->frequency_.set (x);
}

inline
void XsdDiscountBinary::
frequency (const frequency_optional& x)
{
  this->frequency_ = x;
}

inline
void XsdDiscountBinary::
frequency (::std::auto_ptr< frequency_type > x)
{
  this->frequency_.set (x);
}

inline
const XsdDiscountBinary::frequency_type& XsdDiscountBinary::
frequency_default_value ()
{
  return frequency_default_value_;
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MODEL_DISCOUNT_IXX
