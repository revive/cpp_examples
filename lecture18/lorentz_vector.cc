#include "lorentz_vector.h"

#include <cmath>
using std::sqrt;

LorentzVector::LorentzVector (double x0, double x1, double x2, double x3)
    : x0_{x0}, x1_{x1}, x2_{x2}, x3_{x3} {}

LorentzVector::LorentzVector (const LorentzVector &v)
    : x0_{v.x0_}, x1_{v.x1_}, x2_{v.x2_}, x3_{v.x3_} {}

double LorentzVector::Mag2() const
{
    return x0_ * x0_ - x1_ * x1_ - x2_ * x2_ - x3_ * x3_;
}

double LorentzVector::Magnitude() const
{
    double mm = Mag2();
    return mm<0?-sqrt(-mm):sqrt(mm);
}

double LorentzVector::Dot(const LorentzVector &lv) const
{
    return x0_ * lv.x0_ - x1_ * lv.x1_ - x2_ * lv.x2_ - x3_ * lv.x3_;
}

LorentzVector LorentzVector::operator*(double lambda) const
{
    return {lambda * x0_, lambda * x1_,
            lambda * x2_, lambda * x3_};
}

LorentzVector operator*(double lambda, const LorentzVector &lv)
{
    return lv * lambda;
}

LorentzVector LorentzVector::operator+(const LorentzVector &rhs) const
{
    return {x0_ + rhs.x0_, x1_ + rhs.x1_,
           x2_ + rhs.x2_, x3_ + rhs.x3_};
}

LorentzVector LorentzVector::operator-() const
{
    return {-x0_, -x1_, -x2_, -x3_};
}

LorentzVector LorentzVector::operator-(const LorentzVector & rhs) const
{
    return {x0_ - rhs.x0_, x1_ - rhs.x1_,
            x2_ - rhs.x2_, x3_ - rhs.x3_};
}

LorentzVector & LorentzVector::operator*= (double lambda)
{
    x0_ *= lambda;
    x1_ *= lambda;
    x2_ *= lambda;
    x3_ *= lambda;
    return *this;
}

LorentzVector & LorentzVector::operator+= (const LorentzVector & rhs)
{
    x0_ += rhs.x0_;
    x1_ += rhs.x1_;
    x2_ += rhs.x2_;
    x3_ += rhs.x3_;
    return *this;
}

LorentzVector & LorentzVector::operator-= (const LorentzVector & rhs)
{
    x0_ -= rhs.x0_;
    x1_ -= rhs.x1_;
    x2_ -= rhs.x2_;
    x3_ -= rhs.x3_;
    return *this;
}

bool LorentzVector::operator!= (const LorentzVector &rhs) const
{
    return !(*this == rhs);
}

bool LorentzVector::operator== (const LorentzVector &rhs) const
{
    return x0_ == rhs.x0_ && x1_ == rhs.x1_ && x2_ == rhs.x2_ && x3_ == rhs.x3_;
}
