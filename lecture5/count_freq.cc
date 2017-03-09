#include <iostream>

int main()
{
  int old_value{0}, value{0};
  int count{0};
  if (std::cin >> value) {
    old_value = value;
    count++;
    while(std::cin >> value) {
      if (old_value == value) {
	count++;
      } else {
	std::cout << "count of " << old_value
		  << " is " << count << std::endl;
	old_value = value;
	count = 1;
      }
    } // the while end here
    std::cout << "count of " << old_value
	      << " is " << count << std::endl;
  } // the if end here
  // no return statement here
}
