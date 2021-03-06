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

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "enums.hxx"

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

#include <xsd/cxx/tree/comparison-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;

  static
  const ::xsd::cxx::tree::comparison_plate< 0, char >
  comparison_plate_init;
}

// XsdConvexityMethod
//

XsdConvexityMethod::
XsdConvexityMethod (const xercesc::DOMElement& e,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdConvexityMethod_convert ();
}

XsdConvexityMethod::
XsdConvexityMethod (const xercesc::DOMAttr& a,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdConvexityMethod_convert ();
}

XsdConvexityMethod::
XsdConvexityMethod (const ::std::string& s,
                    const xercesc::DOMElement* e,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdConvexityMethod_convert ();
}

XsdConvexityMethod* XsdConvexityMethod::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdConvexityMethod (*this, f, c);
}

XsdConvexityMethod::value XsdConvexityMethod::
_xsd_XsdConvexityMethod_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdConvexityMethod_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdConvexityMethod_indexes_,
                    _xsd_XsdConvexityMethod_indexes_ + 4,
                    *this,
                    c));

  if (i == _xsd_XsdConvexityMethod_indexes_ + 4 || _xsd_XsdConvexityMethod_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdConvexityMethod::
_xsd_XsdConvexityMethod_literals_[4] =
{
  "HO_LEE",
  "HULL_WHITE",
  "KIRIKOS_NOVAK",
  "NONE"
};

const XsdConvexityMethod::value XsdConvexityMethod::
_xsd_XsdConvexityMethod_indexes_[4] =
{
  ::XsdConvexityMethod::HO_LEE,
  ::XsdConvexityMethod::HULL_WHITE,
  ::XsdConvexityMethod::KIRIKOS_NOVAK,
  ::XsdConvexityMethod::NONE
};

// XsdDiscountType
//

XsdDiscountType::
XsdDiscountType (const xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdDiscountType_convert ();
}

XsdDiscountType::
XsdDiscountType (const xercesc::DOMAttr& a,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdDiscountType_convert ();
}

XsdDiscountType::
XsdDiscountType (const ::std::string& s,
                 const xercesc::DOMElement* e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdDiscountType_convert ();
}

XsdDiscountType* XsdDiscountType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdDiscountType (*this, f, c);
}

XsdDiscountType::value XsdDiscountType::
_xsd_XsdDiscountType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdDiscountType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdDiscountType_indexes_,
                    _xsd_XsdDiscountType_indexes_ + 5,
                    *this,
                    c));

  if (i == _xsd_XsdDiscountType_indexes_ + 5 || _xsd_XsdDiscountType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdDiscountType::
_xsd_XsdDiscountType_literals_[5] =
{
  "DISCOUNT",
  "DV01",
  "FORWARD",
  "SPOT",
  "SWAP"
};

const XsdDiscountType::value XsdDiscountType::
_xsd_XsdDiscountType_indexes_[5] =
{
  ::XsdDiscountType::DISCOUNT,
  ::XsdDiscountType::DV01,
  ::XsdDiscountType::FORWARD,
  ::XsdDiscountType::SPOT,
  ::XsdDiscountType::SWAP
};

// XsdPriceVolatilityType
//

XsdPriceVolatilityType::
XsdPriceVolatilityType (const xercesc::DOMElement& e,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdPriceVolatilityType_convert ();
}

XsdPriceVolatilityType::
XsdPriceVolatilityType (const xercesc::DOMAttr& a,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdPriceVolatilityType_convert ();
}

XsdPriceVolatilityType::
XsdPriceVolatilityType (const ::std::string& s,
                        const xercesc::DOMElement* e,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdPriceVolatilityType_convert ();
}

XsdPriceVolatilityType* XsdPriceVolatilityType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdPriceVolatilityType (*this, f, c);
}

