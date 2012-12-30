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

#ifndef CXX___SCHEMA_XSD_MODEL_RECOVERY_IXX
#define CXX___SCHEMA_XSD_MODEL_RECOVERY_IXX

// Begin prologue.
//
//
// End prologue.

#include "types.ixx"

// XsdRecovery
// 

inline
const XsdRecovery::adjust_sequence& XsdRecovery::
adjust () const
{
  return this->adjust_;
}

inline
XsdRecovery::adjust_sequence& XsdRecovery::
adjust ()
{
  return this->adjust_;
}

inline
void XsdRecovery::
adjust (const adjust_sequence& s)
{
  this->adjust_ = s;
}

inline
const XsdRecovery::method_optional& XsdRecovery::
method () const
{
  return this->method_;
}

inline
XsdRecovery::method_optional& XsdRecovery::
method ()
{
  return this->method_;
}

inline
void XsdRecovery::
method (const method_type& x)
{
  this->method_.set (x);
}

inline
void XsdRecovery::
method (const method_optional& x)
{
  this->method_ = x;
}

inline
void XsdRecovery::
method (::std::auto_ptr< method_type > x)
{
  this->method_.set (x);
}

inline
const XsdRecovery::method_type& XsdRecovery::
method_default_value ()
{
  return method_default_value_;
}

inline
const XsdRecovery::lag_optional& XsdRecovery::
lag () const
{
  return this->lag_;
}

inline
XsdRecovery::lag_optional& XsdRecovery::
lag ()
{
  return this->lag_;
}

inline
void XsdRecovery::
lag (const lag_type& x)
{
  this->lag_.set (x);
}

inline
void XsdRecovery::
lag (const lag_optional& x)
{
  this->lag_ = x;
}

inline
void XsdRecovery::
lag (::std::auto_ptr< lag_type > x)
{
  this->lag_.set (x);
}

inline
const XsdRecovery::lag_type& XsdRecovery::
lag_default_value ()
{
  return lag_default_value_;
}


// XsdFixedRecovery
// 

inline
const XsdFixedRecovery::recoveryRate_optional& XsdFixedRecovery::
recoveryRate () const
{
  return this->recoveryRate_;
}

inline
XsdFixedRecovery::recoveryRate_optional& XsdFixedRecovery::
recoveryRate ()
{
  return this->recoveryRate_;
}

inline
void XsdFixedRecovery::
recoveryRate (const recoveryRate_type& x)
{
  this->recoveryRate_.set (x);
}

inline
void XsdFixedRecovery::
recoveryRate (const recoveryRate_optional& x)
{
  this->recoveryRate_ = x;
}

inline
void XsdFixedRecovery::
recoveryRate (::std::auto_ptr< recoveryRate_type > x)
{
  this->recoveryRate_.set (x);
}


// XsdRandomRecovery
// 

inline
const XsdRandomRecovery::distribution_type& XsdRandomRecovery::
distribution () const
{
  return this->distribution_.get ();
}

inline
XsdRandomRecovery::distribution_type& XsdRandomRecovery::
distribution ()
{
  return this->distribution_.get ();
}

inline
void XsdRandomRecovery::
distribution (const distribution_type& x)
{
  this->distribution_.set (x);
}

inline
void XsdRandomRecovery::
distribution (::std::auto_ptr< distribution_type > x)
{
  this->distribution_.set (x);
}

inline
const XsdRandomRecovery::correlation_optional& XsdRandomRecovery::
correlation () const
{
  return this->correlation_;
}

inline
XsdRandomRecovery::correlation_optional& XsdRandomRecovery::
correlation ()
{
  return this->correlation_;
}

inline
void XsdRandomRecovery::
correlation (const correlation_type& x)
{
  this->correlation_.set (x);
}

inline
void XsdRandomRecovery::
correlation (const correlation_optional& x)
{
  this->correlation_ = x;
}

inline
void XsdRandomRecovery::
correlation (::std::auto_ptr< correlation_type > x)
{
  this->correlation_.set (x);
}


// XsdRecoveryAdjust
// 

inline
const XsdRecoveryAdjust::seniority_type& XsdRecoveryAdjust::
seniority () const
{
  return this->seniority_.get ();
}

inline
XsdRecoveryAdjust::seniority_type& XsdRecoveryAdjust::
seniority ()
{
  return this->seniority_.get ();
}

inline
void XsdRecoveryAdjust::
seniority (const seniority_type& x)
{
  this->seniority_.set (x);
}

inline
void XsdRecoveryAdjust::
seniority (::std::auto_ptr< seniority_type > x)
{
  this->seniority_.set (x);
}


// XsdRecoveryModel
// 

inline
XsdRecoveryModel::
XsdRecoveryModel ()
: ::xml_schema::string ()
{
}

inline
XsdRecoveryModel::
XsdRecoveryModel (value v)
: ::xml_schema::string (_xsd_XsdRecoveryModel_literals_[v])
{
}

inline
XsdRecoveryModel::
XsdRecoveryModel (const char* v)
: ::xml_schema::string (v)
{
}

inline
XsdRecoveryModel::
XsdRecoveryModel (const ::std::string& v)
: ::xml_schema::string (v)
{
}

inline
XsdRecoveryModel::
XsdRecoveryModel (const ::xml_schema::string& v)
: ::xml_schema::string (v)
{
}

inline
XsdRecoveryModel::
XsdRecoveryModel (const XsdRecoveryModel& v,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
: ::xml_schema::string (v, f, c)
{
}

inline
XsdRecoveryModel& XsdRecoveryModel::
operator= (value v)
{
  static_cast< ::xml_schema::string& > (*this) = 
  ::xml_schema::string (_xsd_XsdRecoveryModel_literals_[v]);

  return *this;
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MODEL_RECOVERY_IXX
