#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::endl;
using std::string;
using std::toupper;
using std::isspace;

int main ()
{
  string s{"everything that has a beginning has an end."};
  if (s.begin() != s.end()) {
    auto it = s.begin();
    *it = toupper(*it);
  }
  cout << s << endl;

  for (auto it = s.begin(); it != s.end(); ++it) {
    (*it) = toupper(*it);
  }
  cout << s << endl;
}
