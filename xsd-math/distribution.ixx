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

#ifndef CXX___SCHEMA_XSD_MATH_DISTRIBUTION_IXX
#define CXX___SCHEMA_XSD_MATH_DISTRIBUTION_IXX

// Begin prologue.
//
//
// End prologue.

#include "curve.ixx"

#include "quadrature.ixx"

#include "root.ixx"

#include "transform.ixx"

// XsdDistribution
// 

inline
const XsdDistribution::params_optional& XsdDistribution::
params () const
{
  return this->params_;
}

inline
XsdDistribution::params_optional& XsdDistribution::
params ()
{
  return this->params_;
}

inline
void XsdDistribution::
params (const params_type& x)
{
  this->params_.set (x);
}

inline
void XsdDistribution::
params (const params_optional& x)
{
  this->params_ = x;
}

inline
void XsdDistribution::
params (::std::auto_ptr< params_type > x)
{
  this->params_.set (x);
}


// XsdEmpiricalDistribution
// 

inline
const XsdEmpiricalDistribution::data_type& XsdEmpiricalDistribution::
data () const
{
  return this->data_.get ();
}

inline
XsdEmpiricalDistribution::data_type& XsdEmpiricalDistribution::
data ()
{
  return this->data_.get ();
}

inline
void XsdEmpiricalDistribution::
data (const data_type& x)
{
  this->data_.set (x);
}

inline
void XsdEmpiricalDistribution::
data (::std::auto_ptr< data_type > x)
{
  this->data_.set (x);
}


// XsdNormalDistribution
// 

inline
const XsdNormalDistribution::mean_type& XsdNormalDistribution::
mean () const
{
  return this->mean_.get ();
}

inline
XsdNormalDistribution::mean_type& XsdNormalDistribution::
mean ()
{
  return this->mean_.get ();
}

inline
void XsdNormalDistribution::
mean (const mean_type& x)
{
  this->mean_.set (x);
}

inline
void XsdNormalDistribution::
mean (::std::auto_ptr< mean_type > x)
{
  this->mean_.set (x);
}

inline
const XsdNormalDistribution::covariance_type& XsdNormalDistribution::
covariance () const
{
  return this->covariance_.get ();
}

inline
XsdNormalDistribution::covariance_type& XsdNormalDistribution::
covariance ()
{
  return this->covariance_.get ();
}

inline
void XsdNormalDistribution::
covariance (const covariance_type& x)
{
  this->covariance_.set (x);
}

inline
void XsdNormalDistribution::
covariance (::std::auto_ptr< covariance_type > x)
{
  this->covariance_.set (x);
}


// XsdStudentTDistribution
// 

inline
const XsdStudentTDistribution::degree_optional& XsdStudentTDistribution::
degree () const
{
  return this->degree_;
}

inline
XsdStudentTDistribution::degree_optional& XsdStudentTDistribution::
degree ()
{
  return this->degree_;
}

inline
void XsdStudentTDistribution::
degree (const degree_type& x)
{
  this->degree_.set (x);
}

inline
void XsdStudentTDistribution::
degree (const degree_optional& x)
{
  this->degree_ = x;
}

inline
XsdStudentTDistribution::degree_type XsdStudentTDistribution::
degree_default_value ()
{
  return degree_type (2.0);
}


// XsdDistributionResult
// 

inline
const XsdDistributionResult::row_sequence& XsdDistributionResult::
row () const
{
  return this->row_;
}

inline
XsdDistributionResult::row_sequence& XsdDistributionResult::
row ()
{
  return this->row_;
}

inline
void XsdDistributionResult::
row (const row_sequence& s)
{
  this->row_ = s;
}


// XsdMomentsResult
// 

inline
const XsdMomentsResult::bounds_sequence& XsdMomentsResult::
bounds () const
{
  return this->bounds_;
}

inline
XsdMomentsResult::bounds_sequence& XsdMomentsResult::
bounds ()
{
  return this->bounds_;
}

inline
void XsdMomentsResult::
bounds (const bounds_sequence& s)
{
  this->bounds_ = s;
}

inline
const XsdMomentsResult::mean_type& XsdMomentsResult::
mean () const
{
  return this->mean_.get ();
}

inline
XsdMomentsResult::mean_type& XsdMomentsResult::
mean ()
{
  return this->mean_.get ();
}

inline
void XsdMomentsResult::
mean (const mean_type& x)
{
  this->mean_.set (x);
}

inline
void XsdMomentsResult::
mean (::std::auto_ptr< mean_type > x)
{
  this->mean_.set (x);
}

inline
const XsdMomentsResult::covariance_type& XsdMomentsResult::
covariance () const
{
  return this->covariance_.get ();
}

inline
XsdMomentsResult::covariance_type& XsdMomentsResult::
covariance ()
{
  return this->covariance_.get ();
}

inline
void XsdMomentsResult::
covariance (const covariance_type& x)
{
  this->covariance_.set (x);
}

inline
void XsdMomentsResult::
covariance (::std::auto_ptr< covariance_type > x)
{
  this->covariance_.set (x);
}


