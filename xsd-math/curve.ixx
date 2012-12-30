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

#ifndef CXX___SCHEMA_XSD_MATH_CURVE_IXX
#define CXX___SCHEMA_XSD_MATH_CURVE_IXX

// Begin prologue.
//
//
// End prologue.

#include "interpolation.ixx"

#include "axis.ixx"

// XsdCurve
// 


// XsdBasisSpline
// 

inline
const XsdBasisSpline::basis_type& XsdBasisSpline::
basis () const
{
  return this->basis_.get ();
}

inline
XsdBasisSpline::basis_type& XsdBasisSpline::
basis ()
{
  return this->basis_.get ();
}

inline
void XsdBasisSpline::
basis (const basis_type& x)
{
  this->basis_.set (x);
}

inline
void XsdBasisSpline::
basis (::std::auto_ptr< basis_type > x)
{
  this->basis_.set (x);
}

inline
const XsdBasisSpline::coefficients_type& XsdBasisSpline::
coefficients () const
{
  return this->coefficients_.get ();
}

inline
XsdBasisSpline::coefficients_type& XsdBasisSpline::
coefficients ()
{
  return this->coefficients_.get ();
}

inline
void XsdBasisSpline::
coefficients (const coefficients_type& x)
{
  this->coefficients_.set (x);
}

inline
void XsdBasisSpline::
coefficients (::std::auto_ptr< coefficients_type > x)
{
  this->coefficients_.set (x);
}


// XsdCompositeCurve
// 

inline
const XsdCompositeCurve::negate_optional& XsdCompositeCurve::
negate () const
{
  return this->negate_;
}

inline
XsdCompositeCurve::negate_optional& XsdCompositeCurve::
negate ()
{
  return this->negate_;
}

inline
void XsdCompositeCurve::
negate (const negate_type& x)
{
  this->negate_.set (x);
}

inline
void XsdCompositeCurve::
negate (const negate_optional& x)
{
  this->negate_ = x;
}

inline
void XsdCompositeCurve::
negate (::std::auto_ptr< negate_type > x)
{
  this->negate_.set (x);
}

inline
const XsdCompositeCurve::add_optional& XsdCompositeCurve::
add () const
{
  return this->add_;
}

inline
XsdCompositeCurve::add_optional& XsdCompositeCurve::
add ()
{
  return this->add_;
}

inline
void XsdCompositeCurve::
add (const add_type& x)
{
  this->add_.set (x);
}

inline
void XsdCompositeCurve::
add (const add_optional& x)
{
  this->add_ = x;
}

inline
void XsdCompositeCurve::
add (::std::auto_ptr< add_type > x)
{
  this->add_.set (x);
}

inline
const XsdCompositeCurve::subtract_optional& XsdCompositeCurve::
subtract () const
{
  return this->subtract_;
}

inline
XsdCompositeCurve::subtract_optional& XsdCompositeCurve::
subtract ()
{
  return this->subtract_;
}

inline
void XsdCompositeCurve::
subtract (const subtract_type& x)
{
  this->subtract_.set (x);
}

inline
void XsdCompositeCurve::
subtract (const subtract_optional& x)
{
  this->subtract_ = x;
}

inline
void XsdCompositeCurve::
subtract (::std::auto_ptr< subtract_type > x)
{
  this->subtract_.set (x);
}

inline
const XsdCompositeCurve::multiply_optional& XsdCompositeCurve::
multiply () const
{
  return this->multiply_;
}

inline
XsdCompositeCurve::multiply_optional& XsdCompositeCurve::
multiply ()
{
  return this->multiply_;
}

inline
void XsdCompositeCurve::
multiply (const multiply_type& x)
{
  this->multiply_.set (x);
}

inline
void XsdCompositeCurve::
multiply (const multiply_optional& x)
{
  this->multiply_ = x;
}

inline
void XsdCompositeCurve::
multiply (::std::auto_ptr< multiply_type > x)
{
  this->multiply_.set (x);
}

inline
const XsdCompositeCurve::divide_optional& XsdCompositeCurve::
divide () const
{
  return this->divide_;
}

inline
XsdCompositeCurve::divide_optional& XsdCompositeCurve::
divide ()
{
  return this->divide_;
}

inline
void XsdCompositeCurve::
divide (const divide_type& x)
{
  this->divide_.set (x);
}

inline
void XsdCompositeCurve::
divide (const divide_optional& x)
{
  this->divide_ = x;
}

inline
void XsdCompositeCurve::
divide (::std::auto_ptr< divide_type > x)
{
  this->divide_.set (x);
}

