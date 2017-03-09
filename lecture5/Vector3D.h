#ifndef VECTOR_3D_H
#define VECTOR_3D_H

#include <iostream>

// this is a simple example of a user-defined type
// of vector 3d

class Vector3D {

private:
  double x_;
  double y_;
  double z_;

public:
  // the default constructor
  Vector3D (double x = 0, double y = 0, double z = 0)
    :x_{x}, y_{y}, z_{z} {}

  // set functions
  void SetX (double x) { x_ = x; }
  void SetY (double y) { y_ = y; }
  void SetZ (double z) { z_ = z; }

  // get functions
  double GetX () const { return x_; }
  double GetY () const { return y_; }
  double GetZ () const { return z_; }
  
  // calculate the length of the vector
  double Length () const;

  // Scale the vector
  void Scale (double a);

  // dot product
  double DotProduct (const Vector3D & v) const;

  // cross product, return a new vector
  Vector3D CrossProduct (const Vector3D & v) const;

  // inverse the vector
  void Inverse ();

  // vector addtion
  Vector3D & operator+(const Vector3D &v);

  // print the content
  void Print() const;

};

std::ostream &operator<<(std::ostream &os, const Vector3D & v);

#endif
