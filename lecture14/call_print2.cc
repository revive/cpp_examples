#include "print_overload2.h"

int main ()
{
  int i{13};
  float f{2.7};
  double d{3.14159};

  float f2{33.5};
  print2 (f, f2);
  print2 (d, 99);
  print2 (f, 99);
  print2 (f, d);
}
