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

#ifndef CXX___SCHEMA_XSD_MATH_COPULA_IXX
#define CXX___SCHEMA_XSD_MATH_COPULA_IXX

// Begin prologue.
//
//
// End prologue.

#include "distribution-1D.ixx"

// XsdCopula
// 

inline
const XsdCopula::dimension_optional& XsdCopula::
dimension () const
{
  return this->dimension_;
}

inline
XsdCopula::dimension_optional& XsdCopula::
dimension ()
{
  return this->dimension_;
}

inline
void XsdCopula::
dimension (const dimension_type& x)
{
  this->dimension_.set (x);
}

inline
void XsdCopula::
dimension (const dimension_optional& x)
{
  this->dimension_ = x;
}

inline
XsdCopula::dimension_type XsdCopula::
dimension_default_value ()
{
  return dimension_type (2ULL);
}


// XsdDependentCopula
// 


// XsdIndependentCopula
// 


// XsdMixtureCopula
// 

inline
const XsdMixtureCopula::copula_sequence& XsdMixtureCopula::
copula () const
{
  return this->copula_;
}

inline
XsdMixtureCopula::copula_sequence& XsdMixtureCopula::
copula ()
{
  return this->copula_;
}

inline
void XsdMixtureCopula::
copula (const copula_sequence& s)
{
  this->copula_ = s;
}

inline
const XsdMixtureCopula::weight_type& XsdMixtureCopula::
weight () const
{
  return this->weight_.get ();
}

inline
XsdMixtureCopula::weight_type& XsdMixtureCopula::
weight ()
{
  return this->weight_.get ();
}

inline
void XsdMixtureCopula::
weight (const weight_type& x)
{
  this->weight_.set (x);
}

inline
void XsdMixtureCopula::
weight (::std::auto_ptr< weight_type > x)
{
  this->weight_.set (x);
}


// XsdArchimedeanCopula
// 

inline
const XsdArchimedeanCopula::theta_optional& XsdArchimedeanCopula::
theta () const
{
  return this->theta_;
}

inline
XsdArchimedeanCopula::theta_optional& XsdArchimedeanCopula::
theta ()
{
  return this->theta_;
}

inline
void XsdArchimedeanCopula::
theta (const theta_type& x)
{
  this->theta_.set (x);
}

inline
void XsdArchimedeanCopula::
theta (const theta_optional& x)
{
  this->theta_ = x;
}

inline
void XsdArchimedeanCopula::
theta (::std::auto_ptr< theta_type > x)
{
  this->theta_.set (x);
}


// XsdClaytonCopula
// 


// XsdFrankCopula
// 


// XsdGumbelCopula
// 


// XsdEllipticCopula
// 

inline
const XsdEllipticCopula::constant_optional& XsdEllipticCopula::
constant () const
{
  return this->constant_;
}

inline
XsdEllipticCopula::constant_optional& XsdEllipticCopula::
constant ()
{
  return this->constant_;
}

inline
void XsdEllipticCopula::
constant (const constant_type& x)
{
  this->constant_.set (x);
}

inline
void XsdEllipticCopula::
constant (const constant_optional& x)
{
  this->constant_ = x;
}

inline
void XsdEllipticCopula::
constant (::std::auto_ptr< constant_type > x)
{
  this->constant_.set (x);
}

inline
const XsdEllipticCopula::matrix_optional& XsdEllipticCopula::
matrix () const
{
  return this->matrix_;
}

inline
XsdEllipticCopula::matrix_optional& XsdEllipticCopula::
matrix ()
{
  return this->matrix_;
}

inline
void XsdEllipticCopula::
matrix (const matrix_type& x)
{
  this->matrix_.set (x);
}

inline
void XsdEllipticCopula::
matrix (const matrix_optional& x)
{
  this->matrix_ = x;
}

inline
void XsdEllipticCopula::
matrix (::std::auto_ptr< matrix_type > x)
{
  this->matrix_.set (x);
}

inline
const XsdEllipticCopula::random_sequence& XsdEllipticCopula::
random () const
{
  return this->random_;
}

inline
XsdEllipticCopula::random_sequence& XsdEllipticCopula::
random ()
{
  return this->random_;
}

inline
void XsdEllipticCopula::
random (const random_sequence& s)
{
  this->random_ = s;
}


// XsdDoubleTCopula
// 

inline
const XsdDoubleTCopula::degree1_optional& XsdDoubleTCopula::
degree1 () const
{
  return this->degree1_;
}

inline
XsdDoubleTCopula::degree1_optional& XsdDoubleTCopula::
degree1 ()
{
  return this->degree1_;
}

