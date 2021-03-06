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

#include "input.hxx"

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

// XsdInputDocument
//

XsdInputDocument::
XsdInputDocument ()
: ::xml_schema::type (),
  schema_ (::xml_schema::flags (), this),
  rules_ (::xml_schema::flags (), this),
  name_ (::xml_schema::flags (), this),
  client_ (::xml_schema::flags (), this),
  timeStamp_ (::xml_schema::flags (), this),
  documentID_ (::xml_schema::flags (), this)
{
}

XsdInputDocument::
XsdInputDocument (const documentID_type& documentID)
: ::xml_schema::type (),
  schema_ (::xml_schema::flags (), this),
  rules_ (::xml_schema::flags (), this),
  name_ (::xml_schema::flags (), this),
  client_ (::xml_schema::flags (), this),
  timeStamp_ (::xml_schema::flags (), this),
  documentID_ (documentID, ::xml_schema::flags (), this)
{
}

XsdInputDocument::
XsdInputDocument (const XsdInputDocument& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  schema_ (x.schema_, f, this),
  rules_ (x.rules_, f, this),
  name_ (x.name_, f, this),
  client_ (x.client_, f, this),
  timeStamp_ (x.timeStamp_, f, this),
  documentID_ (x.documentID_, f, this)
{
}

XsdInputDocument::
XsdInputDocument (const xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  schema_ (f, this),
  rules_ (f, this),
  name_ (f, this),
  client_ (f, this),
  timeStamp_ (f, this),
  documentID_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
    this->parse (p, f);
  }
}

void XsdInputDocument::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  for (; p.more_elements (); p.next_element ())
  {
    const xercesc::DOMElement& i (p.cur_element ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    // schema
    //
    {
      ::xsd::cxx::tree::type_factory_map< char >& tfm (
        ::xsd::cxx::tree::type_factory_map_instance< 0, char > ());

      ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
        tfm.create (
          "schema",
          "",
          &::xsd::cxx::tree::factory_impl< schema_type >,
          false, true, i, n, f, this));

      if (tmp.get () != 0)
      {
        ::std::auto_ptr< schema_type > r (
          dynamic_cast< schema_type* > (tmp.get ()));

        if (r.get ())
          tmp.release ();
        else
          throw ::xsd::cxx::tree::not_derived< char > ();

        this->schema_.push_back (r);
        continue;
      }
    }

    // rules
    //
    if (n.name () == "rules" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< rules_type > r (
        rules_traits::create (i, f, this));

      if (!this->rules_)
      {
        this->rules_.set (r);
        continue;
      }
    }

    break;
  }

  while (p.more_attributes ())
  {
    const xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "name" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< name_type > r (
        name_traits::create (i, f, this));

      this->name_.set (r);
      continue;
    }

    if (n.name () == "client" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< client_type > r (
        client_traits::create (i, f, this));

      this->client_.set (r);
      continue;
    }

    if (n.name () == "timeStamp" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< timeStamp_type > r (
        timeStamp_traits::create (i, f, this));

      this->timeStamp_.set (r);
      continue;
    }

    if (n.name () == "documentID" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< documentID_type > r (
        documentID_traits::create (i, f, this));

      this->documentID_.set (r);
      continue;
    }
  }

  if (!documentID_.present ())
  {
    throw ::xsd::cxx::tree::expected_attribute< char > (
      "documentID",
      "");
  }
}

XsdInputDocument* XsdInputDocument::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdInputDocument (*this, f, c);
}

XsdInputDocument::
~XsdInputDocument ()
{
}

bool
operator== (const XsdInputDocument& x, const XsdInputDocument& y)
{
  {
    ::xsd::cxx::tree::comparison_map< char >& cm (
      ::xsd::cxx::tree::comparison_map_instance< 0, char > ());

    XsdInputDocument::schema_sequence a (x.schema ()), b (y.schema ());

    if (a.size () != b.size ())
      return false;

    for (XsdInputDocument::schema_const_iterator
         ai (a.begin ()), bi (b.begin ()), ae (a.end ()), be (b.end ());
         ai != ae; ++ai, ++bi)
    {
      if (!cm.compare (*ai, *bi))
        return false;
    }
  }

  if (!(x.rules () == y.rules ()))
    return false;

  if (!(x.name () == y.name ()))
    return false;

  if (!(x.client () == y.client ()))
    return false;

  if (!(x.timeStamp () == y.timeStamp ()))
    return false;

  if (!(x.documentID () == y.documentID ()))
    return false;

  return true;
}

