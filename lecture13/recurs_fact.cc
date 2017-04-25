#include <iostream>
#include <sstream>

int factorial (int i)
{
  if (i>1)
    return i * factorial(i-1);
  return 1;
}

int main (int argc, char * argv[])
{
  if (argc != 2)
    return 1;
  int a;
  {
    std::stringstream ss(argv[1]);
    ss >> a;
  }
  std::cout << "The factorial of " << a << " is "
	    << factorial(a) << std::endl;
}
