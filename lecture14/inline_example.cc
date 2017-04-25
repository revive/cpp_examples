#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

inline const string & shorterString (const string & s1,
				   const string & s2)
{
  return s1.size()>s2.size()?s1:s2;
}

int main ()
{
  string s1{"I love SJTU"};
  string s2{"I love Physics"};
  const string & s = shorterString(s1, s2);
  cout << s << endl;
  //  it is expanded to:
  //  const string & s = s1.size()>s2.size()?s1:s2;

}
