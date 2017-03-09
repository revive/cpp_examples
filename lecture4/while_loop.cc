#include <iostream>
 
int main()
{
  // while loop with a single statement
  int i = 0;
  while (i < 10)
    i++;
  std::cout << i << std::endl;
 
  // while loop with a compound statement
  int sum = 0, j = 0;
  while (sum < 100) {
    j++;
    sum += j;
    std::cout << "j = " << j << std::endl;
  }
  std::cout << "The sum from 1 to " << j
	    << " inclusive is " << sum << std::endl; 
}