// XsdDistributionTest
// 

inline
const XsdDistributionTest::result_optional& XsdDistributionTest::
result () const
{
  return this->result_;
}

inline
XsdDistributionTest::result_optional& XsdDistributionTest::
result ()
{
  return this->result_;
}

inline
void XsdDistributionTest::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdDistributionTest::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdDistributionTest::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdDistributionTest::grid_type& XsdDistributionTest::
grid () const
{
  return this->grid_.get ();
}

inline
XsdDistributionTest::grid_type& XsdDistributionTest::
grid ()
{
  return this->grid_.get ();
}

inline
void XsdDistributionTest::
grid (const grid_type& x)
{
  this->grid_.set (x);
}

inline
void XsdDistributionTest::
grid (::std::auto_ptr< grid_type > x)
{
  this->grid_.set (x);
}

inline
const XsdDistributionTest::distribution_type& XsdDistributionTest::
distribution () const
{
  return this->distribution_.get ();
}

inline
XsdDistributionTest::distribution_type& XsdDistributionTest::
distribution ()
{
  return this->distribution_.get ();
}

inline
void XsdDistributionTest::
distribution (const distribution_type& x)
{
  this->distribution_.set (x);
}

inline
void XsdDistributionTest::
distribution (::std::auto_ptr< distribution_type > x)
{
  this->distribution_.set (x);
}


// XsdDistributionMoments
// 

inline
const XsdDistributionMoments::result_optional& XsdDistributionMoments::
result () const
{
  return this->result_;
}

inline
XsdDistributionMoments::result_optional& XsdDistributionMoments::
result ()
{
  return this->result_;
}

inline
void XsdDistributionMoments::
result (const result_type& x)
{
  this->result_.set (x);
}

inline
void XsdDistributionMoments::
result (const result_optional& x)
{
  this->result_ = x;
}

inline
void XsdDistributionMoments::
result (::std::auto_ptr< result_type > x)
{
  this->result_.set (x);
}

inline
const XsdDistributionMoments::distribution_type& XsdDistributionMoments::
distribution () const
{
  return this->distribution_.get ();
}

inline
XsdDistributionMoments::distribution_type& XsdDistributionMoments::
distribution ()
{
  return this->distribution_.get ();
}

inline
void XsdDistributionMoments::
distribution (const distribution_type& x)
{
  this->distribution_.set (x);
}

inline
void XsdDistributionMoments::
distribution (::std::auto_ptr< distribution_type > x)
{
  this->distribution_.set (x);
}

inline
const XsdDistributionMoments::numPoints_optional& XsdDistributionMoments::
numPoints () const
{
  return this->numPoints_;
}

inline
XsdDistributionMoments::numPoints_optional& XsdDistributionMoments::
numPoints ()
{
  return this->numPoints_;
}

inline
void XsdDistributionMoments::
numPoints (const numPoints_type& x)
{
  this->numPoints_.set (x);
}

inline
void XsdDistributionMoments::
numPoints (const numPoints_optional& x)
{
  this->numPoints_ = x;
}

inline
XsdDistributionMoments::numPoints_type XsdDistributionMoments::
numPoints_default_value ()
{
  return numPoints_type (100000ULL);
}

inline
const XsdDistributionMoments::random_optional& XsdDistributionMoments::
random () const
{
  return this->random_;
}

inline
XsdDistributionMoments::random_optional& XsdDistributionMoments::
random ()
{
  return this->random_;
}

inline
void XsdDistributionMoments::
random (const random_type& x)
{
  this->random_.set (x);
}

inline
void XsdDistributionMoments::
random (const random_optional& x)
{
  this->random_ = x;
}

inline
void XsdDistributionMoments::
random (::std::auto_ptr< random_type > x)
{
  this->random_.set (x);
}


// XsdDistributionSeries
// 

inline
const XsdDistributionSeries::time_type& XsdDistributionSeries::
time () const
{
  return this->time_.get ();
}

inline
XsdDistributionSeries::time_type& XsdDistributionSeries::
time ()
{
  return this->time_.get ();
}

inline
void XsdDistributionSeries::
time (const time_type& x)
{
  this->time_.set (x);
}

inline
void XsdDistributionSeries::
time (::std::auto_ptr< time_type > x)
{
  this->time_.set (x);
}

inline
const XsdDistributionSeries::distribution_sequence& XsdDistributionSeries::
distribution () const
{
  return this->distribution_;
}

inline
XsdDistributionSeries::distribution_sequence& XsdDistributionSeries::
distribution ()
{
  return this->distribution_;
}

inline
void XsdDistributionSeries::
distribution (const distribution_sequence& s)
{
  this->distribution_ = s;
}


// XsdDistributionRandom
// 

inline
const XsdDistributionRandom::normal_optional& XsdDistributionRandom::
normal () const
{
  return this->normal_;
}

inline
XsdDistributionRandom::normal_optional& XsdDistributionRandom::
normal ()
{
  return this->normal_;
}

inline
void XsdDistributionRandom::
normal (const normal_type& x)
{
  this->normal_.set (x);
}