XsdPriceVolatilityType::value XsdPriceVolatilityType::
_xsd_XsdPriceVolatilityType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdPriceVolatilityType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdPriceVolatilityType_indexes_,
                    _xsd_XsdPriceVolatilityType_indexes_ + 2,
                    *this,
                    c));

  if (i == _xsd_XsdPriceVolatilityType_indexes_ + 2 || _xsd_XsdPriceVolatilityType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdPriceVolatilityType::
_xsd_XsdPriceVolatilityType_literals_[2] =
{
  "BLACK",
  "LOCAL"
};

const XsdPriceVolatilityType::value XsdPriceVolatilityType::
_xsd_XsdPriceVolatilityType_indexes_[2] =
{
  ::XsdPriceVolatilityType::BLACK,
  ::XsdPriceVolatilityType::LOCAL
};

// XsdHazardType
//

XsdHazardType::
XsdHazardType (const xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdHazardType_convert ();
}

XsdHazardType::
XsdHazardType (const xercesc::DOMAttr& a,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdHazardType_convert ();
}

XsdHazardType::
XsdHazardType (const ::std::string& s,
               const xercesc::DOMElement* e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdHazardType_convert ();
}

XsdHazardType* XsdHazardType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdHazardType (*this, f, c);
}

XsdHazardType::value XsdHazardType::
_xsd_XsdHazardType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdHazardType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdHazardType_indexes_,
                    _xsd_XsdHazardType_indexes_ + 6,
                    *this,
                    c));

  if (i == _xsd_XsdHazardType_indexes_ + 6 || _xsd_XsdHazardType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdHazardType::
_xsd_XsdHazardType_literals_[6] =
{
  "CREDIT_SPREAD",
  "DEFAULT_PROBABILITY",
  "DEFAULT_DENSITY",
  "FORWARD_HAZARD_RATE",
  "SURVIVAL_PROBABILITY",
  "SPOT_HAZARD_RATE"
};

const XsdHazardType::value XsdHazardType::
_xsd_XsdHazardType_indexes_[6] =
{
  ::XsdHazardType::CREDIT_SPREAD,
  ::XsdHazardType::DEFAULT_DENSITY,
  ::XsdHazardType::DEFAULT_PROBABILITY,
  ::XsdHazardType::FORWARD_HAZARD_RATE,
  ::XsdHazardType::SPOT_HAZARD_RATE,
  ::XsdHazardType::SURVIVAL_PROBABILITY
};

// XsdOutputType
//

XsdOutputType::
XsdOutputType (const xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdOutputType_convert ();
}

XsdOutputType::
XsdOutputType (const xercesc::DOMAttr& a,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdOutputType_convert ();
}

XsdOutputType::
XsdOutputType (const ::std::string& s,
               const xercesc::DOMElement* e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdOutputType_convert ();
}

XsdOutputType* XsdOutputType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdOutputType (*this, f, c);
}

XsdOutputType::value XsdOutputType::
_xsd_XsdOutputType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdOutputType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdOutputType_indexes_,
                    _xsd_XsdOutputType_indexes_ + 4,
                    *this,
                    c));

  if (i == _xsd_XsdOutputType_indexes_ + 4 || _xsd_XsdOutputType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdOutputType::
_xsd_XsdOutputType_literals_[4] =
{
  "EXPECTED",
  "NONE",
  "PATHWISE",
  "SUMMARY"
};

const XsdOutputType::value XsdOutputType::
_xsd_XsdOutputType_indexes_[4] =
{
  ::XsdOutputType::EXPECTED,
  ::XsdOutputType::NONE,
  ::XsdOutputType::PATHWISE,
  ::XsdOutputType::SUMMARY
};

// XsdProcessType
//

XsdProcessType::
XsdProcessType (const xercesc::DOMElement& e,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdProcessType_convert ();
}

XsdProcessType::
XsdProcessType (const xercesc::DOMAttr& a,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdProcessType_convert ();
}

XsdProcessType::
XsdProcessType (const ::std::string& s,
                const xercesc::DOMElement* e,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdProcessType_convert ();
}

XsdProcessType* XsdProcessType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdProcessType (*this, f, c);
}

