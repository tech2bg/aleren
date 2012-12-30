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

#ifndef CXX___SCHEMA_XSD_MODEL_HAZARD_IXX
#define CXX___SCHEMA_XSD_MODEL_HAZARD_IXX

// Begin prologue.
//
//
// End prologue.

#include "discount.ixx"

#include "recovery.ixx"

// XsdHazardKey
// 

inline
const XsdHazardKey::obligorID_optional& XsdHazardKey::
obligorID () const
{
  return this->obligorID_;
}

inline
XsdHazardKey::obligorID_optional& XsdHazardKey::
obligorID ()
{
  return this->obligorID_;
}

inline
void XsdHazardKey::
obligorID (const obligorID_type& x)
{
  this->obligorID_.set (x);
}

inline
void XsdHazardKey::
obligorID (const obligorID_optional& x)
{
  this->obligorID_ = x;
}

inline
void XsdHazardKey::
obligorID (::std::auto_ptr< obligorID_type > x)
{
  this->obligorID_.set (x);
}


// XsdHazardCurve
// 

inline
const XsdHazardCurve::hazardType_optional& XsdHazardCurve::
hazardType () const
{
  return this->hazardType_;
}

inline
XsdHazardCurve::hazardType_optional& XsdHazardCurve::
hazardType ()
{
  return this->hazardType_;
}

inline
void XsdHazardCurve::
hazardType (const hazardType_type& x)
{
  this->hazardType_.set (x);
}

inline
void XsdHazardCurve::
hazardType (const hazardType_optional& x)
{
  this->hazardType_ = x;
}

inline
void XsdHazardCurve::
hazardType (::std::auto_ptr< hazardType_type > x)
{
  this->hazardType_.set (x);
}

inline
const XsdHazardCurve::hazardType_type& XsdHazardCurve::
hazardType_default_value ()
{
  return hazardType_default_value_;
}

inline
const XsdHazardCurve::discount_optional& XsdHazardCurve::
discount () const
{
  return this->discount_;
}

inline
XsdHazardCurve::discount_optional& XsdHazardCurve::
discount ()
{
  return this->discount_;
}

inline
void XsdHazardCurve::
discount (const discount_type& x)
{
  this->discount_.set (x);
}

inline
void XsdHazardCurve::
discount (const discount_optional& x)
{
  this->discount_ = x;
}

inline
void XsdHazardCurve::
discount (::std::auto_ptr< discount_type > x)
{
  this->discount_.set (x);
}

inline
const XsdHazardCurve::obligorID_optional& XsdHazardCurve::
obligorID () const
{
  return this->obligorID_;
}

inline
XsdHazardCurve::obligorID_optional& XsdHazardCurve::
obligorID ()
{
  return this->obligorID_;
}

inline
void XsdHazardCurve::
obligorID (const obligorID_type& x)
{
  this->obligorID_.set (x);
}

inline
void XsdHazardCurve::
obligorID (const obligorID_optional& x)
{
  this->obligorID_ = x;
}

inline
void XsdHazardCurve::
obligorID (::std::auto_ptr< obligorID_type > x)
{
  this->obligorID_.set (x);
}

inline
const XsdHazardCurve::schemaType_type& XsdHazardCurve::
schemaType () const
{
  return this->schemaType_.get ();
}

inline
const XsdHazardCurve::schemaType_type& XsdHazardCurve::
schemaType_default_value ()
{
  return schemaType_default_value_;
}


// XsdFlatHazardCurve
// 

inline
const XsdFlatHazardCurve::hazardRate_type& XsdFlatHazardCurve::
hazardRate () const
{
  return this->hazardRate_.get ();
}

inline
XsdFlatHazardCurve::hazardRate_type& XsdFlatHazardCurve::
hazardRate ()
{
  return this->hazardRate_.get ();
}

inline
void XsdFlatHazardCurve::
hazardRate (const hazardRate_type& x)
{
  this->hazardRate_.set (x);
}