inline
const XsdCompositeCurve::min_optional& XsdCompositeCurve::
min () const
{
  return this->min_;
}

inline
XsdCompositeCurve::min_optional& XsdCompositeCurve::
min ()
{
  return this->min_;
}

inline
void XsdCompositeCurve::
min (const min_type& x)
{
  this->min_.set (x);
}

inline
void XsdCompositeCurve::
min (const min_optional& x)
{
  this->min_ = x;
}

inline
void XsdCompositeCurve::
min (::std::auto_ptr< min_type > x)
{
  this->min_.set (x);
}

inline
const XsdCompositeCurve::max_optional& XsdCompositeCurve::
max () const
{
  return this->max_;
}

inline
XsdCompositeCurve::max_optional& XsdCompositeCurve::
max ()
{
  return this->max_;
}

inline
void XsdCompositeCurve::
max (const max_type& x)
{
  this->max_.set (x);
}

inline
void XsdCompositeCurve::
max (const max_optional& x)
{
  this->max_ = x;
}

inline
void XsdCompositeCurve::
max (::std::auto_ptr< max_type > x)
{
  this->max_.set (x);
}


// XsdFlatCurve
// 

inline
const XsdFlatCurve::value_optional& XsdFlatCurve::
value () const
{
  return this->value_;
}

inline
XsdFlatCurve::value_optional& XsdFlatCurve::
value ()
{
  return this->value_;
}

inline
void XsdFlatCurve::
value (const value_type& x)
{
  this->value_.set (x);
}

inline
void XsdFlatCurve::
value (const value_optional& x)
{
  this->value_ = x;
}

inline
XsdFlatCurve::value_type XsdFlatCurve::
value_default_value ()
{
  return value_type (.0);
}


// XsdInterpolatedCurve
// 

inline
const XsdInterpolatedCurve::xValues_type& XsdInterpolatedCurve::
xValues () const
{
  return this->xValues_.get ();
}

inline
XsdInterpolatedCurve::xValues_type& XsdInterpolatedCurve::
xValues ()
{
  return this->xValues_.get ();
}

inline
void XsdInterpolatedCurve::
xValues (const xValues_type& x)
{
  this->xValues_.set (x);
}

inline
void XsdInterpolatedCurve::
xValues (::std::auto_ptr< xValues_type > x)
{
  this->xValues_.set (x);
}

inline
const XsdInterpolatedCurve::yValues_type& XsdInterpolatedCurve::
yValues () const
{
  return this->yValues_.get ();
}

inline
XsdInterpolatedCurve::yValues_type& XsdInterpolatedCurve::
yValues ()
{
  return this->yValues_.get ();
}

inline
void XsdInterpolatedCurve::
yValues (const yValues_type& x)
{
  this->yValues_.set (x);
}

inline
void XsdInterpolatedCurve::
yValues (::std::auto_ptr< yValues_type > x)
{
  this->yValues_.set (x);
}

inline
const XsdInterpolatedCurve::interpolate_optional& XsdInterpolatedCurve::
interpolate () const
{
  return this->interpolate_;
}

inline
XsdInterpolatedCurve::interpolate_optional& XsdInterpolatedCurve::
interpolate ()
{
  return this->interpolate_;
}

inline
void XsdInterpolatedCurve::
interpolate (const interpolate_type& x)
{
  this->interpolate_.set (x);
}

inline
void XsdInterpolatedCurve::
interpolate (const interpolate_optional& x)
{
  this->interpolate_ = x;
}

inline
void XsdInterpolatedCurve::
interpolate (::std::auto_ptr< interpolate_type > x)
{
  this->interpolate_.set (x);
}

inline
const XsdInterpolatedCurve::extrapolate_optional& XsdInterpolatedCurve::
extrapolate () const
{
  return this->extrapolate_;
}

inline
XsdInterpolatedCurve::extrapolate_optional& XsdInterpolatedCurve::
extrapolate ()
{
  return this->extrapolate_;
}

inline
void XsdInterpolatedCurve::
extrapolate (const extrapolate_type& x)
{
  this->extrapolate_.set (x);
}

inline
void XsdInterpolatedCurve::
extrapolate (const extrapolate_optional& x)
{
  this->extrapolate_ = x;
}

inline
void XsdInterpolatedCurve::
extrapolate (::std::auto_ptr< extrapolate_type > x)
{
  this->extrapolate_.set (x);
}

inline
const XsdInterpolatedCurve::extrapolate_type& XsdInterpolatedCurve::
extrapolate_default_value ()
{
  return extrapolate_default_value_;
}


