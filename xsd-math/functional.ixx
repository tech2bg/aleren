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

#ifndef CXX___SCHEMA_XSD_MATH_FUNCTIONAL_IXX
#define CXX___SCHEMA_XSD_MATH_FUNCTIONAL_IXX

// Begin prologue.
//
//
// End prologue.

#include "types.ixx"

#include "axis.ixx"

// XsdFunction
// 

inline
const XsdFunction::add_optional& XsdFunction::
add () const
{
  return this->add_;
}

inline
XsdFunction::add_optional& XsdFunction::
add ()
{
  return this->add_;
}

inline
void XsdFunction::
add (const add_type& x)
{
  this->add_.set (x);
}

inline
void XsdFunction::
add (const add_optional& x)
{
  this->add_ = x;
}

inline
void XsdFunction::
add (::std::auto_ptr< add_type > x)
{
  this->add_.set (x);
}

inline
const XsdFunction::exp_optional& XsdFunction::
exp () const
{
  return this->exp_;
}

inline
XsdFunction::exp_optional& XsdFunction::
exp ()
{
  return this->exp_;
}

inline
void XsdFunction::
exp (const exp_type& x)
{
  this->exp_.set (x);
}

inline
void XsdFunction::
exp (const exp_optional& x)
{
  this->exp_ = x;
}

inline
void XsdFunction::
exp (::std::auto_ptr< exp_type > x)
{
  this->exp_.set (x);
}

inline
const XsdFunction::cos_optional& XsdFunction::
cos () const
{
  return this->cos_;
}

inline
XsdFunction::cos_optional& XsdFunction::
cos ()
{
  return this->cos_;
}

inline
void XsdFunction::
cos (const cos_type& x)
{
  this->cos_.set (x);
}

inline
void XsdFunction::
cos (const cos_optional& x)
{
  this->cos_ = x;
}

inline
void XsdFunction::
cos (::std::auto_ptr< cos_type > x)
{
  this->cos_.set (x);
}

inline
const XsdFunction::divide_optional& XsdFunction::
divide () const
{
  return this->divide_;
}

inline
XsdFunction::divide_optional& XsdFunction::
divide ()
{
  return this->divide_;
}

inline
void XsdFunction::
divide (const divide_type& x)
{
  this->divide_.set (x);
}

inline
void XsdFunction::
divide (const divide_optional& x)
{
  this->divide_ = x;
}

inline
void XsdFunction::
divide (::std::auto_ptr< divide_type > x)
{
  this->divide_.set (x);
}

inline
const XsdFunction::log_optional& XsdFunction::
log () const
{
  return this->log_;
}

inline
XsdFunction::log_optional& XsdFunction::
log ()
{
  return this->log_;
}

inline
void XsdFunction::
log (const log_type& x)
{
  this->log_.set (x);
}

inline
void XsdFunction::
log (const log_optional& x)
{
  this->log_ = x;
}

inline
void XsdFunction::
log (::std::auto_ptr< log_type > x)
{
  this->log_.set (x);
}

inline
const XsdFunction::negate_optional& XsdFunction::
negate () const
{
  return this->negate_;
}

inline
XsdFunction::negate_optional& XsdFunction::
negate ()
{
  return this->negate_;
}

inline
void XsdFunction::
negate (const negate_type& x)
{
  this->negate_.set (x);
}

inline
void XsdFunction::
negate (const negate_optional& x)
{
  this->negate_ = x;
}

inline
void XsdFunction::
negate (::std::auto_ptr< negate_type > x)
{
  this->negate_.set (x);
}

inline
const XsdFunction::max_optional& XsdFunction::
max () const
{
  return this->max_;
}

inline
XsdFunction::max_optional& XsdFunction::
max ()
{
  return this->max_;
}

inline
void XsdFunction::
max (const max_type& x)
{
  this->max_.set (x);
}

inline
void XsdFunction::
max (const max_optional& x)
{
  this->max_ = x;
}

inline
void XsdFunction::
max (::std::auto_ptr< max_type > x)
{
  this->max_.set (x);
}

inline
const XsdFunction::multiply_optional& XsdFunction::
multiply () const
{
  return this->multiply_;
}