inline
void XsdFlatHazardCurve::
hazardRate (::std::auto_ptr< hazardRate_type > x)
{
  this->hazardRate_.set (x);
}


// XsdSimpleHazardCurve
// 

inline
const XsdSimpleHazardCurve::curve_type& XsdSimpleHazardCurve::
curve () const
{
  return this->curve_.get ();
}

inline
XsdSimpleHazardCurve::curve_type& XsdSimpleHazardCurve::
curve ()
{
  return this->curve_.get ();
}

inline
void XsdSimpleHazardCurve::
curve (const curve_type& x)
{
  this->curve_.set (x);
}

inline
void XsdSimpleHazardCurve::
curve (::std::auto_ptr< curve_type > x)
{
  this->curve_.set (x);
}


// XsdInterpolatedHazardCurve
// 

inline
const XsdInterpolatedHazardCurve::rates_type& XsdInterpolatedHazardCurve::
rates () const
{
  return this->rates_.get ();
}

inline
XsdInterpolatedHazardCurve::rates_type& XsdInterpolatedHazardCurve::
rates ()
{
  return this->rates_.get ();
}

inline
void XsdInterpolatedHazardCurve::
rates (const rates_type& x)
{
  this->rates_.set (x);
}

inline
void XsdInterpolatedHazardCurve::
rates (::std::auto_ptr< rates_type > x)
{
  this->rates_.set (x);
}

inline
const XsdInterpolatedHazardCurve::interpolate_optional& XsdInterpolatedHazardCurve::
interpolate () const
{
  return this->interpolate_;
}

inline
XsdInterpolatedHazardCurve::interpolate_optional& XsdInterpolatedHazardCurve::
interpolate ()
{
  return this->interpolate_;
}

inline
void XsdInterpolatedHazardCurve::
interpolate (const interpolate_type& x)
{
  this->interpolate_.set (x);
}

inline
void XsdInterpolatedHazardCurve::
interpolate (const interpolate_optional& x)
{
  this->interpolate_ = x;
}

inline
void XsdInterpolatedHazardCurve::
interpolate (::std::auto_ptr< interpolate_type > x)
{
  this->interpolate_.set (x);
}

inline
const XsdInterpolatedHazardCurve::extrapolate_optional& XsdInterpolatedHazardCurve::
extrapolate () const
{
  return this->extrapolate_;
}

inline
XsdInterpolatedHazardCurve::extrapolate_optional& XsdInterpolatedHazardCurve::
extrapolate ()
{
  return this->extrapolate_;
}

inline
void XsdInterpolatedHazardCurve::
extrapolate (const extrapolate_type& x)
{
  this->extrapolate_.set (x);
}

inline
void XsdInterpolatedHazardCurve::
extrapolate (const extrapolate_optional& x)
{
  this->extrapolate_ = x;
}

inline
XsdInterpolatedHazardCurve::extrapolate_type XsdInterpolatedHazardCurve::
extrapolate_default_value ()
{
  return extrapolate_type (false);
}


// XsdCompositeHazardCurve
// 

inline
const XsdCompositeHazardCurve::add_optional& XsdCompositeHazardCurve::
add () const
{
  return this->add_;
}

inline
XsdCompositeHazardCurve::add_optional& XsdCompositeHazardCurve::
add ()
{
  return this->add_;
}

inline
void XsdCompositeHazardCurve::
add (const add_type& x)
{
  this->add_.set (x);
}

inline
void XsdCompositeHazardCurve::
add (const add_optional& x)
{
  this->add_ = x;
}

inline
void XsdCompositeHazardCurve::
add (::std::auto_ptr< add_type > x)
{
  this->add_.set (x);
}

inline
const XsdCompositeHazardCurve::subtract_optional& XsdCompositeHazardCurve::
subtract () const
{
  return this->subtract_;
}

