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

#ifndef CXX___SCHEMA_XSD_ASSET_SCHEDULE_IXX
#define CXX___SCHEMA_XSD_ASSET_SCHEDULE_IXX

// Begin prologue.
//
//
// End prologue.

#include "expression.ixx"

#include "asset.ixx"

// XsdSchedule
// 

inline
const XsdSchedule::convention_optional& XsdSchedule::
convention () const
{
  return this->convention_;
}

inline
XsdSchedule::convention_optional& XsdSchedule::
convention ()
{
  return this->convention_;
}

inline
void XsdSchedule::
convention (const convention_type& x)
{
  this->convention_.set (x);
}

inline
void XsdSchedule::
convention (const convention_optional& x)
{
  this->convention_ = x;
}

inline
void XsdSchedule::
convention (::std::auto_ptr< convention_type > x)
{
  this->convention_.set (x);
}


// XsdScheduleDates
// 

inline
const XsdScheduleDates::convention_optional& XsdScheduleDates::
convention () const
{
  return this->convention_;
}

inline
XsdScheduleDates::convention_optional& XsdScheduleDates::
convention ()
{
  return this->convention_;
}

inline
void XsdScheduleDates::
convention (const convention_type& x)
{
  this->convention_.set (x);
}

inline
void XsdScheduleDates::
convention (const convention_optional& x)
{
  this->convention_ = x;
}

inline
void XsdScheduleDates::
convention (::std::auto_ptr< convention_type > x)
{
  this->convention_.set (x);
}

inline
const XsdScheduleDates::startDate_optional& XsdScheduleDates::
startDate () const
{
  return this->startDate_;
}

inline
XsdScheduleDates::startDate_optional& XsdScheduleDates::
startDate ()
{
  return this->startDate_;
}

inline
void XsdScheduleDates::
startDate (const startDate_type& x)
{
  this->startDate_.set (x);
}

inline
void XsdScheduleDates::
startDate (const startDate_optional& x)
{
  this->startDate_ = x;
}

inline
void XsdScheduleDates::
startDate (::std::auto_ptr< startDate_type > x)
{
  this->startDate_.set (x);
}

inline
const XsdScheduleDates::endDate_type& XsdScheduleDates::
endDate () const
{
  return this->endDate_.get ();
}

inline
XsdScheduleDates::endDate_type& XsdScheduleDates::
endDate ()
{
  return this->endDate_.get ();
}

inline
void XsdScheduleDates::
endDate (const endDate_type& x)
{
  this->endDate_.set (x);
}

inline
void XsdScheduleDates::
endDate (::std::auto_ptr< endDate_type > x)
{
  this->endDate_.set (x);
}

inline
const XsdScheduleDates::frequency_type& XsdScheduleDates::
frequency () const
{
  return this->frequency_.get ();
}

inline
XsdScheduleDates::frequency_type& XsdScheduleDates::
frequency ()
{
  return this->frequency_.get ();
}

inline
void XsdScheduleDates::
frequency (const frequency_type& x)
{
  this->frequency_.set (x);
}

inline
void XsdScheduleDates::
frequency (::std::auto_ptr< frequency_type > x)
{
  this->frequency_.set (x);
}

inline
const XsdScheduleDates::frequency_type& XsdScheduleDates::
frequency_default_value ()
{
  return frequency_default_value_;
}


// XsdAmortizationSchedule
// 

inline
const XsdAmortizationSchedule::principal_sequence& XsdAmortizationSchedule::
principal () const
{
  return this->principal_;
}

inline
XsdAmortizationSchedule::principal_sequence& XsdAmortizationSchedule::
principal ()
{
  return this->principal_;
}

inline
void XsdAmortizationSchedule::
principal (const principal_sequence& s)
{
  this->principal_ = s;
}

inline
const XsdAmortizationSchedule::amortizationType_optional& XsdAmortizationSchedule::
amortizationType () const
{
  return this->amortizationType_;
}

inline
XsdAmortizationSchedule::amortizationType_optional& XsdAmortizationSchedule::
amortizationType ()
{
  return this->amortizationType_;
}

inline
void XsdAmortizationSchedule::
amortizationType (const amortizationType_type& x)
{
  this->amortizationType_.set (x);
}

inline
void XsdAmortizationSchedule::
amortizationType (const amortizationType_optional& x)
{
  this->amortizationType_ = x;
}

inline
void XsdAmortizationSchedule::
amortizationType (::std::auto_ptr< amortizationType_type > x)
{
  this->amortizationType_.set (x);
}

inline
const XsdAmortizationSchedule::amortizationType_type& XsdAmortizationSchedule::
amortizationType_default_value ()
{
  return amortizationType_default_value_;
}


