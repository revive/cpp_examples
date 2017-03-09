#include "Vector3D.h"

#include <iostream>

int main () {
  Vector3D v1(1, 2, 3);
  Vector3D v2(-3, 1, 2);
  std::cout << "v1 is " << v1 << std::endl;
  std::cout << "v2 is " << v2 << std::endl;
  v1 + v2;
  std::cout << "after addition, v1 changed to: " << v1 << std::endl;
  std::cout << "but v2 is still " << v2 << std::endl;
  double s = v1.DotProduct(v2);
  std::cout << "The dot production of v1 and v2 is " << s << std::endl;
  Vector3D v3 = v1.CrossProduct(v2);
  std::cout << "After cross production, v1 is " << v1 << ", v2 is "
	    << v2 << ", and v3 is " << v3 << std::endl;
}
