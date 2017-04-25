#include <iostream>

using std::cout;
using std::endl;

constexpr int factorial(int n)
{
    return n <= 1? 1 : (n * factorial(n - 1));
}

int main ()
{
  constexpr int n = 7;
  constexpr int fact_seven = factorial(n);
  cout << fact_seven << endl;
}