inline
XsdCompositeHazardCurve::subtract_optional& XsdCompositeHazardCurve::
subtract ()
{
  return this->subtract_;
}

inline
void XsdCompositeHazardCurve::
subtract (const subtract_type& x)
{
  this->subtract_.set (x);
}

inline
void XsdCompositeHazardCurve::
subtract (const subtract_optional& x)
{
  this->subtract_ = x;
}

inline
void XsdCompositeHazardCurve::
subtract (::std::auto_ptr< subtract_type > x)
{
  this->subtract_.set (x);
}

inline
const XsdCompositeHazardCurve::multiply_optional& XsdCompositeHazardCurve::
multiply () const
{
  return this->multiply_;
}

inline
XsdCompositeHazardCurve::multiply_optional& XsdCompositeHazardCurve::
multiply ()
{
  return this->multiply_;
}

inline
void XsdCompositeHazardCurve::
multiply (const multiply_type& x)
{
  this->multiply_.set (x);
}

inline
void XsdCompositeHazardCurve::
multiply (const multiply_optional& x)
{
  this->multiply_ = x;
}

inline
void XsdCompositeHazardCurve::
multiply (::std::auto_ptr< multiply_type > x)
{
  this->multiply_.set (x);
}

inline
const XsdCompositeHazardCurve::divide_optional& XsdCompositeHazardCurve::
divide () const
{
  return this->divide_;
}

inline
XsdCompositeHazardCurve::divide_optional& XsdCompositeHazardCurve::
divide ()
{
  return this->divide_;
}

inline
void XsdCompositeHazardCurve::
divide (const divide_type& x)
{
  this->divide_.set (x);
}

inline
void XsdCompositeHazardCurve::
divide (const divide_optional& x)
{
  this->divide_ = x;
}

inline
void XsdCompositeHazardCurve::
divide (::std::auto_ptr< divide_type > x)
{
  this->divide_.set (x);
}

inline
const XsdCompositeHazardCurve::min_optional& XsdCompositeHazardCurve::
min () const
{
  return this->min_;
}

inline
XsdCompositeHazardCurve::min_optional& XsdCompositeHazardCurve::
min ()
{
  return this->min_;
}

inline
void XsdCompositeHazardCurve::
min (const min_type& x)
{
  this->min_.set (x);
}

inline
void XsdCompositeHazardCurve::
min (const min_optional& x)
{
  this->min_ = x;
}

inline
void XsdCompositeHazardCurve::
min (::std::auto_ptr< min_type > x)
{
  this->min_.set (x);
}

inline
const XsdCompositeHazardCurve::max_optional& XsdCompositeHazardCurve::
max () const
{
  return this->max_;
}

inline
XsdCompositeHazardCurve::max_optional& XsdCompositeHazardCurve::
max ()
{
  return this->max_;
}

inline
void XsdCompositeHazardCurve::
max (const max_type& x)
{
  this->max_.set (x);
}

inline
void XsdCompositeHazardCurve::
max (const max_optional& x)
{
  this->max_ = x;
}

inline
void XsdCompositeHazardCurve::
max (::std::auto_ptr< max_type > x)
{
  this->max_.set (x);
}


// XsdImpliedHazardCurve
// 

inline
const XsdImpliedHazardCurve::riskyDiscount_type& XsdImpliedHazardCurve::
riskyDiscount () const
{
  return this->riskyDiscount_.get ();
}

inline
XsdImpliedHazardCurve::riskyDiscount_type& XsdImpliedHazardCurve::
riskyDiscount ()
{
  return this->riskyDiscount_.get ();
}

inline
void XsdImpliedHazardCurve::
riskyDiscount (const riskyDiscount_type& x)
{
  this->riskyDiscount_.set (x);
}

inline
void XsdImpliedHazardCurve::
riskyDiscount (::std::auto_ptr< riskyDiscount_type > x)
{
  this->riskyDiscount_.set (x);
}

