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

#ifndef CXX___SCHEMA_XSD_ASSET_FORWARD_IXX
#define CXX___SCHEMA_XSD_ASSET_FORWARD_IXX

// Begin prologue.
//
//
// End prologue.

#include "asset.ixx"

#include "index.ixx"

// XsdForwardContract
// 

inline
const XsdForwardContract::sign_optional& XsdForwardContract::
sign () const
{
  return this->sign_;
}

inline
XsdForwardContract::sign_optional& XsdForwardContract::
sign ()
{
  return this->sign_;
}

inline
void XsdForwardContract::
sign (const sign_type& x)
{
  this->sign_.set (x);
}

inline
void XsdForwardContract::
sign (const sign_optional& x)
{
  this->sign_ = x;
}

inline
void XsdForwardContract::
sign (::std::auto_ptr< sign_type > x)
{
  this->sign_.set (x);
}

inline
const XsdForwardContract::sign_type& XsdForwardContract::
sign_default_value ()
{
  return sign_default_value_;
}


// XsdFuturesContract
// 

inline
const XsdFuturesContract::sign_optional& XsdFuturesContract::
sign () const
{
  return this->sign_;
}

inline
XsdFuturesContract::sign_optional& XsdFuturesContract::
sign ()
{
  return this->sign_;
}

inline
void XsdFuturesContract::
sign (const sign_type& x)
{
  this->sign_.set (x);
}

inline
void XsdFuturesContract::
sign (const sign_optional& x)
{
  this->sign_ = x;
}

inline
void XsdFuturesContract::
sign (::std::auto_ptr< sign_type > x)
{
  this->sign_.set (x);
}

inline
const XsdFuturesContract::sign_type& XsdFuturesContract::
sign_default_value ()
{
  return sign_default_value_;
}


// XsdForwardRateAgreement
// 

inline
const XsdForwardRateAgreement::index_optional& XsdForwardRateAgreement::
index () const
{
  return this->index_;
}

inline
XsdForwardRateAgreement::index_optional& XsdForwardRateAgreement::
index ()
{
  return this->index_;
}

inline
void XsdForwardRateAgreement::
index (const index_type& x)
{
  this->index_.set (x);
}

inline
void XsdForwardRateAgreement::
index (const index_optional& x)
{
  this->index_ = x;
}

inline
void XsdForwardRateAgreement::
index (::std::auto_ptr< index_type > x)
{
  this->index_.set (x);
}

inline
const XsdForwardRateAgreement::strike_optional& XsdForwardRateAgreement::
strike () const
{
  return this->strike_;
}

inline
XsdForwardRateAgreement::strike_optional& XsdForwardRateAgreement::
strike ()
{
  return this->strike_;
}

inline
void XsdForwardRateAgreement::
strike (const strike_type& x)
{
  this->strike_.set (x);
}

inline
void XsdForwardRateAgreement::
strike (const strike_optional& x)
{
  this->strike_ = x;
}

inline
const XsdForwardRateAgreement::effective_optional& XsdForwardRateAgreement::
effective () const
{
  return this->effective_;
}

inline
XsdForwardRateAgreement::effective_optional& XsdForwardRateAgreement::
effective ()
{
  return this->effective_;
}

inline
void XsdForwardRateAgreement::
effective (const effective_type& x)
{
  this->effective_.set (x);
}

inline
void XsdForwardRateAgreement::
effective (const effective_optional& x)
{
  this->effective_ = x;
}

inline
void XsdForwardRateAgreement::
effective (::std::auto_ptr< effective_type > x)
{
  this->effective_.set (x);
}


// XsdEurodollarFuturesContract
// 

inline
const XsdEurodollarFuturesContract::index_type& XsdEurodollarFuturesContract::
index () const
{
  return this->index_.get ();
}

inline
XsdEurodollarFuturesContract::index_type& XsdEurodollarFuturesContract::
index ()
{
  return this->index_.get ();
}

inline
void XsdEurodollarFuturesContract::
index (const index_type& x)
{
  this->index_.set (x);
}

inline
void XsdEurodollarFuturesContract::
index (::std::auto_ptr< index_type > x)
{
  this->index_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_ASSET_FORWARD_IXX
