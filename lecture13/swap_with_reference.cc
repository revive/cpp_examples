#include <iostream>

void swap (int &a, int &b)
{
  int i;
  i = a;
  a = b;
  b = i;
}

int main ()
{
  int x{3}, y{5};
  swap (x, y);
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
}
