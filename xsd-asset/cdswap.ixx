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

#ifndef CXX___SCHEMA_XSD_ASSET_CDSWAP_IXX
#define CXX___SCHEMA_XSD_ASSET_CDSWAP_IXX

// Begin prologue.
//
//
// End prologue.

#include "asset.ixx"

#include "portfolio.ixx"

// XsdCDSwap
// 


// XsdSingleNameCDSwap
// 


// XsdVanillaCDSwap
// 

inline
const XsdVanillaCDSwap::quoteUpfrontFee_optional& XsdVanillaCDSwap::
quoteUpfrontFee () const
{
  return this->quoteUpfrontFee_;
}

inline
XsdVanillaCDSwap::quoteUpfrontFee_optional& XsdVanillaCDSwap::
quoteUpfrontFee ()
{
  return this->quoteUpfrontFee_;
}

inline
void XsdVanillaCDSwap::
quoteUpfrontFee (const quoteUpfrontFee_type& x)
{
  this->quoteUpfrontFee_.set (x);
}

inline
void XsdVanillaCDSwap::
quoteUpfrontFee (const quoteUpfrontFee_optional& x)
{
  this->quoteUpfrontFee_ = x;
}

inline
XsdVanillaCDSwap::quoteUpfrontFee_type XsdVanillaCDSwap::
quoteUpfrontFee_default_value ()
{
  return quoteUpfrontFee_type (false);
}

inline
const XsdVanillaCDSwap::protectionType_optional& XsdVanillaCDSwap::
protectionType () const
{
  return this->protectionType_;
}

inline
XsdVanillaCDSwap::protectionType_optional& XsdVanillaCDSwap::
protectionType ()
{
  return this->protectionType_;
}

inline
void XsdVanillaCDSwap::
protectionType (const protectionType_type& x)
{
  this->protectionType_.set (x);
}

inline
void XsdVanillaCDSwap::
protectionType (const protectionType_optional& x)
{
  this->protectionType_ = x;
}

inline
void XsdVanillaCDSwap::
protectionType (::std::auto_ptr< protectionType_type > x)
{
  this->protectionType_.set (x);
}

inline
const XsdVanillaCDSwap::protectionType_type& XsdVanillaCDSwap::
protectionType_default_value ()
{
  return protectionType_default_value_;
}

inline
const XsdVanillaCDSwap::accrualAtDefault_optional& XsdVanillaCDSwap::
accrualAtDefault () const
{
  return this->accrualAtDefault_;
}

inline
XsdVanillaCDSwap::accrualAtDefault_optional& XsdVanillaCDSwap::
accrualAtDefault ()
{
  return this->accrualAtDefault_;
}

inline
void XsdVanillaCDSwap::
accrualAtDefault (const accrualAtDefault_type& x)
{
  this->accrualAtDefault_.set (x);
}

inline
void XsdVanillaCDSwap::
accrualAtDefault (const accrualAtDefault_optional& x)
{
  this->accrualAtDefault_ = x;
}

inline
void XsdVanillaCDSwap::
accrualAtDefault (::std::auto_ptr< accrualAtDefault_type > x)
{
  this->accrualAtDefault_.set (x);
}

inline
const XsdVanillaCDSwap::accrualAtDefault_type& XsdVanillaCDSwap::
accrualAtDefault_default_value ()
{
  return accrualAtDefault_default_value_;
}

inline
const XsdVanillaCDSwap::protectionLag_optional& XsdVanillaCDSwap::
protectionLag () const
{
  return this->protectionLag_;
}

inline
XsdVanillaCDSwap::protectionLag_optional& XsdVanillaCDSwap::
protectionLag ()
{
  return this->protectionLag_;
}

inline
void XsdVanillaCDSwap::
protectionLag (const protectionLag_type& x)
{
  this->protectionLag_.set (x);
}

inline
void XsdVanillaCDSwap::
protectionLag (const protectionLag_optional& x)
{
  this->protectionLag_ = x;
}

inline
void XsdVanillaCDSwap::
protectionLag (::std::auto_ptr< protectionLag_type > x)
{
  this->protectionLag_.set (x);
}

inline
const XsdVanillaCDSwap::effectiveLag_optional& XsdVanillaCDSwap::
effectiveLag () const
{
  return this->effectiveLag_;
}

inline
XsdVanillaCDSwap::effectiveLag_optional& XsdVanillaCDSwap::
effectiveLag ()
{
  return this->effectiveLag_;
}

inline
void XsdVanillaCDSwap::
effectiveLag (const effectiveLag_type& x)
{
  this->effectiveLag_.set (x);
}

inline
void XsdVanillaCDSwap::
effectiveLag (const effectiveLag_optional& x)
{
  this->effectiveLag_ = x;
}

inline
void XsdVanillaCDSwap::
effectiveLag (::std::auto_ptr< effectiveLag_type > x)
{
  this->effectiveLag_.set (x);
}

inline
const XsdVanillaCDSwap::upfrontLag_optional& XsdVanillaCDSwap::
upfrontLag () const
{
  return this->upfrontLag_;
}

