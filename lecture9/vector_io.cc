#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main ()
{

  vector<string> sv;
  if (sv.empty())
    cout << "Before reading, the vector is empty!" << endl;
  string s;
  while(cin >> s)
    sv.push_back(s);

  cout << sv.size() << endl;
}
