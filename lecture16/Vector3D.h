#ifndef VECTOR3D_H_
#define VECTOR3D_H_

#include <istream>

class Vector3D {

public:
    // functions exposed
    // the constructor
    Vector3D () = default;

    Vector3D (double x, double y, double z);

    Vector3D (const Vector3D &v);

    void SetXYZ (double x, double y, double z);

    double GetX () const { return x_; }

    double GetY () const { return y_; }

    double GetZ () const { return z_; }

    double Length () const;

    double Magnitude() const;

    double Distance (const Vector3D & v) const;

    double Distance () const;

    Vector3D & Scale (double d);

    double Angle (const Vector3D &v) const;

    Vector3D Add (const Vector3D &v) const;

    double DotProduction (const Vector3D &v) const;

    Vector3D CrossProduction (const Vector3D &v) const;

    Vector3D & operator+= (const Vector3D & rhs);

    Vector3D operator*(double s) const;

    // the friend functions
    friend std::istream & read(std::istream &s, Vector3D & v);
    friend std::ostream & print(std::ostream &s, const Vector3D &v);

    // the friend classes
    friend class Particle;

private:
    // the data members
    double x_ = 0;
    double y_ = 0;
    double z_ = 0;
    
};

std::istream & read(std::istream &s, Vector3D &v);
std::ostream & print(std::ostream &s, const Vector3D &v);

// inline function definitions
inline void Vector3D::SetXYZ (double x, double y, double z)
{
    x_ = x;
    y_ = y;
    z_ = z;
}

#endif // VECTOR3D_H_
