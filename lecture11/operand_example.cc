#include <iostream>
#include <memory>

using std::cout;
using std::endl;

int main ()
{
  int i = 0;
  cout << i << ", " << ++i << endl;

  // ia is a array with 10 pointer to int.
  int *ia[10] = {};
  for (auto & p: ia) {
    p = new int;
    *p = 100;
  }
  *ia[8] = **(ia + 4) * 2 + 3;
  for (const auto & p: ia) {
    cout << *p << endl;
  }
}