inline
XsdFunction::multiply_optional& XsdFunction::
multiply ()
{
  return this->multiply_;
}

inline
void XsdFunction::
multiply (const multiply_type& x)
{
  this->multiply_.set (x);
}

inline
void XsdFunction::
multiply (const multiply_optional& x)
{
  this->multiply_ = x;
}

inline
void XsdFunction::
multiply (::std::auto_ptr< multiply_type > x)
{
  this->multiply_.set (x);
}

inline
const XsdFunction::min_optional& XsdFunction::
min () const
{
  return this->min_;
}

inline
XsdFunction::min_optional& XsdFunction::
min ()
{
  return this->min_;
}

inline
void XsdFunction::
min (const min_type& x)
{
  this->min_.set (x);
}

inline
void XsdFunction::
min (const min_optional& x)
{
  this->min_ = x;
}

inline
void XsdFunction::
min (::std::auto_ptr< min_type > x)
{
  this->min_.set (x);
}

inline
const XsdFunction::pow_optional& XsdFunction::
pow () const
{
  return this->pow_;
}

inline
XsdFunction::pow_optional& XsdFunction::
pow ()
{
  return this->pow_;
}

inline
void XsdFunction::
pow (const pow_type& x)
{
  this->pow_.set (x);
}

inline
void XsdFunction::
pow (const pow_optional& x)
{
  this->pow_ = x;
}

inline
void XsdFunction::
pow (::std::auto_ptr< pow_type > x)
{
  this->pow_.set (x);
}

inline
const XsdFunction::scalar_optional& XsdFunction::
scalar () const
{
  return this->scalar_;
}

inline
XsdFunction::scalar_optional& XsdFunction::
scalar ()
{
  return this->scalar_;
}

inline
void XsdFunction::
scalar (const scalar_type& x)
{
  this->scalar_.set (x);
}

inline
void XsdFunction::
scalar (const scalar_optional& x)
{
  this->scalar_ = x;
}

inline
const XsdFunction::sin_optional& XsdFunction::
sin () const
{
  return this->sin_;
}

inline
XsdFunction::sin_optional& XsdFunction::
sin ()
{
  return this->sin_;
}

inline
void XsdFunction::
sin (const sin_type& x)
{
  this->sin_.set (x);
}

inline
void XsdFunction::
sin (const sin_optional& x)
{
  this->sin_ = x;
}

inline
void XsdFunction::
sin (::std::auto_ptr< sin_type > x)
{
  this->sin_.set (x);
}

inline
const XsdFunction::sqrt_optional& XsdFunction::
sqrt () const
{
  return this->sqrt_;
}

inline
XsdFunction::sqrt_optional& XsdFunction::
sqrt ()
{
  return this->sqrt_;
}

inline
void XsdFunction::
sqrt (const sqrt_type& x)
{
  this->sqrt_.set (x);
}

inline
void XsdFunction::
sqrt (const sqrt_optional& x)
{
  this->sqrt_ = x;
}

inline
void XsdFunction::
sqrt (::std::auto_ptr< sqrt_type > x)
{
  this->sqrt_.set (x);
}

inline
const XsdFunction::subtract_optional& XsdFunction::
subtract () const
{
  return this->subtract_;
}

inline
XsdFunction::subtract_optional& XsdFunction::
subtract ()
{
  return this->subtract_;
}

inline
void XsdFunction::
subtract (const subtract_type& x)
{
  this->subtract_.set (x);
}

inline
void XsdFunction::
subtract (const subtract_optional& x)
{
  this->subtract_ = x;
}

inline
void XsdFunction::
subtract (::std::auto_ptr< subtract_type > x)
{
  this->subtract_.set (x);
}

inline
const XsdFunction::square_optional& XsdFunction::
square () const
{
  return this->square_;
}

inline
XsdFunction::square_optional& XsdFunction::
square ()
{
  return this->square_;
}

inline
void XsdFunction::
square (const square_type& x)
{
  this->square_.set (x);
}

inline
void XsdFunction::
square (const square_optional& x)
{
  this->square_ = x;
}