inline
XsdVanillaCDSwap::upfrontLag_optional& XsdVanillaCDSwap::
upfrontLag ()
{
  return this->upfrontLag_;
}

inline
void XsdVanillaCDSwap::
upfrontLag (const upfrontLag_type& x)
{
  this->upfrontLag_.set (x);
}

inline
void XsdVanillaCDSwap::
upfrontLag (const upfrontLag_optional& x)
{
  this->upfrontLag_ = x;
}

inline
void XsdVanillaCDSwap::
upfrontLag (::std::auto_ptr< upfrontLag_type > x)
{
  this->upfrontLag_.set (x);
}

inline
const XsdVanillaCDSwap::recoveryRate_optional& XsdVanillaCDSwap::
recoveryRate () const
{
  return this->recoveryRate_;
}

inline
XsdVanillaCDSwap::recoveryRate_optional& XsdVanillaCDSwap::
recoveryRate ()
{
  return this->recoveryRate_;
}

inline
void XsdVanillaCDSwap::
recoveryRate (const recoveryRate_type& x)
{
  this->recoveryRate_.set (x);
}

inline
void XsdVanillaCDSwap::
recoveryRate (const recoveryRate_optional& x)
{
  this->recoveryRate_ = x;
}

inline
void XsdVanillaCDSwap::
recoveryRate (::std::auto_ptr< recoveryRate_type > x)
{
  this->recoveryRate_.set (x);
}


// XsdLoanCDSwap
// 


// XsdConstantMaturityCDSwap
// 


// XsdMultiNameCDSwap
// 


// XsdIndexCDSwap
// 

inline
const XsdIndexCDSwap::cdSwap_sequence& XsdIndexCDSwap::
cdSwap () const
{
  return this->cdSwap_;
}

inline
XsdIndexCDSwap::cdSwap_sequence& XsdIndexCDSwap::
cdSwap ()
{
  return this->cdSwap_;
}

inline
void XsdIndexCDSwap::
cdSwap (const cdSwap_sequence& s)
{
  this->cdSwap_ = s;
}

inline
const XsdIndexCDSwap::weight_optional& XsdIndexCDSwap::
weight () const
{
  return this->weight_;
}

inline
XsdIndexCDSwap::weight_optional& XsdIndexCDSwap::
weight ()
{
  return this->weight_;
}

inline
void XsdIndexCDSwap::
weight (const weight_type& x)
{
  this->weight_.set (x);
}

inline
void XsdIndexCDSwap::
weight (const weight_optional& x)
{
  this->weight_ = x;
}

inline
void XsdIndexCDSwap::
weight (::std::auto_ptr< weight_type > x)
{
  this->weight_.set (x);
}


// XsdNthToDefaultCDSwap
// 

inline
const XsdNthToDefaultCDSwap::firstToDefault_optional& XsdNthToDefaultCDSwap::
firstToDefault () const
{
  return this->firstToDefault_;
}

inline
XsdNthToDefaultCDSwap::firstToDefault_optional& XsdNthToDefaultCDSwap::
firstToDefault ()
{
  return this->firstToDefault_;
}

inline
void XsdNthToDefaultCDSwap::
firstToDefault (const firstToDefault_type& x)
{
  this->firstToDefault_.set (x);
}

inline
void XsdNthToDefaultCDSwap::
firstToDefault (const firstToDefault_optional& x)
{
  this->firstToDefault_ = x;
}

inline
void XsdNthToDefaultCDSwap::
firstToDefault (::std::auto_ptr< firstToDefault_type > x)
{
  this->firstToDefault_.set (x);
}

inline
XsdNthToDefaultCDSwap::firstToDefault_type XsdNthToDefaultCDSwap::
firstToDefault_default_value ()
{
  return firstToDefault_type (1);
}

inline
const XsdNthToDefaultCDSwap::lastToDefault_optional& XsdNthToDefaultCDSwap::
lastToDefault () const
{
  return this->lastToDefault_;
}

inline
XsdNthToDefaultCDSwap::lastToDefault_optional& XsdNthToDefaultCDSwap::
lastToDefault ()
{
  return this->lastToDefault_;
}

inline
void XsdNthToDefaultCDSwap::
lastToDefault (const lastToDefault_type& x)
{
  this->lastToDefault_.set (x);
}

inline
void XsdNthToDefaultCDSwap::
lastToDefault (const lastToDefault_optional& x)
{
  this->lastToDefault_ = x;
}

inline
void XsdNthToDefaultCDSwap::
lastToDefault (::std::auto_ptr< lastToDefault_type > x)
{
  this->lastToDefault_.set (x);
}

inline
XsdNthToDefaultCDSwap::lastToDefault_type XsdNthToDefaultCDSwap::
lastToDefault_default_value ()
{
  return lastToDefault_type (1);
}

inline
const XsdNthToDefaultCDSwap::underlying_optional& XsdNthToDefaultCDSwap::
underlying () const
{
  return this->underlying_;
}