inline
const XsdImpliedHazardCurve::recovery_type& XsdImpliedHazardCurve::
recovery () const
{
  return this->recovery_.get ();
}

inline
XsdImpliedHazardCurve::recovery_type& XsdImpliedHazardCurve::
recovery ()
{
  return this->recovery_.get ();
}

inline
void XsdImpliedHazardCurve::
recovery (const recovery_type& x)
{
  this->recovery_.set (x);
}

inline
void XsdImpliedHazardCurve::
recovery (::std::auto_ptr< recovery_type > x)
{
  this->recovery_.set (x);
}


// XsdRiskyDiscountCurve
// 

inline
const XsdRiskyDiscountCurve::hazard_type& XsdRiskyDiscountCurve::
hazard () const
{
  return this->hazard_.get ();
}

inline
XsdRiskyDiscountCurve::hazard_type& XsdRiskyDiscountCurve::
hazard ()
{
  return this->hazard_.get ();
}

inline
void XsdRiskyDiscountCurve::
hazard (const hazard_type& x)
{
  this->hazard_.set (x);
}

inline
void XsdRiskyDiscountCurve::
hazard (::std::auto_ptr< hazard_type > x)
{
  this->hazard_.set (x);
}

inline
const XsdRiskyDiscountCurve::recovery_type& XsdRiskyDiscountCurve::
recovery () const
{
  return this->recovery_.get ();
}

inline
XsdRiskyDiscountCurve::recovery_type& XsdRiskyDiscountCurve::
recovery ()
{
  return this->recovery_.get ();
}

inline
void XsdRiskyDiscountCurve::
recovery (const recovery_type& x)
{
  this->recovery_.set (x);
}

inline
void XsdRiskyDiscountCurve::
recovery (::std::auto_ptr< recovery_type > x)
{
  this->recovery_.set (x);
}


// XsdCalibratedHazardCurve
// 

inline
const XsdCalibratedHazardCurve::result_optional& XsdCalibratedHazardCurve::
result () const
{
  return this->result_;
}

inline
XsdCalibratedHazardCurve::result_optional& XsdCalibratedHazardCurve::
result ()
{
  return this->result_;
}

inline
void XsdCalibratedHazardCurve::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdCalibratedHazardCurve::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdCalibratedHazardCurve::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdCalibratedHazardCurve::options_optional& XsdCalibratedHazardCurve::
options () const
{
  return this->options_;
}

inline
XsdCalibratedHazardCurve::options_optional& XsdCalibratedHazardCurve::
options ()
{
  return this->options_;
}

inline
void XsdCalibratedHazardCurve::
options (const options_type& x)
{
  this->options_.set (x);
}

inline
void XsdCalibratedHazardCurve::
options (const options_optional& x)
{
  this->options_ = x;
}

inline
void XsdCalibratedHazardCurve::
options (::std::auto_ptr< options_type > x)
{
  this->options_.set (x);
}

inline
const XsdCalibratedHazardCurve::market_optional& XsdCalibratedHazardCurve::
market () const
{
  return this->market_;
}

inline
XsdCalibratedHazardCurve::market_optional& XsdCalibratedHazardCurve::
market ()
{
  return this->market_;
}

inline
void XsdCalibratedHazardCurve::
market (const market_type& x)
{
  this->market_.set (x);
}

inline
void XsdCalibratedHazardCurve::
market (const market_optional& x)
{
  this->market_ = x;
}

inline
void XsdCalibratedHazardCurve::
market (::std::auto_ptr< market_type > x)
{
  this->market_.set (x);
}

inline
const XsdCalibratedHazardCurve::assumptions_optional& XsdCalibratedHazardCurve::
assumptions () const
{
  return this->assumptions_;
}

inline
XsdCalibratedHazardCurve::assumptions_optional& XsdCalibratedHazardCurve::
assumptions ()
{
  return this->assumptions_;
}

inline
void XsdCalibratedHazardCurve::
assumptions (const assumptions_type& x)
{
  this->assumptions_.set (x);
}