inline
void XsdDoubleTCopula::
degree1 (const degree1_type& x)
{
  this->degree1_.set (x);
}

inline
void XsdDoubleTCopula::
degree1 (const degree1_optional& x)
{
  this->degree1_ = x;
}

inline
void XsdDoubleTCopula::
degree1 (::std::auto_ptr< degree1_type > x)
{
  this->degree1_.set (x);
}

inline
const XsdDoubleTCopula::degree2_optional& XsdDoubleTCopula::
degree2 () const
{
  return this->degree2_;
}

inline
XsdDoubleTCopula::degree2_optional& XsdDoubleTCopula::
degree2 ()
{
  return this->degree2_;
}

inline
void XsdDoubleTCopula::
degree2 (const degree2_type& x)
{
  this->degree2_.set (x);
}

inline
void XsdDoubleTCopula::
degree2 (const degree2_optional& x)
{
  this->degree2_ = x;
}

inline
void XsdDoubleTCopula::
degree2 (::std::auto_ptr< degree2_type > x)
{
  this->degree2_.set (x);
}


// XsdGaussianCopula
// 


// XsdNIGaussianCopula
// 

inline
const XsdNIGaussianCopula::alpha_optional& XsdNIGaussianCopula::
alpha () const
{
  return this->alpha_;
}

inline
XsdNIGaussianCopula::alpha_optional& XsdNIGaussianCopula::
alpha ()
{
  return this->alpha_;
}

inline
void XsdNIGaussianCopula::
alpha (const alpha_type& x)
{
  this->alpha_.set (x);
}

inline
void XsdNIGaussianCopula::
alpha (const alpha_optional& x)
{
  this->alpha_ = x;
}

inline
void XsdNIGaussianCopula::
alpha (::std::auto_ptr< alpha_type > x)
{
  this->alpha_.set (x);
}

inline
const XsdNIGaussianCopula::beta_optional& XsdNIGaussianCopula::
beta () const
{
  return this->beta_;
}

inline
XsdNIGaussianCopula::beta_optional& XsdNIGaussianCopula::
beta ()
{
  return this->beta_;
}

inline
void XsdNIGaussianCopula::
beta (const beta_type& x)
{
  this->beta_.set (x);
}

inline
void XsdNIGaussianCopula::
beta (const beta_optional& x)
{
  this->beta_ = x;
}

inline
void XsdNIGaussianCopula::
beta (::std::auto_ptr< beta_type > x)
{
  this->beta_.set (x);
}

inline
const XsdNIGaussianCopula::delta_optional& XsdNIGaussianCopula::
delta () const
{
  return this->delta_;
}

inline
XsdNIGaussianCopula::delta_optional& XsdNIGaussianCopula::
delta ()
{
  return this->delta_;
}

inline
void XsdNIGaussianCopula::
delta (const delta_type& x)
{
  this->delta_.set (x);
}

inline
void XsdNIGaussianCopula::
delta (const delta_optional& x)
{
  this->delta_ = x;
}

inline
void XsdNIGaussianCopula::
delta (::std::auto_ptr< delta_type > x)
{
  this->delta_.set (x);
}


// XsdStudentTCopula
// 

inline
const XsdStudentTCopula::degree_optional& XsdStudentTCopula::
degree () const
{
  return this->degree_;
}

inline
XsdStudentTCopula::degree_optional& XsdStudentTCopula::
degree ()
{
  return this->degree_;
}

inline
void XsdStudentTCopula::
degree (const degree_type& x)
{
  this->degree_.set (x);
}

inline
void XsdStudentTCopula::
degree (const degree_optional& x)
{
  this->degree_ = x;
}

inline
void XsdStudentTCopula::
degree (::std::auto_ptr< degree_type > x)
{
  this->degree_.set (x);
}

inline
const XsdStudentTCopula::skewness_optional& XsdStudentTCopula::
skewness () const
{
  return this->skewness_;
}

inline
XsdStudentTCopula::skewness_optional& XsdStudentTCopula::
skewness ()
{
  return this->skewness_;
}

inline
void XsdStudentTCopula::
skewness (const skewness_type& x)
{
  this->skewness_.set (x);
}

inline
void XsdStudentTCopula::
skewness (const skewness_optional& x)
{
  this->skewness_ = x;
}

inline
void XsdStudentTCopula::
skewness (::std::auto_ptr< skewness_type > x)
{
  this->skewness_.set (x);
}


// XsdVGammaCopula
// 

inline
const XsdVGammaCopula::shape_optional& XsdVGammaCopula::
shape () const
{
  return this->shape_;
}

