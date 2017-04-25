#include "string_func.h"

#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main ()
{
  string s1{"I love SJTU"};
  string s2{"I love Physics"};
  string & s3 = shorterString(s1, s2);
  const string & s4 = shorterString(s1, s2);

  cout << s3 << endl;
  cout << s4 << endl;
}