XsdProcessType::value XsdProcessType::
_xsd_XsdProcessType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdProcessType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdProcessType_indexes_,
                    _xsd_XsdProcessType_indexes_ + 5,
                    *this,
                    c));

  if (i == _xsd_XsdProcessType_indexes_ + 5 || _xsd_XsdProcessType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdProcessType::
_xsd_XsdProcessType_literals_[5] =
{
  "HYBRID",
  "PRICE",
  "RATE",
  "SPREAD",
  "WITHDRAW"
};

const XsdProcessType::value XsdProcessType::
_xsd_XsdProcessType_indexes_[5] =
{
  ::XsdProcessType::HYBRID,
  ::XsdProcessType::PRICE,
  ::XsdProcessType::RATE,
  ::XsdProcessType::SPREAD,
  ::XsdProcessType::WITHDRAW
};

// XsdRateVolatilityType
//

XsdRateVolatilityType::
XsdRateVolatilityType (const xercesc::DOMElement& e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdRateVolatilityType_convert ();
}

XsdRateVolatilityType::
XsdRateVolatilityType (const xercesc::DOMAttr& a,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdRateVolatilityType_convert ();
}

XsdRateVolatilityType::
XsdRateVolatilityType (const ::std::string& s,
                       const xercesc::DOMElement* e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdRateVolatilityType_convert ();
}

XsdRateVolatilityType* XsdRateVolatilityType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdRateVolatilityType (*this, f, c);
}

XsdRateVolatilityType::value XsdRateVolatilityType::
_xsd_XsdRateVolatilityType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdRateVolatilityType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdRateVolatilityType_indexes_,
                    _xsd_XsdRateVolatilityType_indexes_ + 4,
                    *this,
                    c));

  if (i == _xsd_XsdRateVolatilityType_indexes_ + 4 || _xsd_XsdRateVolatilityType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdRateVolatilityType::
_xsd_XsdRateVolatilityType_literals_[4] =
{
  "CALLABLE",
  "CAPLET",
  "CAP_FLOOR",
  "SWAPTION"
};

const XsdRateVolatilityType::value XsdRateVolatilityType::
_xsd_XsdRateVolatilityType_indexes_[4] =
{
  ::XsdRateVolatilityType::CALLABLE,
  ::XsdRateVolatilityType::CAPLET,
  ::XsdRateVolatilityType::CAP_FLOOR,
  ::XsdRateVolatilityType::SWAPTION
};

// XsdScenarioType
//

XsdScenarioType::
XsdScenarioType (const xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdScenarioType_convert ();
}

XsdScenarioType::
XsdScenarioType (const xercesc::DOMAttr& a,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdScenarioType_convert ();
}

XsdScenarioType::
XsdScenarioType (const ::std::string& s,
                 const xercesc::DOMElement* e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdScenarioType_convert ();
}

XsdScenarioType* XsdScenarioType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdScenarioType (*this, f, c);
}

XsdScenarioType::value XsdScenarioType::
_xsd_XsdScenarioType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdScenarioType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdScenarioType_indexes_,
                    _xsd_XsdScenarioType_indexes_ + 4,
                    *this,
                    c));

  if (i == _xsd_XsdScenarioType_indexes_ + 4 || _xsd_XsdScenarioType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdScenarioType::
_xsd_XsdScenarioType_literals_[4] =
{
  "FIXED",
  "FORWARD",
  "RANDOM",
  "POOL"
};

const XsdScenarioType::value XsdScenarioType::
_xsd_XsdScenarioType_indexes_[4] =
{
  ::XsdScenarioType::FIXED,
  ::XsdScenarioType::FORWARD,
  ::XsdScenarioType::POOL,
  ::XsdScenarioType::RANDOM
};

// XsdSpreadType
//

XsdSpreadType::
XsdSpreadType (const xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdSpreadType_convert ();
}

XsdSpreadType::
XsdSpreadType (const xercesc::DOMAttr& a,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdSpreadType_convert ();
}

XsdSpreadType::
XsdSpreadType (const ::std::string& s,
               const xercesc::DOMElement* e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdSpreadType_convert ();
}

XsdSpreadType* XsdSpreadType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdSpreadType (*this, f, c);
}

