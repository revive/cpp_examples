#include "print_square.h"

#include <iostream>

using std::cout;
using std::endl;

void print_square (int &i)
{
  cout << "square of int " << i << " is " << i * i << endl;
}

void print_square (const int &i)
{
  cout << "square of const int " << i << " is " << i * i << endl;
}
