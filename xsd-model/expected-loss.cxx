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

#include "expected-loss.hxx"

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

// XsdExpectedLossSurface
//

XsdExpectedLossSurface::
XsdExpectedLossSurface ()
: ::XsdTermStructure ()
{
}

XsdExpectedLossSurface::
XsdExpectedLossSurface (const XsdExpectedLossSurface& x,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
: ::XsdTermStructure (x, f, c)
{
}

XsdExpectedLossSurface::
XsdExpectedLossSurface (const xercesc::DOMElement& e,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
: ::XsdTermStructure (e, f, c)
{
}

XsdExpectedLossSurface* XsdExpectedLossSurface::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdExpectedLossSurface (*this, f, c);
}

XsdExpectedLossSurface::
~XsdExpectedLossSurface ()
{
}

static
const ::xsd::cxx::tree::type_factory_initializer< 0, char, XsdExpectedLossSurface >
_xsd_XsdExpectedLossSurface_type_factory_init (
  "XsdExpectedLossSurface",
  "");

static
const ::xsd::cxx::tree::comparison_initializer< 0, char, XsdExpectedLossSurface >
_xsd_XsdExpectedLossSurface_comparison_init;

#include <ostream>

#include <xsd/cxx/tree/std-ostream-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::std_ostream_plate< 0, char >
  std_ostream_plate_init;
}

::std::ostream&
operator<< (::std::ostream& o, const XsdExpectedLossSurface& i)
{
  o << static_cast< const ::XsdTermStructure& > (i);

  return o;
}

static
const ::xsd::cxx::tree::std_ostream_initializer< 0, char, XsdExpectedLossSurface >
_xsd_XsdExpectedLossSurface_std_ostream_init;

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
operator<< (xercesc::DOMElement& e, const XsdExpectedLossSurface& i)
{
  e << static_cast< const ::XsdTermStructure& > (i);
}

static
const ::xsd::cxx::tree::type_serializer_initializer< 0, char, XsdExpectedLossSurface >
_xsd_XsdExpectedLossSurface_type_serializer_init (
  "XsdExpectedLossSurface",
  "");


#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