inline
void XsdFunction::
square (::std::auto_ptr< square_type > x)
{
  this->square_.set (x);
}

inline
const XsdFunction::tan_optional& XsdFunction::
tan () const
{
  return this->tan_;
}

inline
XsdFunction::tan_optional& XsdFunction::
tan ()
{
  return this->tan_;
}

inline
void XsdFunction::
tan (const tan_type& x)
{
  this->tan_.set (x);
}

inline
void XsdFunction::
tan (const tan_optional& x)
{
  this->tan_ = x;
}

inline
void XsdFunction::
tan (::std::auto_ptr< tan_type > x)
{
  this->tan_.set (x);
}

inline
const XsdFunction::coord_type& XsdFunction::
coord () const
{
  return this->coord_.get ();
}

inline
XsdFunction::coord_type& XsdFunction::
coord ()
{
  return this->coord_.get ();
}

inline
void XsdFunction::
coord (const coord_type& x)
{
  this->coord_.set (x);
}

inline
XsdFunction::coord_type XsdFunction::
coord_default_value ()
{
  return coord_type (0);
}


// XsdDerivative
// 

inline
const XsdDerivative::method_optional& XsdDerivative::
method () const
{
  return this->method_;
}

inline
XsdDerivative::method_optional& XsdDerivative::
method ()
{
  return this->method_;
}

inline
void XsdDerivative::
method (const method_type& x)
{
  this->method_.set (x);
}

inline
void XsdDerivative::
method (const method_optional& x)
{
  this->method_ = x;
}

inline
void XsdDerivative::
method (::std::auto_ptr< method_type > x)
{
  this->method_.set (x);
}

inline
const XsdDerivative::method_type& XsdDerivative::
method_default_value ()
{
  return method_default_value_;
}

inline
const XsdDerivative::increment_optional& XsdDerivative::
increment () const
{
  return this->increment_;
}

inline
XsdDerivative::increment_optional& XsdDerivative::
increment ()
{
  return this->increment_;
}

inline
void XsdDerivative::
increment (const increment_type& x)
{
  this->increment_.set (x);
}

inline
void XsdDerivative::
increment (const increment_optional& x)
{
  this->increment_ = x;
}

inline
void XsdDerivative::
increment (::std::auto_ptr< increment_type > x)
{
  this->increment_.set (x);
}


// XsdFunctionResult
// 

inline
const XsdFunctionResult::row_sequence& XsdFunctionResult::
row () const
{
  return this->row_;
}

inline
XsdFunctionResult::row_sequence& XsdFunctionResult::
row ()
{
  return this->row_;
}

inline
void XsdFunctionResult::
row (const row_sequence& s)
{
  this->row_ = s;
}


// XsdFunctionTest
// 

inline
const XsdFunctionTest::result_optional& XsdFunctionTest::
result () const
{
  return this->result_;
}

inline
XsdFunctionTest::result_optional& XsdFunctionTest::
result ()
{
  return this->result_;
}

inline
void XsdFunctionTest::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdFunctionTest::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdFunctionTest::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdFunctionTest::grid_type& XsdFunctionTest::
grid () const
{
  return this->grid_.get ();
}

inline
XsdFunctionTest::grid_type& XsdFunctionTest::
grid ()
{
  return this->grid_.get ();
}

inline
void XsdFunctionTest::
grid (const grid_type& x)
{
  this->grid_.set (x);
}

inline
void XsdFunctionTest::
grid (::std::auto_ptr< grid_type > x)
{
  this->grid_.set (x);
}

inline
const XsdFunctionTest::function_type& XsdFunctionTest::
function () const
{
  return this->function_.get ();
}

inline
XsdFunctionTest::function_type& XsdFunctionTest::
function ()
{
  return this->function_.get ();
}

inline
void XsdFunctionTest::
function (const function_type& x)
{
  this->function_.set (x);
}

inline
void XsdFunctionTest::
function (::std::auto_ptr< function_type > x)
{
  this->function_.set (x);
}


// XsdDerivativeTest
// 

inline
const XsdDerivativeTest::result_optional& XsdDerivativeTest::
result () const
{
  return this->result_;
}

