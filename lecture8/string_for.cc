#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main ()
{
  string line;
  while (getline(cin, line)) {
    for (auto c: line)
      cout << c << endl;
  }

}
