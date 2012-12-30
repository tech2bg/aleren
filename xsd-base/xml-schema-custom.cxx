// file      : examples/cxx/tree/custom/calendar/xml-schema-custom.cxx
// author    : Boris Kolpackov <boris@codesynthesis.com>
// copyright : not copyrighted - public domain

// Include xml-schema.hxx instead of xml-schema-custom.hxx here.
//

#include "../xsd-base/xml-schema.hxx"

#include <xsd/cxx/xml/string.hxx> // xsd::cxx::xml::transcode
#include <xsd/cxx/tree/text.hxx> // xsd::cxx::tree::text_content

#include <boost/date_time/posix_time/posix_time_io.hpp>

#include <boost/date_time/posix_time/posix_time_io.hpp>
#include <boost/date_time/posix_time/time_serialize.hpp>

using namespace boost;
using namespace boost::gregorian;
using namespace boost::posix_time;

namespace xml_schema
{
  date::
  date (const xercesc::DOMElement& e, flags f, container* c)
      : simple_type (e, f, c),
        gregorian::date (
          from_simple_string (
            xsd::cxx::tree::text_content<char> (e)))
  {
  }

  date::
  date (const xercesc::DOMAttr& a, flags f, container* c)
      : simple_type (a, f, c),
        gregorian::date (
          from_simple_string (
            xsd::cxx::xml::transcode<char> (a.getValue ())))
  {
  }

  date::
  date (const std::string& s,
        const xercesc::DOMElement* e,
        flags f,
        container* c)
      : simple_type (s, e, f, c),
        gregorian::date (from_simple_string (s))
  {
  }

  date::
  date (const date& d, flags f, container* c)
      : simple_type (d, f, c),
        gregorian::date (d)
  {
  }

  date::
  date (const gregorian :: date& d)
      : gregorian::date (d)
  {
  }

  date::
  date ( void )
      : gregorian::date ()
  {
  }

  date* date::
  _clone (flags f, container* c) const
  {
    return new date (*this, f, c);
  }
  
// Support for Binary Serialization

	//------------------------------------
	// Serialization
	//------------------------------------

	::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
	operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s,
				const ::xml_schema::date& x)
	{
		boost :: serialization :: save ( s.impl() , x , 1 ) ; 

		return s;
	}

	//------------------------------------
	// De-serialization
	//------------------------------------

	void date :: parse (::xml_schema::istream< boost::archive::binary_iarchive >& s, ::xml_schema::flags f)
	{
		boost :: serialization :: load ( s.impl() , *this , 1 ) ; 
	}

	// Constructor

	date :: date (::xml_schema::istream< boost::archive::binary_iarchive >& s, ::xml_schema::flags f, ::xml_schema::container* c)
	{
		this->parse (s, f);
	}

// date_time <---> posix time

date_time :: 
     date_time ( void ) : boost :: posix_time :: ptime()  {} 

date_time :: 
	  date_time (const xercesc::DOMElement& e, flags f, container* c)
      : simple_type (e, f, c),
        boost :: posix_time :: ptime (
          boost :: date_time :: parse_delimited_time < boost :: posix_time :: ptime > (
            xsd::cxx::tree::text_content<char> (e),'T'))
  {
  }

  date_time :: 
	  date_time (const xercesc::DOMAttr& a, flags f, container* c)
      : simple_type (a, f, c),
        boost :: posix_time :: ptime (
          boost :: date_time :: parse_delimited_time < boost :: posix_time :: ptime > (
            xsd::cxx::xml::transcode<char> (a.getValue ()),'T'))
  {
  }


  date_time :: date_time ( const std::string& s,
                 const xercesc::DOMElement* e,
                 flags f,
                 container* c)
               : simple_type (s, e, f, c),
                 boost :: posix_time :: ptime ( boost :: date_time :: parse_delimited_time < boost :: posix_time :: ptime > (s, 'T'))
  {
  }

  date_time :: date_time (const date_time& dt, flags f, container* c) : simple_type (dt, f, c), boost :: posix_time :: ptime (dt)
  {
  }

  date_time :: date_time ( const boost :: posix_time :: ptime& dt ) :  boost :: posix_time :: ptime (dt)
  {
  }

  date_time* date_time :: _clone (flags f, container* c) const
  {
      return new date_time (*this, f, c);
  }

//------------------------------------
// Serialization
//------------------------------------

::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >&
operator<< (::xsd::cxx::tree::ostream< boost::archive::binary_oarchive >& s, const ::xml_schema::date_time& x)
{   
	 boost :: serialization :: save ( s.impl() , x , 1 ) ; 
   
	 return s;
}

//------------------------------------
// De-serialization
//------------------------------------

void date_time :: parse (::xml_schema::istream< boost::archive::binary_iarchive >& s, ::xml_schema::flags f)
{
	boost :: serialization :: load ( s.impl() , *this , 1 ) ;
}

// Constructor

date_time:: date_time (::xml_schema::istream< boost::archive::binary_iarchive >& s, ::xml_schema::flags f, ::xml_schema::container* c)
{
	this->parse (s, f);
}

} // End namespace xml_schema