inline
XsdDerivativeTest::result_optional& XsdDerivativeTest::
result ()
{
  return this->result_;
}

inline
void XsdDerivativeTest::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdDerivativeTest::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdDerivativeTest::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdDerivativeTest::function_type& XsdDerivativeTest::
function () const
{
  return this->function_.get ();
}

inline
XsdDerivativeTest::function_type& XsdDerivativeTest::
function ()
{
  return this->function_.get ();
}

inline
void XsdDerivativeTest::
function (const function_type& x)
{
  this->function_.set (x);
}

inline
void XsdDerivativeTest::
function (::std::auto_ptr< function_type > x)
{
  this->function_.set (x);
}

inline
const XsdDerivativeTest::grid_type& XsdDerivativeTest::
grid () const
{
  return this->grid_.get ();
}

inline
XsdDerivativeTest::grid_type& XsdDerivativeTest::
grid ()
{
  return this->grid_.get ();
}

inline
void XsdDerivativeTest::
grid (const grid_type& x)
{
  this->grid_.set (x);
}

inline
void XsdDerivativeTest::
grid (::std::auto_ptr< grid_type > x)
{
  this->grid_.set (x);
}

inline
const XsdDerivativeTest::derivative_type& XsdDerivativeTest::
derivative () const
{
  return this->derivative_.get ();
}

inline
XsdDerivativeTest::derivative_type& XsdDerivativeTest::
derivative ()
{
  return this->derivative_.get ();
}

inline
void XsdDerivativeTest::
derivative (const derivative_type& x)
{
  this->derivative_.set (x);
}

inline
void XsdDerivativeTest::
derivative (::std::auto_ptr< derivative_type > x)
{
  this->derivative_.set (x);
}


// XsdFunctionTest1D
// 

inline
const XsdFunctionTest1D::result_optional& XsdFunctionTest1D::
result () const
{
  return this->result_;
}

inline
XsdFunctionTest1D::result_optional& XsdFunctionTest1D::
result ()
{
  return this->result_;
}

inline
void XsdFunctionTest1D::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdFunctionTest1D::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdFunctionTest1D::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdFunctionTest1D::axis_type& XsdFunctionTest1D::
axis () const
{
  return this->axis_.get ();
}

inline
XsdFunctionTest1D::axis_type& XsdFunctionTest1D::
axis ()
{
  return this->axis_.get ();
}

inline
void XsdFunctionTest1D::
axis (const axis_type& x)
{
  this->axis_.set (x);
}

inline
void XsdFunctionTest1D::
axis (::std::auto_ptr< axis_type > x)
{
  this->axis_.set (x);
}

inline
const XsdFunctionTest1D::function_type& XsdFunctionTest1D::
function () const
{
  return this->function_.get ();
}

inline
XsdFunctionTest1D::function_type& XsdFunctionTest1D::
function ()
{
  return this->function_.get ();
}

inline
void XsdFunctionTest1D::
function (const function_type& x)
{
  this->function_.set (x);
}

inline
void XsdFunctionTest1D::
function (::std::auto_ptr< function_type > x)
{
  this->function_.set (x);
}


// XsdDerivativeTest1D
// 

inline
const XsdDerivativeTest1D::result_optional& XsdDerivativeTest1D::
result () const
{
  return this->result_;
}

inline
XsdDerivativeTest1D::result_optional& XsdDerivativeTest1D::
result ()
{
  return this->result_;
}

inline
void XsdDerivativeTest1D::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdDerivativeTest1D::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdDerivativeTest1D::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdDerivativeTest1D::function_type& XsdDerivativeTest1D::
function () const
{
  return this->function_.get ();
}

inline
XsdDerivativeTest1D::function_type& XsdDerivativeTest1D::
function ()
{
  return this->function_.get ();
}

inline
void XsdDerivativeTest1D::
function (const function_type& x)
{
  this->function_.set (x);
}

inline
void XsdDerivativeTest1D::
function (::std::auto_ptr< function_type > x)
{
  this->function_.set (x);
}

inline
const XsdDerivativeTest1D::axis_type& XsdDerivativeTest1D::
axis () const
{
  return this->axis_.get ();
}

