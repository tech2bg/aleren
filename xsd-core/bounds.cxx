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
#include "precompiled.h"
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "bounds.hxx"

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

// XsdDoubleBounds
//

XsdDoubleBounds::
XsdDoubleBounds ()
: ::xml_schema::type (),
  lower_ (::xml_schema::flags (), this),
  upper_ (::xml_schema::flags (), this)
{
}

XsdDoubleBounds::
XsdDoubleBounds (const XsdDoubleBounds& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  lower_ (x.lower_, f, this),
  upper_ (x.upper_, f, this)
{
}

XsdDoubleBounds::
XsdDoubleBounds (const xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  lower_ (f, this),
  upper_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
    this->parse (p, f);
  }
}

void XsdDoubleBounds::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  while (p.more_attributes ())
  {
    const xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "lower" && n.namespace_ ().empty ())
    {
      this->lower_.set (lower_traits::create (i, f, this));
      continue;
    }

    if (n.name () == "upper" && n.namespace_ ().empty ())
    {
      this->upper_.set (upper_traits::create (i, f, this));
      continue;
    }
  }
}

XsdDoubleBounds* XsdDoubleBounds::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdDoubleBounds (*this, f, c);
}

XsdDoubleBounds::
~XsdDoubleBounds ()
{
}

bool
operator== (const XsdDoubleBounds& x, const XsdDoubleBounds& y)
{
  if (!(x.lower () == y.lower ()))
    return false;

  if (!(x.upper () == y.upper ()))
    return false;

  return true;
}

bool
operator!= (const XsdDoubleBounds& x, const XsdDoubleBounds& y)
{
  return !(x == y);
}

// XsdDateBounds
//

XsdDateBounds::
XsdDateBounds ()
: ::xml_schema::type (),
  lower_ (::xml_schema::flags (), this),
  upper_ (::xml_schema::flags (), this)
{
}

XsdDateBounds::
XsdDateBounds (const XsdDateBounds& x,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  lower_ (x.lower_, f, this),
  upper_ (x.upper_, f, this)
{
}

XsdDateBounds::
XsdDateBounds (const xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  lower_ (f, this),
  upper_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
    this->parse (p, f);
  }
}

void XsdDateBounds::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  while (p.more_attributes ())
  {
    const xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "lower" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< lower_type > r (
        lower_traits::create (i, f, this));

      this->lower_.set (r);
      continue;
    }

    if (n.name () == "upper" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< upper_type > r (
        upper_traits::create (i, f, this));

      this->upper_.set (r);
      continue;
    }
  }
}

XsdDateBounds* XsdDateBounds::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdDateBounds (*this, f, c);
}

XsdDateBounds::
~XsdDateBounds ()
{
}

bool
operator== (const XsdDateBounds& x, const XsdDateBounds& y)
{
  if (!(x.lower () == y.lower ()))
    return false;

  if (!(x.upper () == y.upper ()))
    return false;

  return true;
}

bool
operator!= (const XsdDateBounds& x, const XsdDateBounds& y)
{
  return !(x == y);
}

// XsdTimeBounds
//

XsdTimeBounds::
XsdTimeBounds ()
: ::xml_schema::type (),
  lower_ (::xml_schema::flags (), this),
  upper_ (::xml_schema::flags (), this)
{
}

XsdTimeBounds::
XsdTimeBounds (const XsdTimeBounds& x,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  lower_ (x.lower_, f, this),
  upper_ (x.upper_, f, this)
{
}

XsdTimeBounds::
XsdTimeBounds (const xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  lower_ (f, this),
  upper_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
    this->parse (p, f);
  }
}

void XsdTimeBounds::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  while (p.more_attributes ())
  {
    const xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "lower" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< lower_type > r (
        lower_traits::create (i, f, this));

      this->lower_.set (r);
      continue;
    }

    if (n.name () == "upper" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< upper_type > r (
        upper_traits::create (i, f, this));

      this->upper_.set (r);
      continue;
    }
  }
}

XsdTimeBounds* XsdTimeBounds::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdTimeBounds (*this, f, c);
}

XsdTimeBounds::
~XsdTimeBounds ()
{
}

bool
operator== (const XsdTimeBounds& x, const XsdTimeBounds& y)
{
  if (!(x.lower () == y.lower ()))
    return false;

  if (!(x.upper () == y.upper ()))
    return false;

  return true;
}

bool
operator!= (const XsdTimeBounds& x, const XsdTimeBounds& y)
{
  return !(x == y);
}

// XsdTenorBounds
//

XsdTenorBounds::
XsdTenorBounds ()
: ::xml_schema::type (),
  lower_ (::xml_schema::flags (), this),
  upper_ (::xml_schema::flags (), this)
{
}