bool
operator!= (const XsdInputDocument& x, const XsdInputDocument& y)
{
  return !(x == y);
}

// XsdInputRules
//

XsdInputRules::
XsdInputRules ()
: ::xml_schema::type (),
  resolveDependenciesAtInsertion_ (::xml_schema::flags (), this),
  allowUniqueIDOverwrite_ (::xml_schema::flags (), this),
  clearCacheAfterProcessing_ (::xml_schema::flags (), this),
  includeCallStackInErrorMessages_ (::xml_schema::flags (), this)
{
}

XsdInputRules::
XsdInputRules (const XsdInputRules& x,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  resolveDependenciesAtInsertion_ (x.resolveDependenciesAtInsertion_, f, this),
  allowUniqueIDOverwrite_ (x.allowUniqueIDOverwrite_, f, this),
  clearCacheAfterProcessing_ (x.clearCacheAfterProcessing_, f, this),
  includeCallStackInErrorMessages_ (x.includeCallStackInErrorMessages_, f, this)
{
}

XsdInputRules::
XsdInputRules (const xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  resolveDependenciesAtInsertion_ (f, this),
  allowUniqueIDOverwrite_ (f, this),
  clearCacheAfterProcessing_ (f, this),
  includeCallStackInErrorMessages_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
    this->parse (p, f);
  }
}

void XsdInputRules::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  for (; p.more_elements (); p.next_element ())
  {
    const xercesc::DOMElement& i (p.cur_element ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    // resolveDependenciesAtInsertion
    //
    if (n.name () == "resolveDependenciesAtInsertion" && n.namespace_ ().empty ())
    {
      if (!this->resolveDependenciesAtInsertion_)
      {
        this->resolveDependenciesAtInsertion_.set (resolveDependenciesAtInsertion_traits::create (i, f, this));
        continue;
      }
    }

    // allowUniqueIDOverwrite
    //
    if (n.name () == "allowUniqueIDOverwrite" && n.namespace_ ().empty ())
    {
      if (!this->allowUniqueIDOverwrite_)
      {
        this->allowUniqueIDOverwrite_.set (allowUniqueIDOverwrite_traits::create (i, f, this));
        continue;
      }
    }

    // clearCacheAfterProcessing
    //
    if (n.name () == "clearCacheAfterProcessing" && n.namespace_ ().empty ())
    {
      if (!this->clearCacheAfterProcessing_)
      {
        this->clearCacheAfterProcessing_.set (clearCacheAfterProcessing_traits::create (i, f, this));
        continue;
      }
    }

    // includeCallStackInErrorMessages
    //
    if (n.name () == "includeCallStackInErrorMessages" && n.namespace_ ().empty ())
    {
      if (!this->includeCallStackInErrorMessages_)
      {
        this->includeCallStackInErrorMessages_.set (includeCallStackInErrorMessages_traits::create (i, f, this));
        continue;
      }
    }

    break;
  }
}

XsdInputRules* XsdInputRules::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class XsdInputRules (*this, f, c);
}

XsdInputRules::
~XsdInputRules ()
{
}

bool
operator== (const XsdInputRules& x, const XsdInputRules& y)
{
  if (!(x.resolveDependenciesAtInsertion () == y.resolveDependenciesAtInsertion ()))
    return false;

  if (!(x.allowUniqueIDOverwrite () == y.allowUniqueIDOverwrite ()))
    return false;

  if (!(x.clearCacheAfterProcessing () == y.clearCacheAfterProcessing ()))
    return false;

  if (!(x.includeCallStackInErrorMessages () == y.includeCallStackInErrorMessages ()))
    return false;

  return true;
}