XsdSpreadType::value XsdSpreadType::
_xsd_XsdSpreadType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdSpreadType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdSpreadType_indexes_,
                    _xsd_XsdSpreadType_indexes_ + 2,
                    *this,
                    c));

  if (i == _xsd_XsdSpreadType_indexes_ + 2 || _xsd_XsdSpreadType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdSpreadType::
_xsd_XsdSpreadType_literals_[2] =
{
  "OPTION_ADJUSTED",
  "ZERO_VOLATILITY"
};

const XsdSpreadType::value XsdSpreadType::
_xsd_XsdSpreadType_indexes_[2] =
{
  ::XsdSpreadType::OPTION_ADJUSTED,
  ::XsdSpreadType::ZERO_VOLATILITY
};

// XsdTermStructureType
//

XsdTermStructureType::
XsdTermStructureType (const xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdTermStructureType_convert ();
}

XsdTermStructureType::
XsdTermStructureType (const xercesc::DOMAttr& a,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdTermStructureType_convert ();
}

XsdTermStructureType::
XsdTermStructureType (const ::std::string& s,
                      const xercesc::DOMElement* e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdTermStructureType_convert ();
}

XsdTermStructureType* XsdTermStructureType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdTermStructureType (*this, f, c);
}

XsdTermStructureType::value XsdTermStructureType::
_xsd_XsdTermStructureType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdTermStructureType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdTermStructureType_indexes_,
                    _xsd_XsdTermStructureType_indexes_ + 8,
                    *this,
                    c));

  if (i == _xsd_XsdTermStructureType_indexes_ + 8 || _xsd_XsdTermStructureType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdTermStructureType::
_xsd_XsdTermStructureType_literals_[8] =
{
  "COMMODITY",
  "CORRELATION",
  "CURRENCY",
  "DISCOUNT",
  "HAZARD",
  "INFLATION",
  "EXPECTED_LOSS",
  "VOLATILITY"
};

const XsdTermStructureType::value XsdTermStructureType::
_xsd_XsdTermStructureType_indexes_[8] =
{
  ::XsdTermStructureType::COMMODITY,
  ::XsdTermStructureType::CORRELATION,
  ::XsdTermStructureType::CURRENCY,
  ::XsdTermStructureType::DISCOUNT,
  ::XsdTermStructureType::EXPECTED_LOSS,
  ::XsdTermStructureType::HAZARD,
  ::XsdTermStructureType::INFLATION,
  ::XsdTermStructureType::VOLATILITY
};

// XsdVolatilityBoundaryType
//

XsdVolatilityBoundaryType::
XsdVolatilityBoundaryType (const xercesc::DOMElement& e,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdVolatilityBoundaryType_convert ();
}

XsdVolatilityBoundaryType::
XsdVolatilityBoundaryType (const xercesc::DOMAttr& a,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdVolatilityBoundaryType_convert ();
}

XsdVolatilityBoundaryType::
XsdVolatilityBoundaryType (const ::std::string& s,
                           const xercesc::DOMElement* e,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdVolatilityBoundaryType_convert ();
}

XsdVolatilityBoundaryType* XsdVolatilityBoundaryType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdVolatilityBoundaryType (*this, f, c);
}

XsdVolatilityBoundaryType::value XsdVolatilityBoundaryType::
_xsd_XsdVolatilityBoundaryType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdVolatilityBoundaryType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdVolatilityBoundaryType_indexes_,
                    _xsd_XsdVolatilityBoundaryType_indexes_ + 6,
                    *this,
                    c));

  if (i == _xsd_XsdVolatilityBoundaryType_indexes_ + 6 || _xsd_XsdVolatilityBoundaryType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdVolatilityBoundaryType::
_xsd_XsdVolatilityBoundaryType_literals_[6] =
{
  "CHISQ_VARIANCE",
  "QUADRATIC_EXP",
  "QUADRATIC_EXP_MG",
  "REFLECT",
  "TRUNCATE_FULL",
  "TRUNCATE_PARTIAL"
};

const XsdVolatilityBoundaryType::value XsdVolatilityBoundaryType::
_xsd_XsdVolatilityBoundaryType_indexes_[6] =
{
  ::XsdVolatilityBoundaryType::CHISQ_VARIANCE,
  ::XsdVolatilityBoundaryType::QUADRATIC_EXP,
  ::XsdVolatilityBoundaryType::QUADRATIC_EXP_MG,
  ::XsdVolatilityBoundaryType::REFLECT,
  ::XsdVolatilityBoundaryType::TRUNCATE_FULL,
  ::XsdVolatilityBoundaryType::TRUNCATE_PARTIAL
};

// XsdVolatilityCategory
//

XsdVolatilityCategory::
XsdVolatilityCategory (const xercesc::DOMElement& e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdVolatilityCategory_convert ();
}

XsdVolatilityCategory::
XsdVolatilityCategory (const xercesc::DOMAttr& a,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdVolatilityCategory_convert ();
}

XsdVolatilityCategory::
XsdVolatilityCategory (const ::std::string& s,
                       const xercesc::DOMElement* e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdVolatilityCategory_convert ();
}

XsdVolatilityCategory* XsdVolatilityCategory::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdVolatilityCategory (*this, f, c);
}