inline
void XsdCalibratedHazardCurve::
assumptions (const assumptions_optional& x)
{
  this->assumptions_ = x;
}

inline
void XsdCalibratedHazardCurve::
assumptions (::std::auto_ptr< assumptions_type > x)
{
  this->assumptions_.set (x);
}

inline
const XsdCalibratedHazardCurve::benchmark_sequence& XsdCalibratedHazardCurve::
benchmark () const
{
  return this->benchmark_;
}

inline
XsdCalibratedHazardCurve::benchmark_sequence& XsdCalibratedHazardCurve::
benchmark ()
{
  return this->benchmark_;
}

inline
void XsdCalibratedHazardCurve::
benchmark (const benchmark_sequence& s)
{
  this->benchmark_ = s;
}

inline
const XsdCalibratedHazardCurve::interpolate_optional& XsdCalibratedHazardCurve::
interpolate () const
{
  return this->interpolate_;
}

inline
XsdCalibratedHazardCurve::interpolate_optional& XsdCalibratedHazardCurve::
interpolate ()
{
  return this->interpolate_;
}

inline
void XsdCalibratedHazardCurve::
interpolate (const interpolate_type& x)
{
  this->interpolate_.set (x);
}

inline
void XsdCalibratedHazardCurve::
interpolate (const interpolate_optional& x)
{
  this->interpolate_ = x;
}

inline
void XsdCalibratedHazardCurve::
interpolate (::std::auto_ptr< interpolate_type > x)
{
  this->interpolate_.set (x);
}

inline
const XsdCalibratedHazardCurve::extrapolate_optional& XsdCalibratedHazardCurve::
extrapolate () const
{
  return this->extrapolate_;
}

inline
XsdCalibratedHazardCurve::extrapolate_optional& XsdCalibratedHazardCurve::
extrapolate ()
{
  return this->extrapolate_;
}

inline
void XsdCalibratedHazardCurve::
extrapolate (const extrapolate_type& x)
{
  this->extrapolate_.set (x);
}

inline
void XsdCalibratedHazardCurve::
extrapolate (const extrapolate_optional& x)
{
  this->extrapolate_ = x;
}

inline
void XsdCalibratedHazardCurve::
extrapolate (::std::auto_ptr< extrapolate_type > x)
{
  this->extrapolate_.set (x);
}

inline
const XsdCalibratedHazardCurve::extrapolate_type& XsdCalibratedHazardCurve::
extrapolate_default_value ()
{
  return extrapolate_default_value_;
}


// XsdBootstrapHazardCurve
// 


// XsdLeastSquaresHazardCurve
// 

inline
const XsdLeastSquaresHazardCurve::solver_optional& XsdLeastSquaresHazardCurve::
solver () const
{
  return this->solver_;
}

inline
XsdLeastSquaresHazardCurve::solver_optional& XsdLeastSquaresHazardCurve::
solver ()
{
  return this->solver_;
}

inline
void XsdLeastSquaresHazardCurve::
solver (const solver_type& x)
{
  this->solver_.set (x);
}

inline
void XsdLeastSquaresHazardCurve::
solver (const solver_optional& x)
{
  this->solver_ = x;
}

inline
void XsdLeastSquaresHazardCurve::
solver (::std::auto_ptr< solver_type > x)
{
  this->solver_.set (x);
}

inline
const XsdLeastSquaresHazardCurve::penalty_optional& XsdLeastSquaresHazardCurve::
penalty () const
{
  return this->penalty_;
}

inline
XsdLeastSquaresHazardCurve::penalty_optional& XsdLeastSquaresHazardCurve::
penalty ()
{
  return this->penalty_;
}

inline
void XsdLeastSquaresHazardCurve::
penalty (const penalty_type& x)
{
  this->penalty_.set (x);
}

inline
void XsdLeastSquaresHazardCurve::
penalty (const penalty_optional& x)
{
  this->penalty_ = x;
}

