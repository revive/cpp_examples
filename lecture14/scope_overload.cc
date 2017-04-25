#include <iostream>

using std::cout;
using std::endl;

void print(int i);

int main ()
{
  print (5);
  int print = 3;
  //  print (print);
  cout << print << endl;
}

void print (int i)
{
  cout << i << endl;
}