inline
XsdVGammaCopula::shape_optional& XsdVGammaCopula::
shape ()
{
  return this->shape_;
}

inline
void XsdVGammaCopula::
shape (const shape_type& x)
{
  this->shape_.set (x);
}

inline
void XsdVGammaCopula::
shape (const shape_optional& x)
{
  this->shape_ = x;
}

inline
void XsdVGammaCopula::
shape (::std::auto_ptr< shape_type > x)
{
  this->shape_.set (x);
}

inline
const XsdVGammaCopula::drift_optional& XsdVGammaCopula::
drift () const
{
  return this->drift_;
}

inline
XsdVGammaCopula::drift_optional& XsdVGammaCopula::
drift ()
{
  return this->drift_;
}

inline
void XsdVGammaCopula::
drift (const drift_type& x)
{
  this->drift_.set (x);
}

inline
void XsdVGammaCopula::
drift (const drift_optional& x)
{
  this->drift_ = x;
}

inline
void XsdVGammaCopula::
drift (::std::auto_ptr< drift_type > x)
{
  this->drift_.set (x);
}

inline
const XsdVGammaCopula::sigma_optional& XsdVGammaCopula::
sigma () const
{
  return this->sigma_;
}

inline
XsdVGammaCopula::sigma_optional& XsdVGammaCopula::
sigma ()
{
  return this->sigma_;
}

inline
void XsdVGammaCopula::
sigma (const sigma_type& x)
{
  this->sigma_.set (x);
}

inline
void XsdVGammaCopula::
sigma (const sigma_optional& x)
{
  this->sigma_ = x;
}

inline
void XsdVGammaCopula::
sigma (::std::auto_ptr< sigma_type > x)
{
  this->sigma_.set (x);
}


// XsdMarshallOlkinCopula
// 

inline
const XsdMarshallOlkinCopula::common_type& XsdMarshallOlkinCopula::
common () const
{
  return this->common_.get ();
}

inline
XsdMarshallOlkinCopula::common_type& XsdMarshallOlkinCopula::
common ()
{
  return this->common_.get ();
}

inline
void XsdMarshallOlkinCopula::
common (const common_type& x)
{
  this->common_.set (x);
}

inline
void XsdMarshallOlkinCopula::
common (::std::auto_ptr< common_type > x)
{
  this->common_.set (x);
}

inline
const XsdMarshallOlkinCopula::idiosyncratic_type& XsdMarshallOlkinCopula::
idiosyncratic () const
{
  return this->idiosyncratic_.get ();
}

inline
XsdMarshallOlkinCopula::idiosyncratic_type& XsdMarshallOlkinCopula::
idiosyncratic ()
{
  return this->idiosyncratic_.get ();
}

inline
void XsdMarshallOlkinCopula::
idiosyncratic (const idiosyncratic_type& x)
{
  this->idiosyncratic_.set (x);
}

inline
void XsdMarshallOlkinCopula::
idiosyncratic (::std::auto_ptr< idiosyncratic_type > x)
{
  this->idiosyncratic_.set (x);
}

inline
const XsdMarshallOlkinCopula::response_type& XsdMarshallOlkinCopula::
response () const
{
  return this->response_.get ();
}

inline
XsdMarshallOlkinCopula::response_type& XsdMarshallOlkinCopula::
response ()
{
  return this->response_.get ();
}

inline
void XsdMarshallOlkinCopula::
response (const response_type& x)
{
  this->response_.set (x);
}

inline
void XsdMarshallOlkinCopula::
response (::std::auto_ptr< response_type > x)
{
  this->response_.set (x);
}


// XsdCopulaResult
// 

inline
const XsdCopulaResult::normal_type& XsdCopulaResult::
normal () const
{
  return this->normal_.get ();
}

inline
XsdCopulaResult::normal_type& XsdCopulaResult::
normal ()
{
  return this->normal_.get ();
}

inline
void XsdCopulaResult::
normal (const normal_type& x)
{
  this->normal_.set (x);
}

inline
void XsdCopulaResult::
normal (::std::auto_ptr< normal_type > x)
{
  this->normal_.set (x);
}

inline
const XsdCopulaResult::spearman_type& XsdCopulaResult::
spearman () const
{
  return this->spearman_.get ();
}

inline
XsdCopulaResult::spearman_type& XsdCopulaResult::
spearman ()
{
  return this->spearman_.get ();
}

inline
void XsdCopulaResult::
spearman (const spearman_type& x)
{
  this->spearman_.set (x);
}