bool
operator!= (const XsdInputRules& x, const XsdInputRules& y)
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
operator<< (::std::ostream& o, const XsdInputDocument& i)
{
  {
    ::xsd::cxx::tree::std_ostream_map< char >& om (
      ::xsd::cxx::tree::std_ostream_map_instance< 0, char > ());

    for (XsdInputDocument::schema_const_iterator
         b (i.schema ().begin ()), e (i.schema ().end ());
         b != e; ++b)
    {
      o << ::std::endl << "schema: ";
      om.insert (o, *b);
    }
  }

  if (i.rules ())
  {
    o << ::std::endl << "rules: " << *i.rules ();
  }

  if (i.name ())
  {
    o << ::std::endl << "name: " << *i.name ();
  }

  if (i.client ())
  {
    o << ::std::endl << "client: " << *i.client ();
  }

  if (i.timeStamp ())
  {
    o << ::std::endl << "timeStamp: " << *i.timeStamp ();
  }

  o << ::std::endl << "documentID: " << i.documentID ();
  return o;
}

::std::ostream&
operator<< (::std::ostream& o, const XsdInputRules& i)
{
  if (i.resolveDependenciesAtInsertion ())
  {
    o << ::std::endl << "resolveDependenciesAtInsertion: " << *i.resolveDependenciesAtInsertion ();
  }

  if (i.allowUniqueIDOverwrite ())
  {
    o << ::std::endl << "allowUniqueIDOverwrite: " << *i.allowUniqueIDOverwrite ();
  }

  if (i.clearCacheAfterProcessing ())
  {
    o << ::std::endl << "clearCacheAfterProcessing: " << *i.clearCacheAfterProcessing ();
  }

  if (i.includeCallStackInErrorMessages ())
  {
    o << ::std::endl << "includeCallStackInErrorMessages: " << *i.includeCallStackInErrorMessages ();
  }

  return o;
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (const ::std::string& u,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::tree::error_handler< char > h;

  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      u, h, p, f));

  h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

  ::std::auto_ptr< ::XsdInputDocument > r (
    ::xsdInputDocument (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (const ::std::string& u,
                  ::xml_schema::error_handler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      u, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::XsdInputDocument > r (
    ::xsdInputDocument (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (const ::std::string& u,
                  xercesc::DOMErrorHandler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      u, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::XsdInputDocument > r (
    ::xsdInputDocument (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (::std::istream& is,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::xsdInputDocument (isrc, f, p);
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (::std::istream& is,
                  ::xml_schema::error_handler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::xsdInputDocument (isrc, h, f, p);
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (::std::istream& is,
                  xercesc::DOMErrorHandler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::xsdInputDocument (isrc, h, f, p);
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (::std::istream& is,
                  const ::std::string& sid,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::xsdInputDocument (isrc, f, p);
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (::std::istream& is,
                  const ::std::string& sid,
                  ::xml_schema::error_handler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::xsdInputDocument (isrc, h, f, p);
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (::std::istream& is,
                  const ::std::string& sid,
                  xercesc::DOMErrorHandler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::xsdInputDocument (isrc, h, f, p);
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (xercesc::InputSource& i,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xsd::cxx::tree::error_handler< char > h;

  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      i, h, p, f));

  h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

  ::std::auto_ptr< ::XsdInputDocument > r (
    ::xsdInputDocument (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (xercesc::InputSource& i,
                  ::xml_schema::error_handler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      i, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::XsdInputDocument > r (
    ::xsdInputDocument (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (xercesc::InputSource& i,
                  xercesc::DOMErrorHandler& h,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (
      i, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::XsdInputDocument > r (
    ::xsdInputDocument (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (const xercesc::DOMDocument& d,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties& p)
{
  if (f & ::xml_schema::flags::keep_dom)
  {
    ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > c (
      static_cast< xercesc::DOMDocument* > (d.cloneNode (true)));

    ::std::auto_ptr< ::XsdInputDocument > r (
      ::xsdInputDocument (
        c, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  const xercesc::DOMElement& e (*d.getDocumentElement ());
  const ::xsd::cxx::xml::qualified_name< char > n (
    ::xsd::cxx::xml::dom::name< char > (e));

  if (n.name () == "xsdInputDocument" &&
      n.namespace_ () == "")
  {
    ::std::auto_ptr< ::XsdInputDocument > r (
      ::xsd::cxx::tree::traits< ::XsdInputDocument, char >::create (
        e, f, 0));
    return r;
  }

  throw ::xsd::cxx::tree::unexpected_element < char > (
    n.name (),
    n.namespace_ (),
    "xsdInputDocument",
    "");
}

::std::auto_ptr< ::XsdInputDocument >
xsdInputDocument (::xml_schema::dom::auto_ptr< xercesc::DOMDocument >& d,
                  ::xml_schema::flags f,
                  const ::xml_schema::properties&)
{
  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > c (
    ((f & ::xml_schema::flags::keep_dom) &&
     !(f & ::xml_schema::flags::own_dom))
    ? static_cast< xercesc::DOMDocument* > (d->cloneNode (true))
    : 0);

  xercesc::DOMDocument& doc (c.get () ? *c : *d);
  const xercesc::DOMElement& e (*doc.getDocumentElement ());

  const ::xsd::cxx::xml::qualified_name< char > n (
    ::xsd::cxx::xml::dom::name< char > (e));

  if (f & ::xml_schema::flags::keep_dom)
    doc.setUserData (::xml_schema::dom::tree_node_key,
                     (c.get () ? &c : &d),
                     0);

  if (n.name () == "xsdInputDocument" &&
      n.namespace_ () == "")
  {
    ::std::auto_ptr< ::XsdInputDocument > r (
      ::xsd::cxx::tree::traits< ::XsdInputDocument, char >::create (
        e, f, 0));
    return r;
  }

  throw ::xsd::cxx::tree::unexpected_element < char > (
    n.name (),
    n.namespace_ (),
    "xsdInputDocument",
    "");
}

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
operator<< (xercesc::DOMElement& e, const XsdInputDocument& i)
{
  e << static_cast< const ::xml_schema::type& > (i);

  // schema
  //
  {
    ::xsd::cxx::tree::type_serializer_map< char >& tsm (
      ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

    for (XsdInputDocument::schema_const_iterator
         b (i.schema ().begin ()), n (i.schema ().end ());
         b != n; ++b)
    {
      if (typeid (XsdInputDocument::schema_type) == typeid (*b))
      {
        xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "schema",
            e));

        s << *b;
      }
      else
        tsm.serialize (
          "schema",
          "",
          false, true, e, *b);
    }
  }

  // rules
  //
  if (i.rules ())
  {
    xercesc::DOMElement& s (
      ::xsd::cxx::xml::dom::create_element (
        "rules",
        e));

    s << *i.rules ();
  }

  // name
  //
  if (i.name ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "name",
        e));

    a << *i.name ();
  }

  // client
  //
  if (i.client ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "client",
        e));

    a << *i.client ();
  }

  // timeStamp
  //
  if (i.timeStamp ())
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "timeStamp",
        e));

    a << *i.timeStamp ();
  }

  // documentID
  //
  {
    xercesc::DOMAttr& a (
      ::xsd::cxx::xml::dom::create_attribute (
        "documentID",
        e));

    a << i.documentID ();
  }
}

void
operator<< (xercesc::DOMElement& e, const XsdInputRules& i)
{
  e << static_cast< const ::xml_schema::type& > (i);

  // resolveDependenciesAtInsertion
  //
  if (i.resolveDependenciesAtInsertion ())
  {
    xercesc::DOMElement& s (
      ::xsd::cxx::xml::dom::create_element (
        "resolveDependenciesAtInsertion",
        e));

    s << *i.resolveDependenciesAtInsertion ();
  }

  // allowUniqueIDOverwrite
  //
  if (i.allowUniqueIDOverwrite ())
  {
    xercesc::DOMElement& s (
      ::xsd::cxx::xml::dom::create_element (
        "allowUniqueIDOverwrite",
        e));

    s << *i.allowUniqueIDOverwrite ();
  }

  // clearCacheAfterProcessing
  //
  if (i.clearCacheAfterProcessing ())
  {
    xercesc::DOMElement& s (
      ::xsd::cxx::xml::dom::create_element (
        "clearCacheAfterProcessing",
        e));

    s << *i.clearCacheAfterProcessing ();
  }

  // includeCallStackInErrorMessages
  //
  if (i.includeCallStackInErrorMessages ())
  {
    xercesc::DOMElement& s (
      ::xsd::cxx::xml::dom::create_element (
        "includeCallStackInErrorMessages",
        e));

    s << *i.includeCallStackInErrorMessages ();
  }
}

void
xsdInputDocument (::std::ostream& o,
                  const ::XsdInputDocument& s,
                  const ::xml_schema::namespace_infomap& m,
                  const ::std::string& e,
                  ::xml_schema::flags f)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0);

  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsdInputDocument (s, m, f));

  ::xsd::cxx::tree::error_handler< char > h;

  ::xsd::cxx::xml::dom::ostream_format_target t (o);
  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    h.throw_if_failed< ::xsd::cxx::tree::serialization< char > > ();
  }
}

void
xsdInputDocument (::std::ostream& o,
                  const ::XsdInputDocument& s,
                  ::xml_schema::error_handler& h,
                  const ::xml_schema::namespace_infomap& m,
                  const ::std::string& e,
                  ::xml_schema::flags f)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0);

  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsdInputDocument (s, m, f));
  ::xsd::cxx::xml::dom::ostream_format_target t (o);
  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    throw ::xsd::cxx::tree::serialization< char > ();
  }
}

void
xsdInputDocument (::std::ostream& o,
                  const ::XsdInputDocument& s,
                  xercesc::DOMErrorHandler& h,
                  const ::xml_schema::namespace_infomap& m,
                  const ::std::string& e,
                  ::xml_schema::flags f)
{
  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsdInputDocument (s, m, f));
  ::xsd::cxx::xml::dom::ostream_format_target t (o);
  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    throw ::xsd::cxx::tree::serialization< char > ();
  }
}

void
xsdInputDocument (xercesc::XMLFormatTarget& t,
                  const ::XsdInputDocument& s,
                  const ::xml_schema::namespace_infomap& m,
                  const ::std::string& e,
                  ::xml_schema::flags f)
{
  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsdInputDocument (s, m, f));

  ::xsd::cxx::tree::error_handler< char > h;

  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    h.throw_if_failed< ::xsd::cxx::tree::serialization< char > > ();
  }
}

void
xsdInputDocument (xercesc::XMLFormatTarget& t,
                  const ::XsdInputDocument& s,
                  ::xml_schema::error_handler& h,
                  const ::xml_schema::namespace_infomap& m,
                  const ::std::string& e,
                  ::xml_schema::flags f)
{
  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsdInputDocument (s, m, f));
  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    throw ::xsd::cxx::tree::serialization< char > ();
  }
}

void
xsdInputDocument (xercesc::XMLFormatTarget& t,
                  const ::XsdInputDocument& s,
                  xercesc::DOMErrorHandler& h,
                  const ::xml_schema::namespace_infomap& m,
                  const ::std::string& e,
                  ::xml_schema::flags f)
{
  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsdInputDocument (s, m, f));
  if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
  {
    throw ::xsd::cxx::tree::serialization< char > ();
  }
}

void
xsdInputDocument (xercesc::DOMDocument& d,
                  const ::XsdInputDocument& s,
                  ::xml_schema::flags)
{
  xercesc::DOMElement& e (*d.getDocumentElement ());
  const ::xsd::cxx::xml::qualified_name< char > n (
    ::xsd::cxx::xml::dom::name< char > (e));

  if (n.name () == "xsdInputDocument" &&
      n.namespace_ () == "")
  {
    e << s;
  }
  else
  {
    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "xsdInputDocument",
      "");
  }
}

::xml_schema::dom::auto_ptr< xercesc::DOMDocument >
xsdInputDocument (const ::XsdInputDocument& s,
                  const ::xml_schema::namespace_infomap& m,
                  ::xml_schema::flags f)
{
  ::xml_schema::dom::auto_ptr< xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::serialize< char > (
      "xsdInputDocument",
      "",
      m, f));

  ::xsdInputDocument (*d, s, f);
  return d;
}

