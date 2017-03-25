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
    if (!line.empty())
//    if (line.size()>20)
      cout << line << endl;
  }
  cout << "Done!" << endl;
}