inline
void XsdCopulaResult::
spearman (::std::auto_ptr< spearman_type > x)
{
  this->spearman_.set (x);
}

inline
const XsdCopulaResult::kendall_type& XsdCopulaResult::
kendall () const
{
  return this->kendall_.get ();
}

inline
XsdCopulaResult::kendall_type& XsdCopulaResult::
kendall ()
{
  return this->kendall_.get ();
}

inline
void XsdCopulaResult::
kendall (const kendall_type& x)
{
  this->kendall_.set (x);
}

inline
void XsdCopulaResult::
kendall (::std::auto_ptr< kendall_type > x)
{
  this->kendall_.set (x);
}


// XsdCopulaTest
// 

inline
const XsdCopulaTest::result_optional& XsdCopulaTest::
result () const
{
  return this->result_;
}

inline
XsdCopulaTest::result_optional& XsdCopulaTest::
result ()
{
  return this->result_;
}

inline
void XsdCopulaTest::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdCopulaTest::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdCopulaTest::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdCopulaTest::copula_type& XsdCopulaTest::
copula () const
{
  return this->copula_.get ();
}

inline
XsdCopulaTest::copula_type& XsdCopulaTest::
copula ()
{
  return this->copula_.get ();
}

inline
void XsdCopulaTest::
copula (const copula_type& x)
{
  this->copula_.set (x);
}

inline
void XsdCopulaTest::
copula (::std::auto_ptr< copula_type > x)
{
  this->copula_.set (x);
}

inline
const XsdCopulaTest::length_optional& XsdCopulaTest::
length () const
{
  return this->length_;
}

inline
XsdCopulaTest::length_optional& XsdCopulaTest::
length ()
{
  return this->length_;
}

inline
void XsdCopulaTest::
length (const length_type& x)
{
  this->length_.set (x);
}

inline
void XsdCopulaTest::
length (const length_optional& x)
{
  this->length_ = x;
}

inline
XsdCopulaTest::length_type XsdCopulaTest::
length_default_value ()
{
  return length_type (100000);
}

inline
const XsdCopulaTest::random_type& XsdCopulaTest::
random () const
{
  return this->random_.get ();
}

inline
XsdCopulaTest::random_type& XsdCopulaTest::
random ()
{
  return this->random_.get ();
}

inline
void XsdCopulaTest::
random (const random_type& x)
{
  this->random_.set (x);
}

inline
void XsdCopulaTest::
random (::std::auto_ptr< random_type > x)
{
  this->random_.set (x);
}


// XsdCopulaDistribution
// 

inline
const XsdCopulaDistribution::copula_type& XsdCopulaDistribution::
copula () const
{
  return this->copula_.get ();
}

inline
XsdCopulaDistribution::copula_type& XsdCopulaDistribution::
copula ()
{
  return this->copula_.get ();
}

inline
void XsdCopulaDistribution::
copula (const copula_type& x)
{
  this->copula_.set (x);
}

inline
void XsdCopulaDistribution::
copula (::std::auto_ptr< copula_type > x)
{
  this->copula_.set (x);
}

inline
const XsdCopulaDistribution::marginal_sequence& XsdCopulaDistribution::
marginal () const
{
  return this->marginal_;
}

inline
XsdCopulaDistribution::marginal_sequence& XsdCopulaDistribution::
marginal ()
{
  return this->marginal_;
}

inline
void XsdCopulaDistribution::
marginal (const marginal_sequence& s)
{
  this->marginal_ = s;
}


// XsdAsymptoticDistribution1D
// 

inline
const XsdAsymptoticDistribution1D::probability_type& XsdAsymptoticDistribution1D::
probability () const
{
  return this->probability_.get ();
}

inline
XsdAsymptoticDistribution1D::probability_type& XsdAsymptoticDistribution1D::
probability ()
{
  return this->probability_.get ();
}

inline
void XsdAsymptoticDistribution1D::
probability (const probability_type& x)
{
  this->probability_.set (x);
}

inline
void XsdAsymptoticDistribution1D::
probability (::std::auto_ptr< probability_type > x)
{
  this->probability_.set (x);
}

inline
const XsdAsymptoticDistribution1D::correlation_type& XsdAsymptoticDistribution1D::
correlation () const
{
  return this->correlation_.get ();
}

inline
XsdAsymptoticDistribution1D::correlation_type& XsdAsymptoticDistribution1D::
correlation ()
{
  return this->correlation_.get ();
}

inline
void XsdAsymptoticDistribution1D::
correlation (const correlation_type& x)
{
  this->correlation_.set (x);
}

