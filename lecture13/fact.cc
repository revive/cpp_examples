#include <iostream>
#include <sstream>

int factorial (int i)
{
  int f{1};
  while (i>0) {
    f *= i;
    --i;
  }
  return f;
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