// XsdLeastSquaresCurve
// 

inline
const XsdLeastSquaresCurve::breakpoints_type& XsdLeastSquaresCurve::
breakpoints () const
{
  return this->breakpoints_.get ();
}

inline
XsdLeastSquaresCurve::breakpoints_type& XsdLeastSquaresCurve::
breakpoints ()
{
  return this->breakpoints_.get ();
}

inline
void XsdLeastSquaresCurve::
breakpoints (const breakpoints_type& x)
{
  this->breakpoints_.set (x);
}

inline
void XsdLeastSquaresCurve::
breakpoints (::std::auto_ptr< breakpoints_type > x)
{
  this->breakpoints_.set (x);
}

inline
const XsdLeastSquaresCurve::weights_optional& XsdLeastSquaresCurve::
weights () const
{
  return this->weights_;
}

inline
XsdLeastSquaresCurve::weights_optional& XsdLeastSquaresCurve::
weights ()
{
  return this->weights_;
}

inline
void XsdLeastSquaresCurve::
weights (const weights_type& x)
{
  this->weights_.set (x);
}

inline
void XsdLeastSquaresCurve::
weights (const weights_optional& x)
{
  this->weights_ = x;
}

inline
void XsdLeastSquaresCurve::
weights (::std::auto_ptr< weights_type > x)
{
  this->weights_.set (x);
}

inline
const XsdLeastSquaresCurve::penalty_optional& XsdLeastSquaresCurve::
penalty () const
{
  return this->penalty_;
}

inline
XsdLeastSquaresCurve::penalty_optional& XsdLeastSquaresCurve::
penalty ()
{
  return this->penalty_;
}

inline
void XsdLeastSquaresCurve::
penalty (const penalty_type& x)
{
  this->penalty_.set (x);
}

inline
void XsdLeastSquaresCurve::
penalty (const penalty_optional& x)
{
  this->penalty_ = x;
}

inline
void XsdLeastSquaresCurve::
penalty (::std::auto_ptr< penalty_type > x)
{
  this->penalty_.set (x);
}


// XsdCurveArgs
// 

inline
const XsdCurveArgs::curve_optional& XsdCurveArgs::
curve () const
{
  return this->curve_;
}

inline
XsdCurveArgs::curve_optional& XsdCurveArgs::
curve ()
{
  return this->curve_;
}

inline
void XsdCurveArgs::
curve (const curve_type& x)
{
  this->curve_.set (x);
}

inline
void XsdCurveArgs::
curve (const curve_optional& x)
{
  this->curve_ = x;
}

inline
void XsdCurveArgs::
curve (::std::auto_ptr< curve_type > x)
{
  this->curve_.set (x);
}

inline
const XsdCurveArgs::scalar_optional& XsdCurveArgs::
scalar () const
{
  return this->scalar_;
}

inline
XsdCurveArgs::scalar_optional& XsdCurveArgs::
scalar ()
{
  return this->scalar_;
}

inline
void XsdCurveArgs::
scalar (const scalar_type& x)
{
  this->scalar_.set (x);
}

inline
void XsdCurveArgs::
scalar (const scalar_optional& x)
{
  this->scalar_ = x;
}


// XsdCurveBinary
// 

inline
const XsdCurveBinary::first_type& XsdCurveBinary::
first () const
{
  return this->first_.get ();
}

inline
XsdCurveBinary::first_type& XsdCurveBinary::
first ()
{
  return this->first_.get ();
}

inline
void XsdCurveBinary::
first (const first_type& x)
{
  this->first_.set (x);
}

inline
void XsdCurveBinary::
first (::std::auto_ptr< first_type > x)
{
  this->first_.set (x);
}

inline
const XsdCurveBinary::second_type& XsdCurveBinary::
second () const
{
  return this->second_.get ();
}

inline
XsdCurveBinary::second_type& XsdCurveBinary::
second ()
{
  return this->second_.get ();
}

inline
void XsdCurveBinary::
second (const second_type& x)
{
  this->second_.set (x);
}

inline
void XsdCurveBinary::
second (::std::auto_ptr< second_type > x)
{
  this->second_.set (x);
}


// XsdSplineBasis
// 

inline
const XsdSplineBasis::order_optional& XsdSplineBasis::
order () const
{
  return this->order_;
}

inline
XsdSplineBasis::order_optional& XsdSplineBasis::
order ()
{
  return this->order_;
}