XsdTenorBounds::
XsdTenorBounds (const XsdTenorBounds& x,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  lower_ (x.lower_, f, this),
  upper_ (x.upper_, f, this)
{
}

XsdTenorBounds::
XsdTenorBounds (const xercesc::DOMElement& e,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  lower_ (f, this),
  upper_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
    this->parse (p, f);
  }
}

void XsdTenorBounds::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  while (p.more_attributes ())
  {
    const xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "lower" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< lower_type > r (
        lower_traits::create (i, f, this));

      this->lower_.set (r);
      continue;
    }

    if (n.name () == "upper" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< upper_type > r (
        upper_traits::create (i, f, this));

      this->upper_.set (r);
      continue;
    }
  }
}

XsdTenorBounds* XsdTenorBounds::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdTenorBounds (*this, f, c);
}

XsdTenorBounds::
~XsdTenorBounds ()
{
}

bool
operator== (const XsdTenorBounds& x, const XsdTenorBounds& y)
{
  if (!(x.lower () == y.lower ()))
    return false;

  if (!(x.upper () == y.upper ()))
    return false;

  return true;
}

bool
operator!= (const XsdTenorBounds& x, const XsdTenorBounds& y)
{
  return !(x == y);
}

// XsdIntegerBounds
//

XsdIntegerBounds::
XsdIntegerBounds ()
: ::xml_schema::type (),
  lower_ (::xml_schema::flags (), this),
  upper_ (::xml_schema::flags (), this)
{
}

XsdIntegerBounds::
XsdIntegerBounds (const XsdIntegerBounds& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  lower_ (x.lower_, f, this),
  upper_ (x.upper_, f, this)
{
}

XsdIntegerBounds::
XsdIntegerBounds (const xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  lower_ (f, this),
  upper_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
    this->parse (p, f);
  }
}

void XsdIntegerBounds::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  while (p.more_attributes ())
  {
    const xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "lower" && n.namespace_ ().empty ())
    {
      this->lower_.set (lower_traits::create (i, f, this));
      continue;
    }

    if (n.name () == "upper" && n.namespace_ ().empty ())
    {
      this->upper_.set (upper_traits::create (i, f, this));
      continue;
    }
  }
}

XsdIntegerBounds* XsdIntegerBounds::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdIntegerBounds (*this, f, c);
}

XsdIntegerBounds::
~XsdIntegerBounds ()
{
}

bool
operator== (const XsdIntegerBounds& x, const XsdIntegerBounds& y)
{
  if (!(x.lower () == y.lower ()))
    return false;

  if (!(x.upper () == y.upper ()))
    return false;

  return true;
}

bool
operator!= (const XsdIntegerBounds& x, const XsdIntegerBounds& y)
{
  return !(x == y);
}

// XsdSizeBounds
//

XsdSizeBounds::
XsdSizeBounds ()
: ::xml_schema::type (),
  lower_ (::xml_schema::flags (), this),
  upper_ (::xml_schema::flags (), this)
{
}

XsdSizeBounds::
XsdSizeBounds (const XsdSizeBounds& x,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  lower_ (x.lower_, f, this),
  upper_ (x.upper_, f, this)
{
}

XsdSizeBounds::
XsdSizeBounds (const xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  lower_ (f, this),
  upper_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
    this->parse (p, f);
  }
}

void XsdSizeBounds::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  while (p.more_attributes ())
  {
    const xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "lower" && n.namespace_ ().empty ())
    {
      this->lower_.set (lower_traits::create (i, f, this));
      continue;
    }

    if (n.name () == "upper" && n.namespace_ ().empty ())
    {
      this->upper_.set (upper_traits::create (i, f, this));
      continue;
    }
  }
}

XsdSizeBounds* XsdSizeBounds::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdSizeBounds (*this, f, c);
}

XsdSizeBounds::
~XsdSizeBounds ()
{
}

bool
operator== (const XsdSizeBounds& x, const XsdSizeBounds& y)
{
  if (!(x.lower () == y.lower ()))
    return false;

  if (!(x.upper () == y.upper ()))
    return false;

  return true;
}

bool
operator!= (const XsdSizeBounds& x, const XsdSizeBounds& y)
{
  return !(x == y);
}

#include <ostream>

#include <xsd/cxx/tree/std-ostream-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::std_ostream_plate< 0, char >
  std_ostream_plate_init;
}

::std::ostream&
operator<< (::std::ostream& o, const XsdDoubleBounds& i)
{
  if (i.lower ())
  {
    o << ::std::endl << "lower: " << *i.lower ();
  }

  if (i.upper ())
  {
    o << ::std::endl << "upper: " << *i.upper ();
  }

  return o;
}

