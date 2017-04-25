#include "print_overload2.h"

#include <iostream>

using std::cout;
using std::endl;

void print2 (float f1, float f2)
{
  cout << "print 2 floats: " << f1 << ", " << f2 << endl;
}

void print2 (double d1, double d2)
{
  cout << "print 2 doubles: " << d1 << ", " << d2 << endl;
}
