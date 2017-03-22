#include "Vector3D.h"

#include <iostream>
#include <cmath>

int main ()
{
    using V3D = Vector3D;

    V3D v;
    v.x = 1.2;
    v.y = 2.3;
    v.z = 3.4;

    std::cout << "length of vector v is "
              << std::sqrt(v.x*v.x + v.y*v.y + v.z*v.z)
              << std::endl;

}
