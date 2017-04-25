#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
  using uint = unsigned int;
  uint a_count{0}, e_count{0}, i_count{0}, o_count{0}, u_count{0};
  char c;
  while (cin >> c) {
    switch (c) {
    case 'a':
    case 'A':
      ++ a_count;
      break;
    case 'e':
    case 'E':
      ++ e_count;
      break;
    case 'i':
    case 'I':
      ++ i_count;
      break;
    case 'o':
    case 'O':
      ++ o_count;
      break;
    case 'u':
    case 'U':
      ++ u_count;
      break;
    default:
      ;				// do nothing here
    }
  }
  cout << "count of a/A is " << a_count << endl;
  cout << "count of e/E is " << e_count << endl;
  cout << "count of i/I is " << i_count << endl;
  cout << "count of o/O is " << o_count << endl;
  cout << "count of u/U is " << u_count << endl;
}
