#include "string_func.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

auto get_string (int i) -> const string &(*) (const string &s1, const string &s2)
{
  if (i > 0) {
    return longerString;
  }
  return shorterString;
}

int main ()
{
  string s1{"abcdefgh"};
  string s2{"opqrstu"};
  cout << get_string(1)(s1, s2) << endl;
  cout << get_string(-1)(s1, s2) << endl;
}
