#include <iostream>
 
int main()
{
  // for loop with a compound statement
  int sum = 0, j = 1, i = 4;
  std::cin >> i;
  for (j = i; sum < 100; j++) {
    sum += j;
  }
  std::cout << "The sum from " << i << " to " << j-1
	    << " inclusive is " << sum << std::endl; 
}