::std::ostream&
operator<< (::std::ostream& o, const XsdDateBounds& i)
{
  if (i.lower ())
  {
    o << ::std::endl << "lower: " << *i.lower ();
  }

  if (i.upper ())
  {
    o << ::std::endl << "upper: " << *i.upper ();
  }

  return o;
}

::std::ostream&
operator<< (::std::ostream& o, const XsdTimeBounds& i)
{
  if (i.lower ())
  {
    o << ::std::endl << "lower: " << *i.lower ();
  }

  if (i.upper ())
  {
    o << ::std::endl << "upper: " << *i.upper ();
  }

  return o;
}

::std::ostream&
operator<< (::std::ostream& o, const XsdTenorBounds& i)
{
  if (i.lower ())
  {
    o << ::std::endl << "lower: " << *i.lower ();
  }

  if (i.upper ())
  {
    o << ::std::endl << "upper: " << *i.upper ();
  }

  return o;
}

::std::ostream&
operator<< (::std::ostream& o, const XsdIntegerBounds& i)
{
  if (i.lower ())
  {
    o << ::std::endl << "lower: " << *i.lower ();
  }

  if (i.upper ())
  {
    o << ::std::endl << "upper: " << *i.upper ();
  }

  return o;
}

::std::ostream&
operator<< (::std::ostream& o, const XsdSizeBounds& i)
{
  if (i.lower ())
  {
    o << ::std::endl << "lower: " << *i.lower ();
  }

  if (i.upper ())
  {
    o << ::std::endl << "upper: " << *i.upper ();
  }

  return o;
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
operator<< (xercesc::DOMElement& e, const XsdDoubleBounds& i)
{
  e << static_cast< const ::xml_schema::type& > (i);

  // lower
  //
  if (i.lower ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "lower",
        e));

    a << ::xml_schema::as_double(*i.lower ());
  }

  // upper
  //
  if (i.upper ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "upper",
        e));

    a << ::xml_schema::as_double(*i.upper ());
  }
}

void
operator<< (xercesc::DOMElement& e, const XsdDateBounds& i)
{
  e << static_cast< const ::xml_schema::type& > (i);

  // lower
  //
  if (i.lower ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "lower",
        e));

    a << *i.lower ();
  }

  // upper
  //
  if (i.upper ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "upper",
        e));

    a << *i.upper ();
  }
}

void
operator<< (xercesc::DOMElement& e, const XsdTimeBounds& i)
{
  e << static_cast< const ::xml_schema::type& > (i);

  // lower
  //
  if (i.lower ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "lower",
        e));

    a << *i.lower ();
  }

  // upper
  //
  if (i.upper ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "upper",
        e));

    a << *i.upper ();
  }
}

void
operator<< (xercesc::DOMElement& e, const XsdTenorBounds& i)
{
  e << static_cast< const ::xml_schema::type& > (i);

  // lower
  //
  if (i.lower ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "lower",
        e));

    a << *i.lower ();
  }

  // upper
  //
  if (i.upper ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "upper",
        e));

    a << *i.upper ();
  }
}

void
operator<< (xercesc::DOMElement& e, const XsdIntegerBounds& i)
{
  e << static_cast< const ::xml_schema::type& > (i);

  // lower
  //
  if (i.lower ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "lower",
        e));

    a << *i.lower ();
  }

  // upper
  //
  if (i.upper ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "upper",
        e));

    a << *i.upper ();
  }
}

void
operator<< (xercesc::DOMElement& e, const XsdSizeBounds& i)
{
  e << static_cast< const ::xml_schema::type& > (i);

  // lower
  //
  if (i.lower ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "lower",
        e));

    a << *i.lower ();
  }

  // upper
  //
  if (i.upper ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "upper",
        e));

    a << *i.upper ();
  }
}

#include <xsd/cxx/tree/stream-extraction-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::stream_extraction_plate< 0, boost::archive::binary_iarchive, char >
  stream_extraction_plate_init_0;
}