inline
void XsdDistributionRandom::
normal (const normal_optional& x)
{
  this->normal_ = x;
}

inline
void XsdDistributionRandom::
normal (::std::auto_ptr< normal_type > x)
{
  this->normal_.set (x);
}

inline
const XsdDistributionRandom::normal_type& XsdDistributionRandom::
normal_default_value ()
{
  return normal_default_value_;
}

inline
const XsdDistributionRandom::gamma_optional& XsdDistributionRandom::
gamma () const
{
  return this->gamma_;
}

inline
XsdDistributionRandom::gamma_optional& XsdDistributionRandom::
gamma ()
{
  return this->gamma_;
}

inline
void XsdDistributionRandom::
gamma (const gamma_type& x)
{
  this->gamma_.set (x);
}

inline
void XsdDistributionRandom::
gamma (const gamma_optional& x)
{
  this->gamma_ = x;
}

inline
void XsdDistributionRandom::
gamma (::std::auto_ptr< gamma_type > x)
{
  this->gamma_.set (x);
}

inline
const XsdDistributionRandom::gamma_type& XsdDistributionRandom::
gamma_default_value ()
{
  return gamma_default_value_;
}


// XsdDistributionParams
// 

inline
const XsdDistributionParams::random_optional& XsdDistributionParams::
random () const
{
  return this->random_;
}

inline
XsdDistributionParams::random_optional& XsdDistributionParams::
random ()
{
  return this->random_;
}

inline
void XsdDistributionParams::
random (const random_type& x)
{
  this->random_.set (x);
}

inline
void XsdDistributionParams::
random (const random_optional& x)
{
  this->random_ = x;
}

inline
void XsdDistributionParams::
random (::std::auto_ptr< random_type > x)
{
  this->random_.set (x);
}

inline
const XsdDistributionParams::root_optional& XsdDistributionParams::
root () const
{
  return this->root_;
}

inline
XsdDistributionParams::root_optional& XsdDistributionParams::
root ()
{
  return this->root_;
}

inline
void XsdDistributionParams::
root (const root_type& x)
{
  this->root_.set (x);
}

inline
void XsdDistributionParams::
root (const root_optional& x)
{
  this->root_ = x;
}

inline
void XsdDistributionParams::
root (::std::auto_ptr< root_type > x)
{
  this->root_.set (x);
}

inline
const XsdDistributionParams::quadrature_optional& XsdDistributionParams::
quadrature () const
{
  return this->quadrature_;
}

inline
XsdDistributionParams::quadrature_optional& XsdDistributionParams::
quadrature ()
{
  return this->quadrature_;
}

inline
void XsdDistributionParams::
quadrature (const quadrature_type& x)
{
  this->quadrature_.set (x);
}

inline
void XsdDistributionParams::
quadrature (const quadrature_optional& x)
{
  this->quadrature_ = x;
}

inline
void XsdDistributionParams::
quadrature (::std::auto_ptr< quadrature_type > x)
{
  this->quadrature_.set (x);
}

inline
const XsdDistributionParams::transform_optional& XsdDistributionParams::
transform () const
{
  return this->transform_;
}

inline
XsdDistributionParams::transform_optional& XsdDistributionParams::
transform ()
{
  return this->transform_;
}

inline
void XsdDistributionParams::
transform (const transform_type& x)
{
  this->transform_.set (x);
}

inline
void XsdDistributionParams::
transform (const transform_optional& x)
{
  this->transform_ = x;
}

inline
void XsdDistributionParams::
transform (::std::auto_ptr< transform_type > x)
{
  this->transform_.set (x);
}


// XsdDistributionRow
// 

inline
const XsdDistributionRow::cdf_type& XsdDistributionRow::
cdf () const
{
  return this->cdf_.get ();
}

inline
XsdDistributionRow::cdf_type& XsdDistributionRow::
cdf ()
{
  return this->cdf_.get ();
}

inline
void XsdDistributionRow::
cdf (const cdf_type& x)
{
  this->cdf_.set (x);
}

inline
const XsdDistributionRow::pdf_optional& XsdDistributionRow::
pdf () const
{
  return this->pdf_;
}

inline
XsdDistributionRow::pdf_optional& XsdDistributionRow::
pdf ()
{
  return this->pdf_;
}

inline
void XsdDistributionRow::
pdf (const pdf_type& x)
{
  this->pdf_.set (x);
}

inline
void XsdDistributionRow::
pdf (const pdf_optional& x)
{
  this->pdf_ = x;
}

inline
const XsdDistributionRow::point_type& XsdDistributionRow::
point () const
{
  return this->point_.get ();
}

inline
XsdDistributionRow::point_type& XsdDistributionRow::
point ()
{
  return this->point_.get ();
}

inline
void XsdDistributionRow::
point (const point_type& x)
{
  this->point_.set (x);
}

inline
void XsdDistributionRow::
point (::std::auto_ptr< point_type > x)
{
  this->point_.set (x);
}


// Begin epilogue.
//
//
// End epilogue.

#endif // CXX___SCHEMA_XSD_MATH_DISTRIBUTION_IXX