inline
void XsdLeastSquaresHazardCurve::
penalty (::std::auto_ptr< penalty_type > x)
{
  this->penalty_.set (x);
}

inline
const XsdLeastSquaresHazardCurve::exponential_optional& XsdLeastSquaresHazardCurve::
exponential () const
{
  return this->exponential_;
}

inline
XsdLeastSquaresHazardCurve::exponential_optional& XsdLeastSquaresHazardCurve::
exponential ()
{
  return this->exponential_;
}

inline
void XsdLeastSquaresHazardCurve::
exponential (const exponential_type& x)
{
  this->exponential_.set (x);
}

inline
void XsdLeastSquaresHazardCurve::
exponential (const exponential_optional& x)
{
  this->exponential_ = x;
}

inline
void XsdLeastSquaresHazardCurve::
exponential (::std::auto_ptr< exponential_type > x)
{
  this->exponential_.set (x);
}

inline
const XsdLeastSquaresHazardCurve::spline_optional& XsdLeastSquaresHazardCurve::
spline () const
{
  return this->spline_;
}

inline
XsdLeastSquaresHazardCurve::spline_optional& XsdLeastSquaresHazardCurve::
spline ()
{
  return this->spline_;
}

inline
void XsdLeastSquaresHazardCurve::
spline (const spline_type& x)
{
  this->spline_.set (x);
}

inline
void XsdLeastSquaresHazardCurve::
spline (const spline_optional& x)
{
  this->spline_ = x;
}

inline
void XsdLeastSquaresHazardCurve::
spline (::std::auto_ptr< spline_type > x)
{
  this->spline_.set (x);
}


// XsdHazardTest
// 

inline
const XsdHazardTest::result_optional& XsdHazardTest::
result () const
{
  return this->result_;
}

inline
XsdHazardTest::result_optional& XsdHazardTest::
result ()
{
  return this->result_;
}

inline
void XsdHazardTest::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdHazardTest::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdHazardTest::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdHazardTest::hazardType_optional& XsdHazardTest::
hazardType () const
{
  return this->hazardType_;
}

inline
XsdHazardTest::hazardType_optional& XsdHazardTest::
hazardType ()
{
  return this->hazardType_;
}

inline
void XsdHazardTest::
hazardType (const hazardType_type& x)
{
  this->hazardType_.set (x);
}

inline
void XsdHazardTest::
hazardType (const hazardType_optional& x)
{
  this->hazardType_ = x;
}

inline
void XsdHazardTest::
hazardType (::std::auto_ptr< hazardType_type > x)
{
  this->hazardType_.set (x);
}

inline
const XsdHazardTest::hazardType_type& XsdHazardTest::
hazardType_default_value ()
{
  return hazardType_default_value_;
}

inline
const XsdHazardTest::begin_optional& XsdHazardTest::
begin () const
{
  return this->begin_;
}

inline
XsdHazardTest::begin_optional& XsdHazardTest::
begin ()
{
  return this->begin_;
}

inline
void XsdHazardTest::
begin (const begin_type& x)
{
  this->begin_.set (x);
}

inline
void XsdHazardTest::
begin (const begin_optional& x)
{
  this->begin_ = x;
}

inline
void XsdHazardTest::
begin (::std::auto_ptr< begin_type > x)
{
  this->begin_.set (x);
}

inline
const XsdHazardTest::end_type& XsdHazardTest::
end () const
{
  return this->end_.get ();
}

inline
XsdHazardTest::end_type& XsdHazardTest::
end ()
{
  return this->end_.get ();
}

inline
void XsdHazardTest::
end (const end_type& x)
{
  this->end_.set (x);
}

inline
void XsdHazardTest::
end (::std::auto_ptr< end_type > x)
{
  this->end_.set (x);
}

inline
const XsdHazardTest::tenor_optional& XsdHazardTest::
tenor () const
{
  return this->tenor_;
}