inline
void XsdSplineBasis::
order (const order_type& x)
{
  this->order_.set (x);
}

inline
void XsdSplineBasis::
order (const order_optional& x)
{
  this->order_ = x;
}

inline
XsdSplineBasis::order_type XsdSplineBasis::
order_default_value ()
{
  return order_type (4);
}

inline
const XsdSplineBasis::breakpoints_optional& XsdSplineBasis::
breakpoints () const
{
  return this->breakpoints_;
}

inline
XsdSplineBasis::breakpoints_optional& XsdSplineBasis::
breakpoints ()
{
  return this->breakpoints_;
}

inline
void XsdSplineBasis::
breakpoints (const breakpoints_type& x)
{
  this->breakpoints_.set (x);
}

inline
void XsdSplineBasis::
breakpoints (const breakpoints_optional& x)
{
  this->breakpoints_ = x;
}

inline
void XsdSplineBasis::
breakpoints (::std::auto_ptr< breakpoints_type > x)
{
  this->breakpoints_.set (x);
}


// XsdCurveIntegral
// 

inline
const XsdCurveIntegral::result_optional& XsdCurveIntegral::
result () const
{
  return this->result_;
}

inline
XsdCurveIntegral::result_optional& XsdCurveIntegral::
result ()
{
  return this->result_;
}

inline
void XsdCurveIntegral::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdCurveIntegral::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdCurveIntegral::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdCurveIntegral::bounds_type& XsdCurveIntegral::
bounds () const
{
  return this->bounds_.get ();
}

inline
XsdCurveIntegral::bounds_type& XsdCurveIntegral::
bounds ()
{
  return this->bounds_.get ();
}

inline
void XsdCurveIntegral::
bounds (const bounds_type& x)
{
  this->bounds_.set (x);
}

inline
void XsdCurveIntegral::
bounds (::std::auto_ptr< bounds_type > x)
{
  this->bounds_.set (x);
}

inline
const XsdCurveIntegral::curve_type& XsdCurveIntegral::
curve () const
{
  return this->curve_.get ();
}

inline
XsdCurveIntegral::curve_type& XsdCurveIntegral::
curve ()
{
  return this->curve_.get ();
}

inline
void XsdCurveIntegral::
curve (const curve_type& x)
{
  this->curve_.set (x);
}

inline
void XsdCurveIntegral::
curve (::std::auto_ptr< curve_type > x)
{
  this->curve_.set (x);
}


// XsdCurveEvaluate
// 

inline
const XsdCurveEvaluate::result_optional& XsdCurveEvaluate::
result () const
{
  return this->result_;
}

inline
XsdCurveEvaluate::result_optional& XsdCurveEvaluate::
result ()
{
  return this->result_;
}

inline
void XsdCurveEvaluate::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdCurveEvaluate::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdCurveEvaluate::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdCurveEvaluate::derivative_optional& XsdCurveEvaluate::
derivative () const
{
  return this->derivative_;
}

inline
XsdCurveEvaluate::derivative_optional& XsdCurveEvaluate::
derivative ()
{
  return this->derivative_;
}

inline
void XsdCurveEvaluate::
derivative (const derivative_type& x)
{
  this->derivative_.set (x);
}

inline
void XsdCurveEvaluate::
derivative (const derivative_optional& x)
{
  this->derivative_ = x;
}

inline
XsdCurveEvaluate::derivative_type XsdCurveEvaluate::
derivative_default_value ()
{
  return derivative_type (0ULL);
}

inline
const XsdCurveEvaluate::xValues_type& XsdCurveEvaluate::
xValues () const
{
  return this->xValues_.get ();
}

inline
XsdCurveEvaluate::xValues_type& XsdCurveEvaluate::
xValues ()
{
  return this->xValues_.get ();
}

inline
void XsdCurveEvaluate::
xValues (const xValues_type& x)
{
  this->xValues_.set (x);
}

inline
void XsdCurveEvaluate::
xValues (::std::auto_ptr< xValues_type > x)
{
  this->xValues_.set (x);
}

inline
const XsdCurveEvaluate::curve_type& XsdCurveEvaluate::
curve () const
{
  return this->curve_.get ();
}

inline
XsdCurveEvaluate::curve_type& XsdCurveEvaluate::
curve ()
{
  return this->curve_.get ();
}

inline
void XsdCurveEvaluate::
curve (const curve_type& x)
{
  this->curve_.set (x);
}

inline
void XsdCurveEvaluate::
curve (::std::auto_ptr< curve_type > x)
{
  this->curve_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MATH_CURVE_IXX
