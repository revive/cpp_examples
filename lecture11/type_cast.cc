#include <iostream>

using std::cout;
using std::endl;

int main ()
{
  int i{11}, j{21};
  double x = i/j;
  double y = static_cast<double>(i) / j;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}