inline
XsdHazardTest::tenor_optional& XsdHazardTest::
tenor ()
{
  return this->tenor_;
}

inline
void XsdHazardTest::
tenor (const tenor_type& x)
{
  this->tenor_.set (x);
}

inline
void XsdHazardTest::
tenor (const tenor_optional& x)
{
  this->tenor_ = x;
}

inline
void XsdHazardTest::
tenor (::std::auto_ptr< tenor_type > x)
{
  this->tenor_.set (x);
}

inline
const XsdHazardTest::tenor_type& XsdHazardTest::
tenor_default_value ()
{
  return tenor_default_value_;
}

inline
const XsdHazardTest::hazard_type& XsdHazardTest::
hazard () const
{
  return this->hazard_.get ();
}

inline
XsdHazardTest::hazard_type& XsdHazardTest::
hazard ()
{
  return this->hazard_.get ();
}

inline
void XsdHazardTest::
hazard (const hazard_type& x)
{
  this->hazard_.set (x);
}

inline
void XsdHazardTest::
hazard (::std::auto_ptr< hazard_type > x)
{
  this->hazard_.set (x);
}

inline
const XsdHazardTest::frequency_optional& XsdHazardTest::
frequency () const
{
  return this->frequency_;
}

inline
XsdHazardTest::frequency_optional& XsdHazardTest::
frequency ()
{
  return this->frequency_;
}

inline
void XsdHazardTest::
frequency (const frequency_type& x)
{
  this->frequency_.set (x);
}

inline
void XsdHazardTest::
frequency (const frequency_optional& x)
{
  this->frequency_ = x;
}

inline
void XsdHazardTest::
frequency (::std::auto_ptr< frequency_type > x)
{
  this->frequency_.set (x);
}

inline
const XsdHazardTest::frequency_type& XsdHazardTest::
frequency_default_value ()
{
  return frequency_default_value_;
}

inline
const XsdHazardTest::dayCount_optional& XsdHazardTest::
dayCount () const
{
  return this->dayCount_;
}

inline
XsdHazardTest::dayCount_optional& XsdHazardTest::
dayCount ()
{
  return this->dayCount_;
}

inline
void XsdHazardTest::
dayCount (const dayCount_type& x)
{
  this->dayCount_.set (x);
}

inline
void XsdHazardTest::
dayCount (const dayCount_optional& x)
{
  this->dayCount_ = x;
}

inline
void XsdHazardTest::
dayCount (::std::auto_ptr< dayCount_type > x)
{
  this->dayCount_.set (x);
}


// XsdHazardInverse
// 

inline
const XsdHazardInverse::result_optional& XsdHazardInverse::
result () const
{
  return this->result_;
}

inline
XsdHazardInverse::result_optional& XsdHazardInverse::
result ()
{
  return this->result_;
}

inline
void XsdHazardInverse::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdHazardInverse::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdHazardInverse::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdHazardInverse::factors_type& XsdHazardInverse::
factors () const
{
  return this->factors_.get ();
}

inline
XsdHazardInverse::factors_type& XsdHazardInverse::
factors ()
{
  return this->factors_.get ();
}

inline
void XsdHazardInverse::
factors (const factors_type& x)
{
  this->factors_.set (x);
}

inline
void XsdHazardInverse::
factors (::std::auto_ptr< factors_type > x)
{
  this->factors_.set (x);
}

inline
const XsdHazardInverse::bounds_optional& XsdHazardInverse::
bounds () const
{
  return this->bounds_;
}

inline
XsdHazardInverse::bounds_optional& XsdHazardInverse::
bounds ()
{
  return this->bounds_;
}

inline
void XsdHazardInverse::
bounds (const bounds_type& x)
{
  this->bounds_.set (x);
}

inline
void XsdHazardInverse::
bounds (const bounds_optional& x)
{
  this->bounds_ = x;
}

