#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main ()
{
  vector<int> v;
  int i;
  // read until end-of-file or other input failure
  while (cin >> i)
    v.push_back(i);
  // find the first negative element
  auto beg = v.begin();
  while (beg != v.end() && *beg >= 0)
    ++beg;
  if (beg == v.end())
    cout << "no negative element was found!";

  do {
    cin >> i;
    cout << "read a number" << endl;
  } while(i>0);

  char c;
  string s;
  while (cin >> c) {
    if (c == '0')
      break;
    s.append(c);
  }

  string buf;
  while (cin >> buf && !buf.empty()) {
    if (buf[0] != '_')
      continue; // get another input
    cout << buf << endl;
  }

}

int main ()
{
  for (int x = 0; 0; x < 3; x++) {
    for (int y = 0; y < 3; y++) {
      cout << "(" << x << ";" << y << ") " << endl;
      if (x + y >= 3) {
	goto endloop;
      }
    }
  }
 endloop:
  cout << endl;

  int x = 11;
  
  string s{"string"};
 
}
