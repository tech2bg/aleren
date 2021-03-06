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

#ifndef CXX___SCHEMA_XSD_ASSET_TYPES_IXX
#define CXX___SCHEMA_XSD_ASSET_TYPES_IXX

// Begin prologue.
//
//
// End prologue.

#include "enums.ixx"

#include "../xsd-math/all.ixx"

// XsdAggregate
// 

inline
const XsdAggregate::range_optional& XsdAggregate::
range () const
{
  return this->range_;
}

inline
XsdAggregate::range_optional& XsdAggregate::
range ()
{
  return this->range_;
}

inline
void XsdAggregate::
range (const range_type& x)
{
  this->range_.set (x);
}

inline
void XsdAggregate::
range (const range_optional& x)
{
  this->range_ = x;
}

inline
void XsdAggregate::
range (::std::auto_ptr< range_type > x)
{
  this->range_.set (x);
}

inline
const XsdAggregate::method_type& XsdAggregate::
method () const
{
  return this->method_.get ();
}

inline
XsdAggregate::method_type& XsdAggregate::
method ()
{
  return this->method_.get ();
}

inline
void XsdAggregate::
method (const method_type& x)
{
  this->method_.set (x);
}

inline
void XsdAggregate::
method (::std::auto_ptr< method_type > x)
{
  this->method_.set (x);
}

inline
const XsdAggregate::method_type& XsdAggregate::
method_default_value ()
{
  return method_default_value_;
}

inline
const XsdAggregate::average_type& XsdAggregate::
average () const
{
  return this->average_.get ();
}

inline
XsdAggregate::average_type& XsdAggregate::
average ()
{
  return this->average_.get ();
}

inline
void XsdAggregate::
average (const average_type& x)
{
  this->average_.set (x);
}

inline
void XsdAggregate::
average (::std::auto_ptr< average_type > x)
{
  this->average_.set (x);
}

inline
const XsdAggregate::average_type& XsdAggregate::
average_default_value ()
{
  return average_default_value_;
}

inline
const XsdAggregate::weighted_type& XsdAggregate::
weighted () const
{
  return this->weighted_.get ();
}

inline
XsdAggregate::weighted_type& XsdAggregate::
weighted ()
{
  return this->weighted_.get ();
}

inline
void XsdAggregate::
weighted (const weighted_type& x)
{
  this->weighted_.set (x);
}

inline
XsdAggregate::weighted_type XsdAggregate::
weighted_default_value ()
{
  return weighted_type (false);
}


// XsdMaturity
// 

inline
const XsdMaturity::date_optional& XsdMaturity::
date () const
{
  return this->date_;
}

inline
XsdMaturity::date_optional& XsdMaturity::
date ()
{
  return this->date_;
}

inline
void XsdMaturity::
date (const date_type& x)
{
  this->date_.set (x);
}

inline
void XsdMaturity::
date (const date_optional& x)
{
  this->date_ = x;
}

inline
void XsdMaturity::
date (::std::auto_ptr< date_type > x)
{
  this->date_.set (x);
}

inline
const XsdMaturity::tenor_optional& XsdMaturity::
tenor () const
{
  return this->tenor_;
}

inline
XsdMaturity::tenor_optional& XsdMaturity::
tenor ()
{
  return this->tenor_;
}

inline
void XsdMaturity::
tenor (const tenor_type& x)
{
  this->tenor_.set (x);
}

inline
void XsdMaturity::
tenor (const tenor_optional& x)
{
  this->tenor_ = x;
}

inline
void XsdMaturity::
tenor (::std::auto_ptr< tenor_type > x)
{
  this->tenor_.set (x);
}

inline
const XsdMaturity::IMM_optional& XsdMaturity::
IMM () const
{
  return this->IMM_;
}

inline
XsdMaturity::IMM_optional& XsdMaturity::
IMM ()
{
  return this->IMM_;
}

inline
void XsdMaturity::
IMM (const IMM_type& x)
{
  this->IMM_.set (x);
}

inline
void XsdMaturity::
IMM (const IMM_optional& x)
{
  this->IMM_ = x;
}

inline
void XsdMaturity::
IMM (::std::auto_ptr< IMM_type > x)
{
  this->IMM_.set (x);
}


// XsdOddCouponTypes
// 

inline
const XsdOddCouponTypes::first_optional& XsdOddCouponTypes::
first () const
{
  return this->first_;
}

inline
XsdOddCouponTypes::first_optional& XsdOddCouponTypes::
first ()
{
  return this->first_;
}

inline
void XsdOddCouponTypes::
first (const first_type& x)
{
  this->first_.set (x);
}

inline
void XsdOddCouponTypes::
first (const first_optional& x)
{
  this->first_ = x;
}

inline
void XsdOddCouponTypes::
first (::std::auto_ptr< first_type > x)
{
  this->first_.set (x);
}

inline
const XsdOddCouponTypes::first_type& XsdOddCouponTypes::
first_default_value ()
{
  return first_default_value_;
}

inline
const XsdOddCouponTypes::last_optional& XsdOddCouponTypes::
last () const
{
  return this->last_;
}

inline
XsdOddCouponTypes::last_optional& XsdOddCouponTypes::
last ()
{
  return this->last_;
}

inline
void XsdOddCouponTypes::
last (const last_type& x)
{
  this->last_.set (x);
}

inline
void XsdOddCouponTypes::
last (const last_optional& x)
{
  this->last_ = x;
}

inline
void XsdOddCouponTypes::
last (::std::auto_ptr< last_type > x)
{
  this->last_.set (x);
}

inline
const XsdOddCouponTypes::last_type& XsdOddCouponTypes::
last_default_value ()
{
  return last_default_value_;
}


// XsdPeriodic
// 

