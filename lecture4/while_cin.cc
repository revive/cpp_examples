#include <iostream>
 
int main()
{
  int sum{0}, value{0};
  // exit loop until the expression can be evaluated as false
  while (std::cin >> value)
    sum += value;

  std::cout << "The sum is " << sum << std::endl;
  return 0;
}