// XsdBarrierSchedule
// 

inline
const XsdBarrierSchedule::barrierType_optional& XsdBarrierSchedule::
barrierType () const
{
  return this->barrierType_;
}

inline
XsdBarrierSchedule::barrierType_optional& XsdBarrierSchedule::
barrierType ()
{
  return this->barrierType_;
}

inline
void XsdBarrierSchedule::
barrierType (const barrierType_type& x)
{
  this->barrierType_.set (x);
}

inline
void XsdBarrierSchedule::
barrierType (const barrierType_optional& x)
{
  this->barrierType_ = x;
}

inline
void XsdBarrierSchedule::
barrierType (::std::auto_ptr< barrierType_type > x)
{
  this->barrierType_.set (x);
}

inline
const XsdBarrierSchedule::barrierType_type& XsdBarrierSchedule::
barrierType_default_value ()
{
  return barrierType_default_value_;
}

inline
const XsdBarrierSchedule::barrier_sequence& XsdBarrierSchedule::
barrier () const
{
  return this->barrier_;
}

inline
XsdBarrierSchedule::barrier_sequence& XsdBarrierSchedule::
barrier ()
{
  return this->barrier_;
}

inline
void XsdBarrierSchedule::
barrier (const barrier_sequence& s)
{
  this->barrier_ = s;
}


// XsdConvertSchedule
// 

inline
const XsdConvertSchedule::ratio_sequence& XsdConvertSchedule::
ratio () const
{
  return this->ratio_;
}

inline
XsdConvertSchedule::ratio_sequence& XsdConvertSchedule::
ratio ()
{
  return this->ratio_;
}

inline
void XsdConvertSchedule::
ratio (const ratio_sequence& s)
{
  this->ratio_ = s;
}

inline
const XsdConvertSchedule::underlying_type& XsdConvertSchedule::
underlying () const
{
  return this->underlying_.get ();
}

inline
XsdConvertSchedule::underlying_type& XsdConvertSchedule::
underlying ()
{
  return this->underlying_.get ();
}

inline
void XsdConvertSchedule::
underlying (const underlying_type& x)
{
  this->underlying_.set (x);
}

inline
void XsdConvertSchedule::
underlying (::std::auto_ptr< underlying_type > x)
{
  this->underlying_.set (x);
}

inline
const XsdConvertSchedule::accrual_type& XsdConvertSchedule::
accrual () const
{
  return this->accrual_.get ();
}

inline
XsdConvertSchedule::accrual_type& XsdConvertSchedule::
accrual ()
{
  return this->accrual_.get ();
}

inline
void XsdConvertSchedule::
accrual (const accrual_type& x)
{
  this->accrual_.set (x);
}

inline
XsdConvertSchedule::accrual_type XsdConvertSchedule::
accrual_default_value ()
{
  return accrual_type (false);
}


// XsdCouponSchedule
// 

inline
const XsdCouponSchedule::row_sequence& XsdCouponSchedule::
row () const
{
  return this->row_;
}

inline
XsdCouponSchedule::row_sequence& XsdCouponSchedule::
row ()
{
  return this->row_;
}

inline
void XsdCouponSchedule::
row (const row_sequence& s)
{
  this->row_ = s;
}


// XsdDividendSchedule
// 

inline
const XsdDividendSchedule::dividendType_optional& XsdDividendSchedule::
dividendType () const
{
  return this->dividendType_;
}

inline
XsdDividendSchedule::dividendType_optional& XsdDividendSchedule::
dividendType ()
{
  return this->dividendType_;
}

inline
void XsdDividendSchedule::
dividendType (const dividendType_type& x)
{
  this->dividendType_.set (x);
}

inline
void XsdDividendSchedule::
dividendType (const dividendType_optional& x)
{
  this->dividendType_ = x;
}

inline
void XsdDividendSchedule::
dividendType (::std::auto_ptr< dividendType_type > x)
{
  this->dividendType_.set (x);
}

inline
const XsdDividendSchedule::dividendType_type& XsdDividendSchedule::
dividendType_default_value ()
{
  return dividendType_default_value_;
}


// XsdOptionSchedule
// 

inline
const XsdOptionSchedule::strike_sequence& XsdOptionSchedule::
strike () const
{
  return this->strike_;
}

inline
XsdOptionSchedule::strike_sequence& XsdOptionSchedule::
strike ()
{
  return this->strike_;
}

inline
void XsdOptionSchedule::
strike (const strike_sequence& s)
{
  this->strike_ = s;
}

