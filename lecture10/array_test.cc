#include <iostream>

int main ()
{
  int ia[] = {0,2,4,6,8}; // array with 5 elements of type int

  int *p = &ia[2]; // p points to the element indexed by 2
  int j = p[1];	   // p[1] is equivalent to *(p + 1),
		   // p[1] is the same element as ia[3]
  int k = p[-2];   // p[-2] is the same element as ia[0]

  std::cout << j << ", " << k << std::endl;
  int ib[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

  std::cout << ib[2][3] << std::endl;
}
