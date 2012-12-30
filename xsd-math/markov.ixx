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

#ifndef CXX___SCHEMA_XSD_MATH_MARKOV_IXX
#define CXX___SCHEMA_XSD_MATH_MARKOV_IXX

// Begin prologue.
//
//
// End prologue.

#include "copula.ixx"

// XsdMarkovChain
// 

inline
const XsdMarkovChain::steps_optional& XsdMarkovChain::
steps () const
{
  return this->steps_;
}

inline
XsdMarkovChain::steps_optional& XsdMarkovChain::
steps ()
{
  return this->steps_;
}

inline
void XsdMarkovChain::
steps (const steps_type& x)
{
  this->steps_.set (x);
}

inline
void XsdMarkovChain::
steps (const steps_optional& x)
{
  this->steps_ = x;
}

inline
void XsdMarkovChain::
steps (::std::auto_ptr< steps_type > x)
{
  this->steps_.set (x);
}


// XsdMarkovChain1D
// 

inline
const XsdMarkovChain1D::transition_type& XsdMarkovChain1D::
transition () const
{
  return this->transition_.get ();
}

inline
XsdMarkovChain1D::transition_type& XsdMarkovChain1D::
transition ()
{
  return this->transition_.get ();
}

inline
void XsdMarkovChain1D::
transition (const transition_type& x)
{
  this->transition_.set (x);
}

inline
void XsdMarkovChain1D::
transition (::std::auto_ptr< transition_type > x)
{
  this->transition_.set (x);
}

inline
const XsdMarkovChain1D::initial_type& XsdMarkovChain1D::
initial () const
{
  return this->initial_.get ();
}

inline
XsdMarkovChain1D::initial_type& XsdMarkovChain1D::
initial ()
{
  return this->initial_.get ();
}

inline
void XsdMarkovChain1D::
initial (const initial_type& x)
{
  this->initial_.set (x);
}

inline
void XsdMarkovChain1D::
initial (::std::auto_ptr< initial_type > x)
{
  this->initial_.set (x);
}


// XsdSimpleMarkovChain
// 

inline
const XsdSimpleMarkovChain::transition_sequence& XsdSimpleMarkovChain::
transition () const
{
  return this->transition_;
}

inline
XsdSimpleMarkovChain::transition_sequence& XsdSimpleMarkovChain::
transition ()
{
  return this->transition_;
}

inline
void XsdSimpleMarkovChain::
transition (const transition_sequence& s)
{
  this->transition_ = s;
}

inline
const XsdSimpleMarkovChain::initial_type& XsdSimpleMarkovChain::
initial () const
{
  return this->initial_.get ();
}

inline
XsdSimpleMarkovChain::initial_type& XsdSimpleMarkovChain::
initial ()
{
  return this->initial_.get ();
}

inline
void XsdSimpleMarkovChain::
initial (const initial_type& x)
{
  this->initial_.set (x);
}

inline
void XsdSimpleMarkovChain::
initial (::std::auto_ptr< initial_type > x)
{
  this->initial_.set (x);
}


// XsdCorrelatedMarkovChain
// 

inline
const XsdCorrelatedMarkovChain::correlation_type& XsdCorrelatedMarkovChain::
correlation () const
{
  return this->correlation_.get ();
}

inline
XsdCorrelatedMarkovChain::correlation_type& XsdCorrelatedMarkovChain::
correlation ()
{
  return this->correlation_.get ();
}

inline
void XsdCorrelatedMarkovChain::
correlation (const correlation_type& x)
{
  this->correlation_.set (x);
}

inline
void XsdCorrelatedMarkovChain::
correlation (::std::auto_ptr< correlation_type > x)
{
  this->correlation_.set (x);
}


// XsdCopulaMarkovChain
// 

inline
const XsdCopulaMarkovChain::copula_type& XsdCopulaMarkovChain::
copula () const
{
  return this->copula_.get ();
}

inline
XsdCopulaMarkovChain::copula_type& XsdCopulaMarkovChain::
copula ()
{
  return this->copula_.get ();
}

inline
void XsdCopulaMarkovChain::
copula (const copula_type& x)
{
  this->copula_.set (x);
}

inline
void XsdCopulaMarkovChain::
copula (::std::auto_ptr< copula_type > x)
{
  this->copula_.set (x);
}


// XsdMarkovTest
// 

inline
const XsdMarkovTest::result_optional& XsdMarkovTest::
result () const
{
  return this->result_;
}

inline
XsdMarkovTest::result_optional& XsdMarkovTest::
result ()
{
  return this->result_;
}

inline
void XsdMarkovTest::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdMarkovTest::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdMarkovTest::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdMarkovTest::markov_type& XsdMarkovTest::
markov () const
{
  return this->markov_.get ();
}

inline
XsdMarkovTest::markov_type& XsdMarkovTest::
markov ()
{
  return this->markov_.get ();
}

inline
void XsdMarkovTest::
markov (const markov_type& x)
{
  this->markov_.set (x);
}

inline
void XsdMarkovTest::
markov (::std::auto_ptr< markov_type > x)
{
  this->markov_.set (x);
}

inline
const XsdMarkovTest::random_type& XsdMarkovTest::
random () const
{
  return this->random_.get ();
}

inline
XsdMarkovTest::random_type& XsdMarkovTest::
random ()
{
  return this->random_.get ();
}

inline
void XsdMarkovTest::
random (const random_type& x)
{
  this->random_.set (x);
}

inline
void XsdMarkovTest::
random (::std::auto_ptr< random_type > x)
{
  this->random_.set (x);
}


// XsdMarkovTest1D
// 

inline
const XsdMarkovTest1D::result_optional& XsdMarkovTest1D::
result () const
{
  return this->result_;
}

inline
XsdMarkovTest1D::result_optional& XsdMarkovTest1D::
result ()
{
  return this->result_;
}

inline
void XsdMarkovTest1D::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdMarkovTest1D::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdMarkovTest1D::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdMarkovTest1D::markov_type& XsdMarkovTest1D::
markov () const
{
  return this->markov_.get ();
}

inline
XsdMarkovTest1D::markov_type& XsdMarkovTest1D::
markov ()
{
  return this->markov_.get ();
}

inline
void XsdMarkovTest1D::
markov (const markov_type& x)
{
  this->markov_.set (x);
}

inline
void XsdMarkovTest1D::
markov (::std::auto_ptr< markov_type > x)
{
  this->markov_.set (x);
}

inline
const XsdMarkovTest1D::random_type& XsdMarkovTest1D::
random () const
{
  return this->random_.get ();
}

inline
XsdMarkovTest1D::random_type& XsdMarkovTest1D::
random ()
{
  return this->random_.get ();
}

inline
void XsdMarkovTest1D::
random (const random_type& x)
{
  this->random_.set (x);
}

inline
void XsdMarkovTest1D::
random (::std::auto_ptr< random_type > x)
{
  this->random_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MATH_MARKOV_IXX