inline
const XsdOptionSchedule::notice_optional& XsdOptionSchedule::
notice () const
{
  return this->notice_;
}

inline
XsdOptionSchedule::notice_optional& XsdOptionSchedule::
notice ()
{
  return this->notice_;
}

inline
void XsdOptionSchedule::
notice (const notice_type& x)
{
  this->notice_.set (x);
}

inline
void XsdOptionSchedule::
notice (const notice_optional& x)
{
  this->notice_ = x;
}

inline
void XsdOptionSchedule::
notice (::std::auto_ptr< notice_type > x)
{
  this->notice_.set (x);
}

inline
const XsdOptionSchedule::notice_type& XsdOptionSchedule::
notice_default_value ()
{
  return notice_default_value_;
}

inline
const XsdOptionSchedule::rebate_optional& XsdOptionSchedule::
rebate () const
{
  return this->rebate_;
}

inline
XsdOptionSchedule::rebate_optional& XsdOptionSchedule::
rebate ()
{
  return this->rebate_;
}

inline
void XsdOptionSchedule::
rebate (const rebate_type& x)
{
  this->rebate_.set (x);
}

inline
void XsdOptionSchedule::
rebate (const rebate_optional& x)
{
  this->rebate_ = x;
}

inline
void XsdOptionSchedule::
rebate (::std::auto_ptr< rebate_type > x)
{
  this->rebate_.set (x);
}

inline
XsdOptionSchedule::rebate_type XsdOptionSchedule::
rebate_default_value ()
{
  return rebate_type (.0);
}

inline
const XsdOptionSchedule::shout_optional& XsdOptionSchedule::
shout () const
{
  return this->shout_;
}

inline
XsdOptionSchedule::shout_optional& XsdOptionSchedule::
shout ()
{
  return this->shout_;
}

inline
void XsdOptionSchedule::
shout (const shout_type& x)
{
  this->shout_.set (x);
}

inline
void XsdOptionSchedule::
shout (const shout_optional& x)
{
  this->shout_ = x;
}

inline
XsdOptionSchedule::shout_type XsdOptionSchedule::
shout_default_value ()
{
  return shout_type (false);
}

inline
const XsdOptionSchedule::payoffAtExpiry_optional& XsdOptionSchedule::
payoffAtExpiry () const
{
  return this->payoffAtExpiry_;
}

inline
XsdOptionSchedule::payoffAtExpiry_optional& XsdOptionSchedule::
payoffAtExpiry ()
{
  return this->payoffAtExpiry_;
}

inline
void XsdOptionSchedule::
payoffAtExpiry (const payoffAtExpiry_type& x)
{
  this->payoffAtExpiry_.set (x);
}

inline
void XsdOptionSchedule::
payoffAtExpiry (const payoffAtExpiry_optional& x)
{
  this->payoffAtExpiry_ = x;
}

inline
XsdOptionSchedule::payoffAtExpiry_type XsdOptionSchedule::
payoffAtExpiry_default_value ()
{
  return payoffAtExpiry_type (false);
}

inline
const XsdOptionSchedule::trigger_optional& XsdOptionSchedule::
trigger () const
{
  return this->trigger_;
}

inline
XsdOptionSchedule::trigger_optional& XsdOptionSchedule::
trigger ()
{
  return this->trigger_;
}

inline
void XsdOptionSchedule::
trigger (const trigger_type& x)
{
  this->trigger_.set (x);
}

inline
void XsdOptionSchedule::
trigger (const trigger_optional& x)
{
  this->trigger_ = x;
}

inline
XsdOptionSchedule::trigger_type XsdOptionSchedule::
trigger_default_value ()
{
  return trigger_type (100.);
}

inline
const XsdOptionSchedule::strikeType_type& XsdOptionSchedule::
strikeType () const
{
  return this->strikeType_.get ();
}

inline
XsdOptionSchedule::strikeType_type& XsdOptionSchedule::
strikeType ()
{
  return this->strikeType_.get ();
}

inline
void XsdOptionSchedule::
strikeType (const strikeType_type& x)
{
  this->strikeType_.set (x);
}

inline
void XsdOptionSchedule::
strikeType (::std::auto_ptr< strikeType_type > x)
{
  this->strikeType_.set (x);
}

inline
const XsdOptionSchedule::strikeType_type& XsdOptionSchedule::
strikeType_default_value ()
{
  return strikeType_default_value_;
}


// XsdRatchetSchedule
// 

inline
const XsdRatchetSchedule::row_sequence& XsdRatchetSchedule::
row () const
{
  return this->row_;
}

inline
XsdRatchetSchedule::row_sequence& XsdRatchetSchedule::
row ()
{
  return this->row_;
}