XsdVolatilityCategory::value XsdVolatilityCategory::
_xsd_XsdVolatilityCategory_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdVolatilityCategory_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdVolatilityCategory_indexes_,
                    _xsd_XsdVolatilityCategory_indexes_ + 3,
                    *this,
                    c));

  if (i == _xsd_XsdVolatilityCategory_indexes_ + 3 || _xsd_XsdVolatilityCategory_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdVolatilityCategory::
_xsd_XsdVolatilityCategory_literals_[3] =
{
  "INFLATION",
  "PRICE",
  "RATE"
};

const XsdVolatilityCategory::value XsdVolatilityCategory::
_xsd_XsdVolatilityCategory_indexes_[3] =
{
  ::XsdVolatilityCategory::INFLATION,
  ::XsdVolatilityCategory::PRICE,
  ::XsdVolatilityCategory::RATE
};

// XsdVolatilityType
//

XsdVolatilityType::
XsdVolatilityType (const xercesc::DOMElement& e,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdVolatilityType_convert ();
}

XsdVolatilityType::
XsdVolatilityType (const xercesc::DOMAttr& a,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdVolatilityType_convert ();
}

XsdVolatilityType::
XsdVolatilityType (const ::std::string& s,
                   const xercesc::DOMElement* e,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdVolatilityType_convert ();
}

XsdVolatilityType* XsdVolatilityType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdVolatilityType (*this, f, c);
}

