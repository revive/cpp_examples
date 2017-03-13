#include "Vector3D.h"

#include <iostream>

int main ()
{
  Vector3D v1(3, 4, 0);
  v1.Print();
  double a = v1.Length();
  std::cout << "Its length is " << a << std::endl;
}
