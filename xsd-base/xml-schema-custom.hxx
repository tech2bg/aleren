// file      : examples/cxx/tree/custom/calendar/xml-schema-custom.hxx
// author    : Boris Kolpackov <boris@codesynthesis.com>
// copyright : not copyrighted - public domain

// Do not include this file directly, use xml-schema.hxx instead. This
// file is included into generated xml-schema.hxx so we do not need to
// guard against multiple inclusions.
//

#include <boost/date_time/gregorian/gregorian.hpp> // boost::gregorian::date
#include <boost/date_time/posix_time/posix_time.hpp> // boost::posix_time::ptime

namespace xml_schema {

class date: public simple_type, public boost::gregorian::date
{
public:
	date() ;
	// Parsing c-tors: element, attribute, and list item.
	//
	date (const xercesc::DOMElement&, flags = 0, container* = 0);
	date (const xercesc::DOMAttr&, flags = 0, container* = 0);
	date (const std::string&, const xercesc::DOMElement*, flags = 0, container* = 0);

	// Copy c-tor and _clone.
	//
	date (const date&, flags = 0, container* = 0);

	date ( const boost :: gregorian :: date& ) ; 

	virtual date* _clone (flags = 0, container* = 0) const;

	// Support for binary serialization
    date (istream< boost::archive::binary_iarchive >& s, flags f = 0, container* c = 0);
	void parse (istream< boost::archive::binary_iarchive >& s, flags f);
} ;

inline void operator<< (xercesc::DOMElement& e, const date& d)
{
	e << boost :: gregorian :: to_iso_extended_string (d);
}

inline void operator<< (xercesc::DOMAttr& a, const date& d)
{
	a << boost :: gregorian :: to_iso_extended_string (d);
}

inline void operator<< (xml_schema::list_stream& ls, const date& d)
{
	ls.os_ << boost :: gregorian :: to_iso_extended_string (d);
}

inline ::std::ostream& operator<< (::std::ostream& s , const date& d )
{
	return s << boost :: gregorian :: to_iso_extended_string (d);
}

::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s, const ::xml_schema::date& x);

class date_time: public simple_type, public boost :: posix_time :: ptime
{
  public:
	date_time () ; 
    // Parsing c-tors: element, attribute, and list item.
    //
    date_time (const xercesc::DOMElement&, flags = 0, container* = 0);
    date_time (const xercesc::DOMAttr&, flags = 0, container* = 0);
    date_time (const std::string&, const xercesc::DOMElement*, flags = 0, container* = 0);

    // Copy c-tor and _clone.
    //
    date_time (const date_time&, flags = 0, container* = 0);
	date_time ( const boost :: posix_time :: ptime& ) ; 
    virtual date_time* _clone (flags = 0, container* = 0) const;

 // De-serialization (instantiation-time)
    date_time (istream< boost::archive::binary_iarchive >& s, flags f = 0, container* c = 0);
	void parse (istream< boost::archive::binary_iarchive >& s, flags f);
} ;

inline void operator<< (xercesc::DOMElement& e, const date_time& t)
{
	e << boost :: posix_time :: to_iso_extended_string (t);
}

inline void operator<< (xercesc::DOMAttr& a, const date_time& t)
{
	a << boost :: posix_time :: to_iso_extended_string (t);
}

inline void operator<< (xml_schema::list_stream& ls, const date_time& t)
{
	ls.os_ << boost :: posix_time :: to_iso_string (t);
}

inline ::std::ostream& operator<< (::std::ostream& s , const date_time& dt )
{
	return s << boost :: posix_time :: to_iso_string (dt);
}

::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s, const ::xml_schema::date_time& x);

} // End namespace xml_schema
