#include <iostream>
#include <sstream>

int &func(int n)
{
  int sum{0};
  for (int i = 1; i<=n; ++i) {
    sum += i;
    if (sum > 10)
      return sum;
  }
  return sum;
}

int main(int argc, char * argv[])
{
  if (argc != 2)
    return 1;
  int a;
  {
    std::stringstream ss(argv[1]);
    ss >> a;
  }
  int v = func(a);
  std::cout << v << std::endl;
}