#include <xsd/cxx/tree/stream-extraction-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::stream_extraction_plate< 0, boost::archive::binary_iarchive, char >
  stream_extraction_plate_init_0;
}

XsdInputDocument::
XsdInputDocument (::xml_schema::istream< boost::archive::binary_iarchive >& s,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
: ::xml_schema::type (s, f, c),
  schema_ (f, this),
  rules_ (f, this),
  name_ (f, this),
  client_ (f, this),
  timeStamp_ (f, this),
  documentID_ (f, this)
{
  this->parse (s, f);
}

void XsdInputDocument::
parse (::xml_schema::istream< boost::archive::binary_iarchive >& s,
       ::xml_schema::flags f)
{
  {
    ::std::size_t n;
    ::xsd::cxx::tree::istream_common::as_size< ::std::size_t > as (n);
    s >> as;
    if (n > 0)
    {
      schema_sequence& c (this->schema_);
      c.reserve (n);
      while (n--)
      {
        bool d;
        ::std::auto_ptr< schema_type > r;
        s >> d;

        if (!d)
          r.reset (new schema_type (s, f, this));
        else
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::stream_extraction_map_instance< 0, boost::archive::binary_iarchive, char > ().extract (
              s, f, this));
          r.reset (dynamic_cast< schema_type* > (tmp.get ()));
          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();
        }

        c.push_back (r);
      }
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      ::std::auto_ptr< rules_type > r (new rules_type (s, f, this));
      this->rules_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      ::std::auto_ptr< name_type > r (new name_type (s, f, this));
      this->name_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      ::std::auto_ptr< client_type > r (new client_type (s, f, this));
      this->client_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      ::std::auto_ptr< timeStamp_type > r (new timeStamp_type (s, f, this));
      this->timeStamp_.set (r);
    }
  }

  {
    ::std::auto_ptr< documentID_type > r (new documentID_type (s, f, this));
    this->documentID_.set (r);
  }
}

