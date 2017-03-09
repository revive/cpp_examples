#include "Vector3D.h"

#include <cmath>
#include <iostream>

double Vector3D::Length () const
{
  return std::sqrt(x_ * x_ + y_ * y_ + z_ * z_);
}

void Vector3D::Scale (double a)
{
  x_ *= a;
  y_ *= a;
  z_ *= a;
}

double Vector3D::DotProduct (const Vector3D & v) const
{
  return x_ * v.x_ + y_ * v.y_ + z_ * v.z_;
}

Vector3D Vector3D::CrossProduct (const Vector3D &v) const
{
  return Vector3D( y_ * v.z_ - z_ * v.y_,
		   z_ * v.x_ - x_ * v.z_,
		   x_ * v.y_ - y_ * v.x_);
}

void Vector3D::Print () const
{
  std::cout << "(" << x_ << ", " << y_ << ", " << z_ << ")" << std::endl;
}

void Vector3D::Inverse ()
{
  Scale(-1);
}

Vector3D & Vector3D::operator+ (const Vector3D & v)
{
  x_ += v.x_;
  y_ += v.y_;
  z_ += v.z_;
  return *this;
}

std::ostream &operator<<(std::ostream &os, const Vector3D & v)
{
  os << "(" << v.GetX() << ", " << v.GetY() << ", "
     << v.GetZ() << ")";
  return os;
}
