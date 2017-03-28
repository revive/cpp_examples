#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main ()
{
  vector<int> iv{1, 3, 5, 11, 12, 13, 16, 19, 20, 23, 29, 32, 34, 35, 37, 40, 45, 52, 59, 63, 64, 66, 67, 71, 72, 75, 77, 79, 81, 83, 88, 92, 94, 95, 100, 101, 103, 107, 110, 111};
  cout << "The size of the initial vector is " << iv.size() << "." << endl;
  auto s = iv.begin();
  auto e = iv.end();
  auto m = iv.begin() + (iv.end() - iv.begin())/2;

  int sought = 81;
  while (m != e && *m != sought) {
    if (sought < *m) {
      e = m;
    } else {
      s = m + 1;
    }
    m = s + (e-s)/2;
  }
  if (*m == sought) {
    cout << "We found the number " << sought << " at position "
	 << m - iv.begin() << endl;
  }
}