inline
void XsdRatchetSchedule::
row (const row_sequence& s)
{
  this->row_ = s;
}

inline
const XsdRatchetSchedule::globalCap_optional& XsdRatchetSchedule::
globalCap () const
{
  return this->globalCap_;
}

inline
XsdRatchetSchedule::globalCap_optional& XsdRatchetSchedule::
globalCap ()
{
  return this->globalCap_;
}

inline
void XsdRatchetSchedule::
globalCap (const globalCap_type& x)
{
  this->globalCap_.set (x);
}

inline
void XsdRatchetSchedule::
globalCap (const globalCap_optional& x)
{
  this->globalCap_ = x;
}

inline
const XsdRatchetSchedule::globalFloor_optional& XsdRatchetSchedule::
globalFloor () const
{
  return this->globalFloor_;
}

inline
XsdRatchetSchedule::globalFloor_optional& XsdRatchetSchedule::
globalFloor ()
{
  return this->globalFloor_;
}

inline
void XsdRatchetSchedule::
globalFloor (const globalFloor_type& x)
{
  this->globalFloor_.set (x);
}

inline
void XsdRatchetSchedule::
globalFloor (const globalFloor_optional& x)
{
  this->globalFloor_ = x;
}


// XsdScheduleChoice
// 

inline
const XsdScheduleChoice::bespoke_optional& XsdScheduleChoice::
bespoke () const
{
  return this->bespoke_;
}

inline
XsdScheduleChoice::bespoke_optional& XsdScheduleChoice::
bespoke ()
{
  return this->bespoke_;
}

inline
void XsdScheduleChoice::
bespoke (const bespoke_type& x)
{
  this->bespoke_.set (x);
}

inline
void XsdScheduleChoice::
bespoke (const bespoke_optional& x)
{
  this->bespoke_ = x;
}

inline
void XsdScheduleChoice::
bespoke (::std::auto_ptr< bespoke_type > x)
{
  this->bespoke_.set (x);
}

inline
const XsdScheduleChoice::fixed_optional& XsdScheduleChoice::
fixed () const
{
  return this->fixed_;
}

inline
XsdScheduleChoice::fixed_optional& XsdScheduleChoice::
fixed ()
{
  return this->fixed_;
}

inline
void XsdScheduleChoice::
fixed (const fixed_type& x)
{
  this->fixed_.set (x);
}

inline
void XsdScheduleChoice::
fixed (const fixed_optional& x)
{
  this->fixed_ = x;
}

inline
void XsdScheduleChoice::
fixed (::std::auto_ptr< fixed_type > x)
{
  this->fixed_.set (x);
}

inline
const XsdScheduleChoice::floating_optional& XsdScheduleChoice::
floating () const
{
  return this->floating_;
}

inline
XsdScheduleChoice::floating_optional& XsdScheduleChoice::
floating ()
{
  return this->floating_;
}

inline
void XsdScheduleChoice::
floating (const floating_type& x)
{
  this->floating_.set (x);
}

inline
void XsdScheduleChoice::
floating (const floating_optional& x)
{
  this->floating_ = x;
}

inline
void XsdScheduleChoice::
floating (::std::auto_ptr< floating_type > x)
{
  this->floating_.set (x);
}


// XsdScheduleRow
// 

inline
const XsdScheduleRow::bespoke_optional& XsdScheduleRow::
bespoke () const
{
  return this->bespoke_;
}

inline
XsdScheduleRow::bespoke_optional& XsdScheduleRow::
bespoke ()
{
  return this->bespoke_;
}

inline
void XsdScheduleRow::
bespoke (const bespoke_type& x)
{
  this->bespoke_.set (x);
}

inline
void XsdScheduleRow::
bespoke (const bespoke_optional& x)
{
  this->bespoke_ = x;
}

inline
void XsdScheduleRow::
bespoke (::std::auto_ptr< bespoke_type > x)
{
  this->bespoke_.set (x);
}

inline
const XsdScheduleRow::fixed_optional& XsdScheduleRow::
fixed () const
{
  return this->fixed_;
}

inline
XsdScheduleRow::fixed_optional& XsdScheduleRow::
fixed ()
{
  return this->fixed_;
}

inline
void XsdScheduleRow::
fixed (const fixed_type& x)
{
  this->fixed_.set (x);
}

inline
void XsdScheduleRow::
fixed (const fixed_optional& x)
{
  this->fixed_ = x;
}

inline
void XsdScheduleRow::
fixed (::std::auto_ptr< fixed_type > x)
{
  this->fixed_.set (x);
}

