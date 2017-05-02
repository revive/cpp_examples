#include "Vector3D.h"

#include <cmath>

using std::sqrt;
using std::acos;

Vector3D::Vector3D (double x, double y, double z)
    : x_{x}, y_{y}, z_{z} {}

Vector3D::Vector3D (const Vector3D &v)
    : x_{v.x_}, y_{v.y_}, z_{v.z_} {}

void Vector3D::SetXYZ (double x, double y, double z)
{
    x_ = x;
    y_ = y;
    z_ = z;
}

double Vector3D::Length () const
{
    return sqrt(x_ * x_ + y_ * y_ + z_ * z_);
}

double Vector3D::Magnitude () const
{
    return Length();
}

double Vector3D::Distance (const Vector3D & v) const
{
    double dx = x_ - v.x_;
    double dy = y_ - v.y_;
    double dz = z_ - v.z_;
    return sqrt(dx * dx + dy * dy + dz * dz);
}

Vector3D & Vector3D::Scale (double d)
{
    x_ *= d;
    y_ *= d;
    z_ *= d;
    return *this;
}

double Vector3D::Angle (const Vector3D &v) const
{
    if (Length() == 0 || v.Length() == 0)
        return 0;
    return acos(DotProduction(v) / (Length() * v.Length()));
}

Vector3D Vector3D::Add (const Vector3D &v) const
{
    double x = x_ + v.x_;
    double y = y_ + v.y_;
    double z = z_ + v.z_;
    return Vector3D(x, y, z);
}

double Vector3D::DotProduction (const Vector3D &v) const
{
    return x_ * v.x_ + y_ * v.y_ + z_ * v.z_;
}

Vector3D Vector3D::CrossProduction (const Vector3D &v) const
{
    double x = y_ * v.z_ - z_ * v.y_;
    double y = z_ * v.x_ - x_ * v.z_;
    double z = x_ * v.y_ - y_ * v.x_;
    return Vector3D(x, y, z);
}

std::istream & read(std::istream &s, Vector3D & v)
{
    s >> v.x_ >> v.y_ >> v.z_;
    return s;
}

std::ostream & print(std::ostream &s, const Vector3D &v)
{
    s << "(" << v.x_ << ", " << v.y_ << ", " << v.z_ << ")";
    return s;
}