inline
XsdNthToDefaultCDSwap::underlying_optional& XsdNthToDefaultCDSwap::
underlying ()
{
  return this->underlying_;
}

inline
void XsdNthToDefaultCDSwap::
underlying (const underlying_type& x)
{
  this->underlying_.set (x);
}

inline
void XsdNthToDefaultCDSwap::
underlying (const underlying_optional& x)
{
  this->underlying_ = x;
}

inline
void XsdNthToDefaultCDSwap::
underlying (::std::auto_ptr< underlying_type > x)
{
  this->underlying_.set (x);
}


// XsdBasketCDSwap
// 

inline
const XsdBasketCDSwap::attach_optional& XsdBasketCDSwap::
attach () const
{
  return this->attach_;
}

inline
XsdBasketCDSwap::attach_optional& XsdBasketCDSwap::
attach ()
{
  return this->attach_;
}

inline
void XsdBasketCDSwap::
attach (const attach_type& x)
{
  this->attach_.set (x);
}

inline
void XsdBasketCDSwap::
attach (const attach_optional& x)
{
  this->attach_ = x;
}

inline
void XsdBasketCDSwap::
attach (::std::auto_ptr< attach_type > x)
{
  this->attach_.set (x);
}

inline
XsdBasketCDSwap::attach_type XsdBasketCDSwap::
attach_default_value ()
{
  return attach_type (.0);
}

inline
const XsdBasketCDSwap::detach_optional& XsdBasketCDSwap::
detach () const
{
  return this->detach_;
}

inline
XsdBasketCDSwap::detach_optional& XsdBasketCDSwap::
detach ()
{
  return this->detach_;
}

inline
void XsdBasketCDSwap::
detach (const detach_type& x)
{
  this->detach_.set (x);
}

inline
void XsdBasketCDSwap::
detach (const detach_optional& x)
{
  this->detach_ = x;
}

inline
void XsdBasketCDSwap::
detach (::std::auto_ptr< detach_type > x)
{
  this->detach_.set (x);
}

inline
XsdBasketCDSwap::detach_type XsdBasketCDSwap::
detach_default_value ()
{
  return detach_type (1.);
}

inline
const XsdBasketCDSwap::isTopDown_optional& XsdBasketCDSwap::
isTopDown () const
{
  return this->isTopDown_;
}

inline
XsdBasketCDSwap::isTopDown_optional& XsdBasketCDSwap::
isTopDown ()
{
  return this->isTopDown_;
}

inline
void XsdBasketCDSwap::
isTopDown (const isTopDown_type& x)
{
  this->isTopDown_.set (x);
}

inline
void XsdBasketCDSwap::
isTopDown (const isTopDown_optional& x)
{
  this->isTopDown_ = x;
}

inline
XsdBasketCDSwap::isTopDown_type XsdBasketCDSwap::
isTopDown_default_value ()
{
  return isTopDown_type (true);
}

inline
const XsdBasketCDSwap::passThrough_optional& XsdBasketCDSwap::
passThrough () const
{
  return this->passThrough_;
}

inline
XsdBasketCDSwap::passThrough_optional& XsdBasketCDSwap::
passThrough ()
{
  return this->passThrough_;
}

inline
void XsdBasketCDSwap::
passThrough (const passThrough_type& x)
{
  this->passThrough_.set (x);
}

inline
void XsdBasketCDSwap::
passThrough (const passThrough_optional& x)
{
  this->passThrough_ = x;
}

inline
XsdBasketCDSwap::passThrough_type XsdBasketCDSwap::
passThrough_default_value ()
{
  return passThrough_type (false);
}

inline
const XsdBasketCDSwap::assets_optional& XsdBasketCDSwap::
assets () const
{
  return this->assets_;
}

inline
XsdBasketCDSwap::assets_optional& XsdBasketCDSwap::
assets ()
{
  return this->assets_;
}

inline
void XsdBasketCDSwap::
assets (const assets_type& x)
{
  this->assets_.set (x);
}

inline
void XsdBasketCDSwap::
assets (const assets_optional& x)
{
  this->assets_ = x;
}

inline
void XsdBasketCDSwap::
assets (::std::auto_ptr< assets_type > x)
{
  this->assets_.set (x);
}

inline
const XsdBasketCDSwap::obligors_optional& XsdBasketCDSwap::
obligors () const
{
  return this->obligors_;
}

inline
XsdBasketCDSwap::obligors_optional& XsdBasketCDSwap::
obligors ()
{
  return this->obligors_;
}

inline
void XsdBasketCDSwap::
obligors (const obligors_type& x)
{
  this->obligors_.set (x);
}

inline
void XsdBasketCDSwap::
obligors (const obligors_optional& x)
{
  this->obligors_ = x;
}

inline
void XsdBasketCDSwap::
obligors (::std::auto_ptr< obligors_type > x)
{
  this->obligors_.set (x);
}


// recoveryRate
// 


// firstToDefault
// 


// lastToDefault
// 


// attach
// 


// detach
// 


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_ASSET_CDSWAP_IXX
