#include <iostream>
#include <string>

int main ()
{

  int i = 0, j;
  j = ++i; // j = 1, i = 1: prefix yields the incremented value
  std::cout<< i << ", " << j << std::endl;
  j = i++; // j = 1, i = 2: postfix yields the unincremented value
  std::cout<< i << ", " << j << std::endl;

  string finalgrade = (grade < 60) ? "fail" : "pass";
}
