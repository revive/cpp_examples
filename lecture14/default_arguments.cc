#include <iostream>

using std::cout;
using std::endl;

int f(int i, int j);
int f(int i, int j = 4);
int g();

int main ()
{
  cout << f(7, 8) << endl;
  cout << f(7) << endl;
  cout << g() << endl;
}

int f(int i = 3, int j);

int g()
{
  return f();
}

int f(int i, int j)
{
  return i + j*j;
}
