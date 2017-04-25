#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool lengthCompare(const string &s1, const string &s2)
{
  return s1.size() < s2.size();
}

int main ()
{
  bool (*fp) (const string &s1, const string &s2) {nullptr};
  fp = lengthCompare();
  string a{"Hello!"};
  string b{"Hallo!"};

  if (fp(a, b)) {
    cout << "string \"" << a << "\" is smaller than string \""
	 << b << "\"" << endl;
  } else {
    cout << "string \"" << a << "\" is not smaller than string \""
	 << b << "\"" << endl;
  }
}