XsdInputRules::
XsdInputRules (::xml_schema::istream< boost::archive::binary_iarchive >& s,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (s, f, c),
  resolveDependenciesAtInsertion_ (f, this),
  allowUniqueIDOverwrite_ (f, this),
  clearCacheAfterProcessing_ (f, this),
  includeCallStackInErrorMessages_ (f, this)
{
  this->parse (s, f);
}

void XsdInputRules::
parse (::xml_schema::istream< boost::archive::binary_iarchive >& s,
       ::xml_schema::flags f)
{
  {
    bool p;
    s >> p;
    if (p)
    {
      resolveDependenciesAtInsertion_type r;
      s >> r;
      this->resolveDependenciesAtInsertion_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      allowUniqueIDOverwrite_type r;
      s >> r;
      this->allowUniqueIDOverwrite_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      clearCacheAfterProcessing_type r;
      s >> r;
      this->clearCacheAfterProcessing_.set (r);
    }
  }

  {
    bool p;
    s >> p;
    if (p)
    {
      includeCallStackInErrorMessages_type r;
      s >> r;
      this->includeCallStackInErrorMessages_.set (r);
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
            const XsdInputDocument& x)
{
  {
    const XsdInputDocument::schema_sequence& c (x.schema ());
    s << ::xsd::cxx::tree::ostream_common::as_size< ::std::size_t > (c.size ());
    for (XsdInputDocument::schema_const_iterator
         i (c.begin ()), e (c.end ());
         i != e; ++i)
    {
      bool d (typeid (XsdInputDocument::schema_type) != typeid (*i));
      s << d;
      if (!d)
        s << *i;
      else
        ::xsd::cxx::tree::stream_insertion_map_instance< 0, boost::archive::binary_oarchive, char > ().insert (s, *i);
    }
  }

  {
    bool p (x.rules ());
    s << p;
    if (p)
      s << *x.rules ();
  }

  {
    bool p (x.name ());
    s << p;
    if (p)
      s << *x.name ();
  }

  {
    bool p (x.client ());
    s << p;
    if (p)
      s << *x.client ();
  }

  {
    bool p (x.timeStamp ());
    s << p;
    if (p)
      s << *x.timeStamp ();
  }

  s << x.documentID ();
  return s;
}

::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s,
            const XsdInputRules& x)
{
  {
    bool p (x.resolveDependenciesAtInsertion ());
    s << p;
    if (p)
      s << *x.resolveDependenciesAtInsertion ();
  }

  {
    bool p (x.allowUniqueIDOverwrite ());
    s << p;
    if (p)
      s << *x.allowUniqueIDOverwrite ();
  }

  {
    bool p (x.clearCacheAfterProcessing ());
    s << p;
    if (p)
      s << *x.clearCacheAfterProcessing ();
  }

  {
    bool p (x.includeCallStackInErrorMessages ());
    s << p;
    if (p)
      s << *x.includeCallStackInErrorMessages ();
  }

  return s;
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