XsdVolatilityType::value XsdVolatilityType::
_xsd_XsdVolatilityType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdVolatilityType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdVolatilityType_indexes_,
                    _xsd_XsdVolatilityType_indexes_ + 8,
                    *this,
                    c));

  if (i == _xsd_XsdVolatilityType_indexes_ + 8 || _xsd_XsdVolatilityType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdVolatilityType::
_xsd_XsdVolatilityType_literals_[8] =
{
  "BLACK",
  "LOCAL",
  "CALLABLE",
  "CAPLET",
  "CAP_FLOOR",
  "SWAPTION",
  "YEAR_ON_YEAR",
  "ZERO_COUPON"
};

const XsdVolatilityType::value XsdVolatilityType::
_xsd_XsdVolatilityType_indexes_[8] =
{
  ::XsdVolatilityType::BLACK,
  ::XsdVolatilityType::CALLABLE,
  ::XsdVolatilityType::CAPLET,
  ::XsdVolatilityType::CAP_FLOOR,
  ::XsdVolatilityType::LOCAL,
  ::XsdVolatilityType::SWAPTION,
  ::XsdVolatilityType::YEAR_ON_YEAR,
  ::XsdVolatilityType::ZERO_COUPON
};

// XsdYieldType
//

XsdYieldType::
XsdYieldType (const xercesc::DOMElement& e,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
: ::xml_schema::string (e, f, c)
{
  _xsd_XsdYieldType_convert ();
}

XsdYieldType::
XsdYieldType (const xercesc::DOMAttr& a,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
: ::xml_schema::string (a, f, c)
{
  _xsd_XsdYieldType_convert ();
}

XsdYieldType::
XsdYieldType (const ::std::string& s,
              const xercesc::DOMElement* e,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
: ::xml_schema::string (s, e, f, c)
{
  _xsd_XsdYieldType_convert ();
}

XsdYieldType* XsdYieldType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdYieldType (*this, f, c);
}

XsdYieldType::value XsdYieldType::
_xsd_XsdYieldType_convert () const
{
  ::xsd::cxx::tree::enum_comparator< char > c (_xsd_XsdYieldType_literals_);
  const value* i (::std::lower_bound (
                    _xsd_XsdYieldType_indexes_,
                    _xsd_XsdYieldType_indexes_ + 4,
                    *this,
                    c));

  if (i == _xsd_XsdYieldType_indexes_ + 4 || _xsd_XsdYieldType_literals_[*i] != *this)
  {
    throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
  }

  return *i;
}

const char* const XsdYieldType::
_xsd_XsdYieldType_literals_[4] =
{
  "MATURITY",
  "CALL",
  "WORST",
  "CASHFLOW"
};

const XsdYieldType::value XsdYieldType::
_xsd_XsdYieldType_indexes_[4] =
{
  ::XsdYieldType::CALL,
  ::XsdYieldType::CASHFLOW,
  ::XsdYieldType::MATURITY,
  ::XsdYieldType::WORST
};

#include <ostream>

#include <xsd/cxx/tree/std-ostream-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::std_ostream_plate< 0, char >
  std_ostream_plate_init;
}

::std::ostream&
operator<< (::std::ostream& o, XsdConvexityMethod::value i)
{
  return o << XsdConvexityMethod::_xsd_XsdConvexityMethod_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdConvexityMethod& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdDiscountType::value i)
{
  return o << XsdDiscountType::_xsd_XsdDiscountType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdDiscountType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdPriceVolatilityType::value i)
{
  return o << XsdPriceVolatilityType::_xsd_XsdPriceVolatilityType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdPriceVolatilityType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdHazardType::value i)
{
  return o << XsdHazardType::_xsd_XsdHazardType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdHazardType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdOutputType::value i)
{
  return o << XsdOutputType::_xsd_XsdOutputType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdOutputType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdProcessType::value i)
{
  return o << XsdProcessType::_xsd_XsdProcessType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdProcessType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdRateVolatilityType::value i)
{
  return o << XsdRateVolatilityType::_xsd_XsdRateVolatilityType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdRateVolatilityType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdScenarioType::value i)
{
  return o << XsdScenarioType::_xsd_XsdScenarioType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdScenarioType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdSpreadType::value i)
{
  return o << XsdSpreadType::_xsd_XsdSpreadType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdSpreadType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdTermStructureType::value i)
{
  return o << XsdTermStructureType::_xsd_XsdTermStructureType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdTermStructureType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdVolatilityBoundaryType::value i)
{
  return o << XsdVolatilityBoundaryType::_xsd_XsdVolatilityBoundaryType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdVolatilityBoundaryType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdVolatilityCategory::value i)
{
  return o << XsdVolatilityCategory::_xsd_XsdVolatilityCategory_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdVolatilityCategory& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdVolatilityType::value i)
{
  return o << XsdVolatilityType::_xsd_XsdVolatilityType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdVolatilityType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

::std::ostream&
operator<< (::std::ostream& o, XsdYieldType::value i)
{
  return o << XsdYieldType::_xsd_XsdYieldType_literals_[i];
}

::std::ostream&
operator<< (::std::ostream& o, const XsdYieldType& i)
{
  return o << static_cast< const ::xml_schema::string& > (i);
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

void
operator<< (xercesc::DOMElement& e, const XsdConvexityMethod& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdConvexityMethod& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdConvexityMethod& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdDiscountType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdDiscountType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdDiscountType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdPriceVolatilityType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdPriceVolatilityType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdPriceVolatilityType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdHazardType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdHazardType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdHazardType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdOutputType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdOutputType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdOutputType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdProcessType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdProcessType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdProcessType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdRateVolatilityType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdRateVolatilityType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdRateVolatilityType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdScenarioType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdScenarioType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdScenarioType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdSpreadType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdSpreadType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdSpreadType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdTermStructureType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdTermStructureType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdTermStructureType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdVolatilityBoundaryType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdVolatilityBoundaryType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdVolatilityBoundaryType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdVolatilityCategory& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdVolatilityCategory& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdVolatilityCategory& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdVolatilityType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdVolatilityType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdVolatilityType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMElement& e, const XsdYieldType& i)
{
  e << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (xercesc::DOMAttr& a, const XsdYieldType& i)
{
  a << static_cast< const ::xml_schema::string& > (i);
}

void
operator<< (::xml_schema::list_stream& l,
            const XsdYieldType& i)
{
  l << static_cast< const ::xml_schema::string& > (i);
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