inline
void XsdAsymptoticDistribution1D::
correlation (::std::auto_ptr< correlation_type > x)
{
  this->correlation_.set (x);
}

inline
const XsdAsymptoticDistribution1D::scale_optional& XsdAsymptoticDistribution1D::
scale () const
{
  return this->scale_;
}

inline
XsdAsymptoticDistribution1D::scale_optional& XsdAsymptoticDistribution1D::
scale ()
{
  return this->scale_;
}

inline
void XsdAsymptoticDistribution1D::
scale (const scale_type& x)
{
  this->scale_.set (x);
}

inline
void XsdAsymptoticDistribution1D::
scale (const scale_optional& x)
{
  this->scale_ = x;
}

inline
void XsdAsymptoticDistribution1D::
scale (::std::auto_ptr< scale_type > x)
{
  this->scale_.set (x);
}

inline
const XsdAsymptoticDistribution1D::copula_type& XsdAsymptoticDistribution1D::
copula () const
{
  return this->copula_.get ();
}

inline
XsdAsymptoticDistribution1D::copula_type& XsdAsymptoticDistribution1D::
copula ()
{
  return this->copula_.get ();
}

inline
void XsdAsymptoticDistribution1D::
copula (const copula_type& x)
{
  this->copula_.set (x);
}

inline
void XsdAsymptoticDistribution1D::
copula (::std::auto_ptr< copula_type > x)
{
  this->copula_.set (x);
}


// XsdConditionalDistribution1D
// 

inline
const XsdConditionalDistribution1D::inverse_type& XsdConditionalDistribution1D::
inverse () const
{
  return this->inverse_.get ();
}

inline
XsdConditionalDistribution1D::inverse_type& XsdConditionalDistribution1D::
inverse ()
{
  return this->inverse_.get ();
}

inline
void XsdConditionalDistribution1D::
inverse (const inverse_type& x)
{
  this->inverse_.set (x);
}

inline
void XsdConditionalDistribution1D::
inverse (::std::auto_ptr< inverse_type > x)
{
  this->inverse_.set (x);
}

inline
const XsdConditionalDistribution1D::marginal_type& XsdConditionalDistribution1D::
marginal () const
{
  return this->marginal_.get ();
}

inline
XsdConditionalDistribution1D::marginal_type& XsdConditionalDistribution1D::
marginal ()
{
  return this->marginal_.get ();
}

inline
void XsdConditionalDistribution1D::
marginal (const marginal_type& x)
{
  this->marginal_.set (x);
}

inline
void XsdConditionalDistribution1D::
marginal (::std::auto_ptr< marginal_type > x)
{
  this->marginal_.set (x);
}

inline
const XsdConditionalDistribution1D::shift_optional& XsdConditionalDistribution1D::
shift () const
{
  return this->shift_;
}

inline
XsdConditionalDistribution1D::shift_optional& XsdConditionalDistribution1D::
shift ()
{
  return this->shift_;
}

inline
void XsdConditionalDistribution1D::
shift (const shift_type& x)
{
  this->shift_.set (x);
}

inline
void XsdConditionalDistribution1D::
shift (const shift_optional& x)
{
  this->shift_ = x;
}

inline
void XsdConditionalDistribution1D::
shift (::std::auto_ptr< shift_type > x)
{
  this->shift_.set (x);
}

inline
const XsdConditionalDistribution1D::scale_optional& XsdConditionalDistribution1D::
scale () const
{
  return this->scale_;
}

inline
XsdConditionalDistribution1D::scale_optional& XsdConditionalDistribution1D::
scale ()
{
  return this->scale_;
}

inline
void XsdConditionalDistribution1D::
scale (const scale_type& x)
{
  this->scale_.set (x);
}

inline
void XsdConditionalDistribution1D::
scale (const scale_optional& x)
{
  this->scale_ = x;
}

inline
void XsdConditionalDistribution1D::
scale (::std::auto_ptr< scale_type > x)
{
  this->scale_.set (x);
}


// XsdRandomFactor
// 

inline
const XsdRandomFactor::breakpoint_type& XsdRandomFactor::
breakpoint () const
{
  return this->breakpoint_.get ();
}

inline
XsdRandomFactor::breakpoint_type& XsdRandomFactor::
breakpoint ()
{
  return this->breakpoint_.get ();
}

inline
void XsdRandomFactor::
breakpoint (const breakpoint_type& x)
{
  this->breakpoint_.set (x);
}

inline
XsdRandomFactor::breakpoint_type XsdRandomFactor::
breakpoint_default_value ()
{
  return breakpoint_type (.0);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MATH_COPULA_IXX