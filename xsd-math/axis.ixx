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

#ifndef CXX___SCHEMA_XSD_MATH_AXIS_IXX
#define CXX___SCHEMA_XSD_MATH_AXIS_IXX

// Begin prologue.
//
//
// End prologue.

#include "types.ixx"

// XsdAxis
// 

inline
const XsdAxis::endpoints_optional& XsdAxis::
endpoints () const
{
  return this->endpoints_;
}

inline
XsdAxis::endpoints_optional& XsdAxis::
endpoints ()
{
  return this->endpoints_;
}

inline
void XsdAxis::
endpoints (const endpoints_type& x)
{
  this->endpoints_.set (x);
}

inline
void XsdAxis::
endpoints (const endpoints_optional& x)
{
  this->endpoints_ = x;
}

inline
void XsdAxis::
endpoints (::std::auto_ptr< endpoints_type > x)
{
  this->endpoints_.set (x);
}

inline
const XsdAxis::endpoints_type& XsdAxis::
endpoints_default_value ()
{
  return endpoints_default_value_;
}


// XsdGrid
// 

inline
const XsdGrid::axis_sequence& XsdGrid::
axis () const
{
  return this->axis_;
}

inline
XsdGrid::axis_sequence& XsdGrid::
axis ()
{
  return this->axis_;
}

inline
void XsdGrid::
axis (const axis_sequence& s)
{
  this->axis_ = s;
}


// XsdUniformAxis
// 

inline
const XsdUniformAxis::bound_type& XsdUniformAxis::
bound () const
{
  return this->bound_.get ();
}

inline
XsdUniformAxis::bound_type& XsdUniformAxis::
bound ()
{
  return this->bound_.get ();
}

inline
void XsdUniformAxis::
bound (const bound_type& x)
{
  this->bound_.set (x);
}

inline
void XsdUniformAxis::
bound (::std::auto_ptr< bound_type > x)
{
  this->bound_.set (x);
}

inline
const XsdUniformAxis::intervals_optional& XsdUniformAxis::
intervals () const
{
  return this->intervals_;
}

inline
XsdUniformAxis::intervals_optional& XsdUniformAxis::
intervals ()
{
  return this->intervals_;
}

inline
void XsdUniformAxis::
intervals (const intervals_type& x)
{
  this->intervals_.set (x);
}

inline
void XsdUniformAxis::
intervals (const intervals_optional& x)
{
  this->intervals_ = x;
}

inline
XsdUniformAxis::intervals_type XsdUniformAxis::
intervals_default_value ()
{
  return intervals_type (100ULL);
}


// XsdExpandingAxis
// 

inline
const XsdExpandingAxis::bound_type& XsdExpandingAxis::
bound () const
{
  return this->bound_.get ();
}

inline
XsdExpandingAxis::bound_type& XsdExpandingAxis::
bound ()
{
  return this->bound_.get ();
}

inline
void XsdExpandingAxis::
bound (const bound_type& x)
{
  this->bound_.set (x);
}

inline
void XsdExpandingAxis::
bound (::std::auto_ptr< bound_type > x)
{
  this->bound_.set (x);
}

inline
const XsdExpandingAxis::growth_optional& XsdExpandingAxis::
growth () const
{
  return this->growth_;
}

inline
XsdExpandingAxis::growth_optional& XsdExpandingAxis::
growth ()
{
  return this->growth_;
}

inline
void XsdExpandingAxis::
growth (const growth_type& x)
{
  this->growth_.set (x);
}

inline
void XsdExpandingAxis::
growth (const growth_optional& x)
{
  this->growth_ = x;
}

inline
void XsdExpandingAxis::
growth (::std::auto_ptr< growth_type > x)
{
  this->growth_.set (x);
}

inline
const XsdExpandingAxis::increment_type& XsdExpandingAxis::
increment () const
{
  return this->increment_.get ();
}

inline
XsdExpandingAxis::increment_type& XsdExpandingAxis::
increment ()
{
  return this->increment_.get ();
}

inline
void XsdExpandingAxis::
increment (const increment_type& x)
{
  this->increment_.set (x);
}

inline
void XsdExpandingAxis::
increment (::std::auto_ptr< increment_type > x)
{
  this->increment_.set (x);
}


// XsdExplicitAxis
// 

inline
const XsdExplicitAxis::points_type& XsdExplicitAxis::
points () const
{
  return this->points_.get ();
}

inline
XsdExplicitAxis::points_type& XsdExplicitAxis::
points ()
{
  return this->points_.get ();
}

inline
void XsdExplicitAxis::
points (const points_type& x)
{
  this->points_.set (x);
}

inline
void XsdExplicitAxis::
points (::std::auto_ptr< points_type > x)
{
  this->points_.set (x);
}


// XsdTwoSidedAxis
// 

inline
const XsdTwoSidedAxis::bound_type& XsdTwoSidedAxis::
bound () const
{
  return this->bound_.get ();
}

