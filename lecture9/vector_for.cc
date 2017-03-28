#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> iv{1, 3, 5, 7, 9};

  for (auto &i : iv) {
    i *= i;
  }
  for (auto i : iv) {
    cout << i << endl;
  }
}