XsdDoubleBounds::
XsdDoubleBounds (::xml_schema::istream< boost::archive::binary_iarchive >& s,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
: ::xml_schema::type (s, f, c),
  lower_ (f, this),
  upper_ (f, this)
{
  this->parse (s, f);
}

void XsdDoubleBounds::
parse (::xml_schema::istream< boost::archive::binary_iarchive >& s,
       ::xml_schema::flags f)
{
  {
    bool p;
    s >> p;
    if (p)
    {
      lower_type r;
      s >> r;
      this->lower_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      upper_type r;
      s >> r;
      this->upper_.set (r);
    }
  }
}

XsdDateBounds::
XsdDateBounds (::xml_schema::istream< boost::archive::binary_iarchive >& s,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (s, f, c),
  lower_ (f, this),
  upper_ (f, this)
{
  this->parse (s, f);
}

void XsdDateBounds::
parse (::xml_schema::istream< boost::archive::binary_iarchive >& s,
       ::xml_schema::flags f)
{
  {
    bool p;
    s >> p;
    if (p)
    {
      ::std::auto_ptr< lower_type > r (new lower_type (s, f, this));
      this->lower_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      ::std::auto_ptr< upper_type > r (new upper_type (s, f, this));
      this->upper_.set (r);
    }
  }
}

XsdTimeBounds::
XsdTimeBounds (::xml_schema::istream< boost::archive::binary_iarchive >& s,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (s, f, c),
  lower_ (f, this),
  upper_ (f, this)
{
  this->parse (s, f);
}

void XsdTimeBounds::
parse (::xml_schema::istream< boost::archive::binary_iarchive >& s,
       ::xml_schema::flags f)
{
  {
    bool p;
    s >> p;
    if (p)
    {
      ::std::auto_ptr< lower_type > r (new lower_type (s, f, this));
      this->lower_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      ::std::auto_ptr< upper_type > r (new upper_type (s, f, this));
      this->upper_.set (r);
    }
  }
}

XsdTenorBounds::
XsdTenorBounds (::xml_schema::istream< boost::archive::binary_iarchive >& s,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
: ::xml_schema::type (s, f, c),
  lower_ (f, this),
  upper_ (f, this)
{
  this->parse (s, f);
}

void XsdTenorBounds::
parse (::xml_schema::istream< boost::archive::binary_iarchive >& s,
       ::xml_schema::flags f)
{
  {
    bool p;
    s >> p;
    if (p)
    {
      ::std::auto_ptr< lower_type > r (new lower_type (s, f, this));
      this->lower_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      ::std::auto_ptr< upper_type > r (new upper_type (s, f, this));
      this->upper_.set (r);
    }
  }
}

XsdIntegerBounds::
XsdIntegerBounds (::xml_schema::istream< boost::archive::binary_iarchive >& s,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
: ::xml_schema::type (s, f, c),
  lower_ (f, this),
  upper_ (f, this)
{
  this->parse (s, f);
}

void XsdIntegerBounds::
parse (::xml_schema::istream< boost::archive::binary_iarchive >& s,
       ::xml_schema::flags f)
{
  {
    bool p;
    s >> p;
    if (p)
    {
      lower_type r;
      s >> r;
      this->lower_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      upper_type r;
      s >> r;
      this->upper_.set (r);
    }
  }
}

XsdSizeBounds::
XsdSizeBounds (::xml_schema::istream< boost::archive::binary_iarchive >& s,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (s, f, c),
  lower_ (f, this),
  upper_ (f, this)
{
  this->parse (s, f);
}

void XsdSizeBounds::
parse (::xml_schema::istream< boost::archive::binary_iarchive >& s,
       ::xml_schema::flags f)
{
  {
    bool p;
    s >> p;
    if (p)
    {
      lower_type r;
      s >> r;
      this->lower_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      upper_type r;
      s >> r;
      this->upper_.set (r);
    }
  }
}

#include <xsd/cxx/tree/stream-insertion-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::stream_insertion_plate< 0, boost::archive::binary_oarchive, char >
  stream_insertion_plate_init_0;
}

::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s,
            const XsdDoubleBounds& x)
{
  {
    bool p (x.lower ());
    s << p;
    if (p)
      s << *x.lower ();
  }

  {
    bool p (x.upper ());
    s << p;
    if (p)
      s << *x.upper ();
  }

  return s;
}

::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s,
            const XsdDateBounds& x)
{
  {
    bool p (x.lower ());
    s << p;
    if (p)
      s << *x.lower ();
  }

  {
    bool p (x.upper ());
    s << p;
    if (p)
      s << *x.upper ();
  }

  return s;
}

::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s,
            const XsdTimeBounds& x)
{
  {
    bool p (x.lower ());
    s << p;
    if (p)
      s << *x.lower ();
  }

  {
    bool p (x.upper ());
    s << p;
    if (p)
      s << *x.upper ();
  }

  return s;
}

::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s,
            const XsdTenorBounds& x)
{
  {
    bool p (x.lower ());
    s << p;
    if (p)
      s << *x.lower ();
  }

  {
    bool p (x.upper ());
    s << p;
    if (p)
      s << *x.upper ();
  }

  return s;
}

::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s,
            const XsdIntegerBounds& x)
{
  {
    bool p (x.lower ());
    s << p;
    if (p)
      s << *x.lower ();
  }

  {
    bool p (x.upper ());
    s << p;
    if (p)
      s << *x.upper ();
  }

  return s;
}

::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s,
            const XsdSizeBounds& x)
{
  {
    bool p (x.lower ());
    s << p;
    if (p)
      s << *x.lower ();
  }

  {
    bool p (x.upper ());
    s << p;
    if (p)
      s << *x.upper ();
  }

  return s;
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