inline
XsdTwoSidedAxis::bound_type& XsdTwoSidedAxis::
bound ()
{
  return this->bound_.get ();
}

inline
void XsdTwoSidedAxis::
bound (const bound_type& x)
{
  this->bound_.set (x);
}

inline
void XsdTwoSidedAxis::
bound (::std::auto_ptr< bound_type > x)
{
  this->bound_.set (x);
}

inline
const XsdTwoSidedAxis::central_optional& XsdTwoSidedAxis::
central () const
{
  return this->central_;
}

inline
XsdTwoSidedAxis::central_optional& XsdTwoSidedAxis::
central ()
{
  return this->central_;
}

inline
void XsdTwoSidedAxis::
central (const central_type& x)
{
  this->central_.set (x);
}

inline
void XsdTwoSidedAxis::
central (const central_optional& x)
{
  this->central_ = x;
}

inline
void XsdTwoSidedAxis::
central (::std::auto_ptr< central_type > x)
{
  this->central_.set (x);
}

inline
const XsdTwoSidedAxis::increment_type& XsdTwoSidedAxis::
increment () const
{
  return this->increment_.get ();
}

inline
XsdTwoSidedAxis::increment_type& XsdTwoSidedAxis::
increment ()
{
  return this->increment_.get ();
}

inline
void XsdTwoSidedAxis::
increment (const increment_type& x)
{
  this->increment_.set (x);
}

inline
void XsdTwoSidedAxis::
increment (::std::auto_ptr< increment_type > x)
{
  this->increment_.set (x);
}

inline
const XsdTwoSidedAxis::growth_optional& XsdTwoSidedAxis::
growth () const
{
  return this->growth_;
}

inline
XsdTwoSidedAxis::growth_optional& XsdTwoSidedAxis::
growth ()
{
  return this->growth_;
}

inline
void XsdTwoSidedAxis::
growth (const growth_type& x)
{
  this->growth_.set (x);
}

inline
void XsdTwoSidedAxis::
growth (const growth_optional& x)
{
  this->growth_ = x;
}

inline
void XsdTwoSidedAxis::
growth (::std::auto_ptr< growth_type > x)
{
  this->growth_.set (x);
}


// XsdAxisTest
// 

inline
const XsdAxisTest::result_optional& XsdAxisTest::
result () const
{
  return this->result_;
}

inline
XsdAxisTest::result_optional& XsdAxisTest::
result ()
{
  return this->result_;
}

inline
void XsdAxisTest::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdAxisTest::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdAxisTest::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdAxisTest::axis_type& XsdAxisTest::
axis () const
{
  return this->axis_.get ();
}

inline
XsdAxisTest::axis_type& XsdAxisTest::
axis ()
{
  return this->axis_.get ();
}

inline
void XsdAxisTest::
axis (const axis_type& x)
{
  this->axis_.set (x);
}

inline
void XsdAxisTest::
axis (::std::auto_ptr< axis_type > x)
{
  this->axis_.set (x);
}


// XsdAxisBounds
// 

inline
const XsdAxisBounds::lower_type& XsdAxisBounds::
lower () const
{
  return this->lower_.get ();
}

inline
XsdAxisBounds::lower_type& XsdAxisBounds::
lower ()
{
  return this->lower_.get ();
}

inline
void XsdAxisBounds::
lower (const lower_type& x)
{
  this->lower_.set (x);
}

inline
const XsdAxisBounds::upper_type& XsdAxisBounds::
upper () const
{
  return this->upper_.get ();
}

inline
XsdAxisBounds::upper_type& XsdAxisBounds::
upper ()
{
  return this->upper_.get ();
}

inline
void XsdAxisBounds::
upper (const upper_type& x)
{
  this->upper_.set (x);
}


// XsdAxisIncrement
// 

inline
const XsdAxisIncrement::min_type& XsdAxisIncrement::
min () const
{
  return this->min_.get ();
}

inline
XsdAxisIncrement::min_type& XsdAxisIncrement::
min ()
{
  return this->min_.get ();
}

inline
void XsdAxisIncrement::
min (const min_type& x)
{
  this->min_.set (x);
}

inline
void XsdAxisIncrement::
min (::std::auto_ptr< min_type > x)
{
  this->min_.set (x);
}

inline
const XsdAxisIncrement::max_optional& XsdAxisIncrement::
max () const
{
  return this->max_;
}

inline
XsdAxisIncrement::max_optional& XsdAxisIncrement::
max ()
{
  return this->max_;
}

inline
void XsdAxisIncrement::
max (const max_type& x)
{
  this->max_.set (x);
}

inline
void XsdAxisIncrement::
max (const max_optional& x)
{
  this->max_ = x;
}

inline
void XsdAxisIncrement::
max (::std::auto_ptr< max_type > x)
{
  this->max_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MATH_AXIS_IXX