#include "print_overload.h"

#include <iostream>

using std::cout;
using std::endl;

void print (int i)
{
  cout << "print an int: " << i << endl;
}

void print (float f)
{
  cout << "print a float: " << f << endl;
}

void print (double d)
{
  cout << "print a double: " << d << endl;
}

void print (char c)
{
  cout << "print a char: " << c << endl;
}

void print (const char * s)
{
  cout << "print a char array: " << s << endl;
}

void print (const std::string &s)
{
  cout << "print a std::string: " << s << endl;
}

