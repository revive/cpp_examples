#include <iostream>

int sum (int x, int y)
{
  return x + y;
}

void print_sum (int x, int y)
{
  std::cout << "The sum of " << x << " and " << y
	    << " is " << sum(x, y) << std::endl;
}

int main ()
{
  int x{0}, y{0};
  std::cin >> x >> y;
  print_sum (x, y);
}