inline
const XsdScheduleRow::floating_optional& XsdScheduleRow::
floating () const
{
  return this->floating_;
}

inline
XsdScheduleRow::floating_optional& XsdScheduleRow::
floating ()
{
  return this->floating_;
}

inline
void XsdScheduleRow::
floating (const floating_type& x)
{
  this->floating_.set (x);
}

inline
void XsdScheduleRow::
floating (const floating_optional& x)
{
  this->floating_ = x;
}

inline
void XsdScheduleRow::
floating (::std::auto_ptr< floating_type > x)
{
  this->floating_.set (x);
}

inline
const XsdScheduleRow::condition_optional& XsdScheduleRow::
condition () const
{
  return this->condition_;
}

inline
XsdScheduleRow::condition_optional& XsdScheduleRow::
condition ()
{
  return this->condition_;
}

inline
void XsdScheduleRow::
condition (const condition_type& x)
{
  this->condition_.set (x);
}

inline
void XsdScheduleRow::
condition (const condition_optional& x)
{
  this->condition_ = x;
}

inline
void XsdScheduleRow::
condition (::std::auto_ptr< condition_type > x)
{
  this->condition_.set (x);
}


// XsdOptionRow
// 

inline
const XsdOptionRow::jumpSize_optional& XsdOptionRow::
jumpSize () const
{
  return this->jumpSize_;
}

inline
XsdOptionRow::jumpSize_optional& XsdOptionRow::
jumpSize ()
{
  return this->jumpSize_;
}

inline
void XsdOptionRow::
jumpSize (const jumpSize_type& x)
{
  this->jumpSize_.set (x);
}

inline
void XsdOptionRow::
jumpSize (const jumpSize_optional& x)
{
  this->jumpSize_ = x;
}

inline
void XsdOptionRow::
jumpSize (::std::auto_ptr< jumpSize_type > x)
{
  this->jumpSize_.set (x);
}

inline
XsdOptionRow::jumpSize_type XsdOptionRow::
jumpSize_default_value ()
{
  return jumpSize_type (.0);
}


// XsdRatchetRow
// 

inline
const XsdRatchetRow::spread_optional& XsdRatchetRow::
spread () const
{
  return this->spread_;
}

inline
XsdRatchetRow::spread_optional& XsdRatchetRow::
spread ()
{
  return this->spread_;
}

inline
void XsdRatchetRow::
spread (const spread_type& x)
{
  this->spread_.set (x);
}

inline
void XsdRatchetRow::
spread (const spread_optional& x)
{
  this->spread_ = x;
}

inline
XsdRatchetRow::spread_type XsdRatchetRow::
spread_default_value ()
{
  return spread_type (.0);
}

inline
const XsdRatchetRow::multiplier_optional& XsdRatchetRow::
multiplier () const
{
  return this->multiplier_;
}

inline
XsdRatchetRow::multiplier_optional& XsdRatchetRow::
multiplier ()
{
  return this->multiplier_;
}

inline
void XsdRatchetRow::
multiplier (const multiplier_type& x)
{
  this->multiplier_.set (x);
}

inline
void XsdRatchetRow::
multiplier (const multiplier_optional& x)
{
  this->multiplier_ = x;
}

inline
void XsdRatchetRow::
multiplier (::std::auto_ptr< multiplier_type > x)
{
  this->multiplier_.set (x);
}

inline
XsdRatchetRow::multiplier_type XsdRatchetRow::
multiplier_default_value ()
{
  return multiplier_type (1.0);
}

inline
const XsdRatchetRow::localCap_optional& XsdRatchetRow::
localCap () const
{
  return this->localCap_;
}

inline
XsdRatchetRow::localCap_optional& XsdRatchetRow::
localCap ()
{
  return this->localCap_;
}

inline
void XsdRatchetRow::
localCap (const localCap_type& x)
{
  this->localCap_.set (x);
}

inline
void XsdRatchetRow::
localCap (const localCap_optional& x)
{
  this->localCap_ = x;
}

inline
const XsdRatchetRow::localFloor_optional& XsdRatchetRow::
localFloor () const
{
  return this->localFloor_;
}

inline
XsdRatchetRow::localFloor_optional& XsdRatchetRow::
localFloor ()
{
  return this->localFloor_;
}

inline
void XsdRatchetRow::
localFloor (const localFloor_type& x)
{
  this->localFloor_.set (x);
}

inline
void XsdRatchetRow::
localFloor (const localFloor_optional& x)
{
  this->localFloor_ = x;
}


// rebate
// 


// fixed
// 


// jumpSize
// 


// fixed1
// 


// multiplier
// 


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_ASSET_SCHEDULE_IXX
