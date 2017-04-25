#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int num;
  cin >> num;
  // num % 2 computes the remainder when num is divided by 2
  if ( num % 2 == 0 ) {
    cout << num << " is even.";
  }
  return 0;
}