inline
XsdDerivativeTest1D::axis_type& XsdDerivativeTest1D::
axis ()
{
  return this->axis_.get ();
}

inline
void XsdDerivativeTest1D::
axis (const axis_type& x)
{
  this->axis_.set (x);
}

inline
void XsdDerivativeTest1D::
axis (::std::auto_ptr< axis_type > x)
{
  this->axis_.set (x);
}

inline
const XsdDerivativeTest1D::derivative_type& XsdDerivativeTest1D::
derivative () const
{
  return this->derivative_.get ();
}

inline
XsdDerivativeTest1D::derivative_type& XsdDerivativeTest1D::
derivative ()
{
  return this->derivative_.get ();
}

inline
void XsdDerivativeTest1D::
derivative (const derivative_type& x)
{
  this->derivative_.set (x);
}

inline
void XsdDerivativeTest1D::
derivative (::std::auto_ptr< derivative_type > x)
{
  this->derivative_.set (x);
}


// XsdBinaryFunction
// 

inline
const XsdBinaryFunction::first_type& XsdBinaryFunction::
first () const
{
  return this->first_.get ();
}

inline
XsdBinaryFunction::first_type& XsdBinaryFunction::
first ()
{
  return this->first_.get ();
}

inline
void XsdBinaryFunction::
first (const first_type& x)
{
  this->first_.set (x);
}

inline
void XsdBinaryFunction::
first (::std::auto_ptr< first_type > x)
{
  this->first_.set (x);
}

inline
const XsdBinaryFunction::second_type& XsdBinaryFunction::
second () const
{
  return this->second_.get ();
}

inline
XsdBinaryFunction::second_type& XsdBinaryFunction::
second ()
{
  return this->second_.get ();
}

inline
void XsdBinaryFunction::
second (const second_type& x)
{
  this->second_.set (x);
}

inline
void XsdBinaryFunction::
second (::std::auto_ptr< second_type > x)
{
  this->second_.set (x);
}


// XsdFunctionRow
// 

inline
const XsdFunctionRow::value_type& XsdFunctionRow::
value () const
{
  return this->value_.get ();
}

inline
XsdFunctionRow::value_type& XsdFunctionRow::
value ()
{
  return this->value_.get ();
}

inline
void XsdFunctionRow::
value (const value_type& x)
{
  this->value_.set (x);
}

inline
const XsdFunctionRow::gradient_optional& XsdFunctionRow::
gradient () const
{
  return this->gradient_;
}

inline
XsdFunctionRow::gradient_optional& XsdFunctionRow::
gradient ()
{
  return this->gradient_;
}

inline
void XsdFunctionRow::
gradient (const gradient_type& x)
{
  this->gradient_.set (x);
}

inline
void XsdFunctionRow::
gradient (const gradient_optional& x)
{
  this->gradient_ = x;
}

inline
void XsdFunctionRow::
gradient (::std::auto_ptr< gradient_type > x)
{
  this->gradient_.set (x);
}

inline
const XsdFunctionRow::hessian_optional& XsdFunctionRow::
hessian () const
{
  return this->hessian_;
}

inline
XsdFunctionRow::hessian_optional& XsdFunctionRow::
hessian ()
{
  return this->hessian_;
}

inline
void XsdFunctionRow::
hessian (const hessian_type& x)
{
  this->hessian_.set (x);
}

inline
void XsdFunctionRow::
hessian (const hessian_optional& x)
{
  this->hessian_ = x;
}

inline
void XsdFunctionRow::
hessian (::std::auto_ptr< hessian_type > x)
{
  this->hessian_.set (x);
}

inline
const XsdFunctionRow::point_type& XsdFunctionRow::
point () const
{
  return this->point_.get ();
}

inline
XsdFunctionRow::point_type& XsdFunctionRow::
point ()
{
  return this->point_.get ();
}

inline
void XsdFunctionRow::
point (const point_type& x)
{
  this->point_.set (x);
}

inline
void XsdFunctionRow::
point (::std::auto_ptr< point_type > x)
{
  this->point_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MATH_FUNCTIONAL_IXX