inline
void XsdHazardInverse::
bounds (::std::auto_ptr< bounds_type > x)
{
  this->bounds_.set (x);
}

inline
const XsdHazardInverse::hazard_type& XsdHazardInverse::
hazard () const
{
  return this->hazard_.get ();
}

inline
XsdHazardInverse::hazard_type& XsdHazardInverse::
hazard ()
{
  return this->hazard_.get ();
}

inline
void XsdHazardInverse::
hazard (const hazard_type& x)
{
  this->hazard_.set (x);
}

inline
void XsdHazardInverse::
hazard (::std::auto_ptr< hazard_type > x)
{
  this->hazard_.set (x);
}


// XsdHazardArgs
// 

inline
const XsdHazardArgs::scalar_optional& XsdHazardArgs::
scalar () const
{
  return this->scalar_;
}

inline
XsdHazardArgs::scalar_optional& XsdHazardArgs::
scalar ()
{
  return this->scalar_;
}

inline
void XsdHazardArgs::
scalar (const scalar_type& x)
{
  this->scalar_.set (x);
}

inline
void XsdHazardArgs::
scalar (const scalar_optional& x)
{
  this->scalar_ = x;
}

inline
const XsdHazardArgs::curve_optional& XsdHazardArgs::
curve () const
{
  return this->curve_;
}

inline
XsdHazardArgs::curve_optional& XsdHazardArgs::
curve ()
{
  return this->curve_;
}

inline
void XsdHazardArgs::
curve (const curve_type& x)
{
  this->curve_.set (x);
}

inline
void XsdHazardArgs::
curve (const curve_optional& x)
{
  this->curve_ = x;
}

inline
void XsdHazardArgs::
curve (::std::auto_ptr< curve_type > x)
{
  this->curve_.set (x);
}

inline
const XsdHazardArgs::hazard_optional& XsdHazardArgs::
hazard () const
{
  return this->hazard_;
}

inline
XsdHazardArgs::hazard_optional& XsdHazardArgs::
hazard ()
{
  return this->hazard_;
}

inline
void XsdHazardArgs::
hazard (const hazard_type& x)
{
  this->hazard_.set (x);
}

inline
void XsdHazardArgs::
hazard (const hazard_optional& x)
{
  this->hazard_ = x;
}

inline
void XsdHazardArgs::
hazard (::std::auto_ptr< hazard_type > x)
{
  this->hazard_.set (x);
}


// XsdHazardBinary
// 

inline
const XsdHazardBinary::first_type& XsdHazardBinary::
first () const
{
  return this->first_.get ();
}

inline
XsdHazardBinary::first_type& XsdHazardBinary::
first ()
{
  return this->first_.get ();
}

inline
void XsdHazardBinary::
first (const first_type& x)
{
  this->first_.set (x);
}

inline
void XsdHazardBinary::
first (::std::auto_ptr< first_type > x)
{
  this->first_.set (x);
}

inline
const XsdHazardBinary::second_type& XsdHazardBinary::
second () const
{
  return this->second_.get ();
}

inline
XsdHazardBinary::second_type& XsdHazardBinary::
second ()
{
  return this->second_.get ();
}

inline
void XsdHazardBinary::
second (const second_type& x)
{
  this->second_.set (x);
}

inline
void XsdHazardBinary::
second (::std::auto_ptr< second_type > x)
{
  this->second_.set (x);
}


// XsdHazardResult
// 

inline
const XsdHazardResult::hazard_type& XsdHazardResult::
hazard () const
{
  return this->hazard_.get ();
}

inline
XsdHazardResult::hazard_type& XsdHazardResult::
hazard ()
{
  return this->hazard_.get ();
}

inline
void XsdHazardResult::
hazard (const hazard_type& x)
{
  this->hazard_.set (x);
}

inline
void XsdHazardResult::
hazard (::std::auto_ptr< hazard_type > x)
{
  this->hazard_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MODEL_HAZARD_IXX