inline
const XsdPeriodic::frequency_optional& XsdPeriodic::
frequency () const
{
  return this->frequency_;
}

inline
XsdPeriodic::frequency_optional& XsdPeriodic::
frequency ()
{
  return this->frequency_;
}

inline
void XsdPeriodic::
frequency (const frequency_type& x)
{
  this->frequency_.set (x);
}

inline
void XsdPeriodic::
frequency (const frequency_optional& x)
{
  this->frequency_ = x;
}

inline
void XsdPeriodic::
frequency (::std::auto_ptr< frequency_type > x)
{
  this->frequency_.set (x);
}

inline
const XsdPeriodic::frequency_type& XsdPeriodic::
frequency_default_value ()
{
  return frequency_default_value_;
}

inline
const XsdPeriodic::startMonth_optional& XsdPeriodic::
startMonth () const
{
  return this->startMonth_;
}

inline
XsdPeriodic::startMonth_optional& XsdPeriodic::
startMonth ()
{
  return this->startMonth_;
}

inline
void XsdPeriodic::
startMonth (const startMonth_type& x)
{
  this->startMonth_.set (x);
}

inline
void XsdPeriodic::
startMonth (const startMonth_optional& x)
{
  this->startMonth_ = x;
}

inline
void XsdPeriodic::
startMonth (::std::auto_ptr< startMonth_type > x)
{
  this->startMonth_.set (x);
}

inline
const XsdPeriodic::dayOfMonth_optional& XsdPeriodic::
dayOfMonth () const
{
  return this->dayOfMonth_;
}

inline
XsdPeriodic::dayOfMonth_optional& XsdPeriodic::
dayOfMonth ()
{
  return this->dayOfMonth_;
}

inline
void XsdPeriodic::
dayOfMonth (const dayOfMonth_type& x)
{
  this->dayOfMonth_.set (x);
}

inline
void XsdPeriodic::
dayOfMonth (const dayOfMonth_optional& x)
{
  this->dayOfMonth_ = x;
}

inline
void XsdPeriodic::
dayOfMonth (::std::auto_ptr< dayOfMonth_type > x)
{
  this->dayOfMonth_.set (x);
}

inline
const XsdPeriodic::weekOfMonth_optional& XsdPeriodic::
weekOfMonth () const
{
  return this->weekOfMonth_;
}

inline
XsdPeriodic::weekOfMonth_optional& XsdPeriodic::
weekOfMonth ()
{
  return this->weekOfMonth_;
}

inline
void XsdPeriodic::
weekOfMonth (const weekOfMonth_type& x)
{
  this->weekOfMonth_.set (x);
}

inline
void XsdPeriodic::
weekOfMonth (const weekOfMonth_optional& x)
{
  this->weekOfMonth_ = x;
}

inline
void XsdPeriodic::
weekOfMonth (::std::auto_ptr< weekOfMonth_type > x)
{
  this->weekOfMonth_.set (x);
}

inline
const XsdPeriodic::timeOfDay_optional& XsdPeriodic::
timeOfDay () const
{
  return this->timeOfDay_;
}

inline
XsdPeriodic::timeOfDay_optional& XsdPeriodic::
timeOfDay ()
{
  return this->timeOfDay_;
}

inline
void XsdPeriodic::
timeOfDay (const timeOfDay_type& x)
{
  this->timeOfDay_.set (x);
}

inline
void XsdPeriodic::
timeOfDay (const timeOfDay_optional& x)
{
  this->timeOfDay_ = x;
}

inline
void XsdPeriodic::
timeOfDay (::std::auto_ptr< timeOfDay_type > x)
{
  this->timeOfDay_.set (x);
}

inline
const XsdPeriodic::roll_optional& XsdPeriodic::
roll () const
{
  return this->roll_;
}

inline
XsdPeriodic::roll_optional& XsdPeriodic::
roll ()
{
  return this->roll_;
}

inline
void XsdPeriodic::
roll (const roll_type& x)
{
  this->roll_.set (x);
}

inline
void XsdPeriodic::
roll (const roll_optional& x)
{
  this->roll_ = x;
}

inline
void XsdPeriodic::
roll (::std::auto_ptr< roll_type > x)
{
  this->roll_.set (x);
}


// XsdRoll
// 

inline
const XsdRoll::modified_type& XsdRoll::
modified () const
{
  return this->modified_.get ();
}

inline
XsdRoll::modified_type& XsdRoll::
modified ()
{
  return this->modified_.get ();
}

inline
void XsdRoll::
modified (const modified_type& x)
{
  this->modified_.set (x);
}

inline
XsdRoll::modified_type XsdRoll::
modified_default_value ()
{
  return modified_type (false);
}

inline
const XsdRoll::nearest_type& XsdRoll::
nearest () const
{
  return this->nearest_.get ();
}

inline
XsdRoll::nearest_type& XsdRoll::
nearest ()
{
  return this->nearest_.get ();
}

inline
void XsdRoll::
nearest (const nearest_type& x)
{
  this->nearest_.set (x);
}

inline
XsdRoll::nearest_type XsdRoll::
nearest_default_value ()
{
  return nearest_type (false);
}


// XsdRange
// 

inline
const XsdRange::direction_type& XsdRange::
direction () const
{
  return this->direction_.get ();
}

inline
XsdRange::direction_type& XsdRange::
direction ()
{
  return this->direction_.get ();
}

inline
void XsdRange::
direction (const direction_type& x)
{
  this->direction_.set (x);
}

inline
void XsdRange::
direction (::std::auto_ptr< direction_type > x)
{
  this->direction_.set (x);
}

inline
const XsdRange::direction_type& XsdRange::
direction_default_value ()
{
  return direction_default_value_;
}


// tenor
// 


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_ASSET_TYPES_IXX
