#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main ()
{
  string s;
  while (cin >> s)
    cout << s << endl;
  cout << "Done!" << endl;
}
