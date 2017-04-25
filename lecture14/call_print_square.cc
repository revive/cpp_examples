#include "print_square.h"

#include <sstream>

int main (int argc, char * argv[])
{
  if (argc !=2 ) {
    return 1;
  }
  int i;
  {
    std::stringstream ss(argv[1]);
    ss >> i;
  }
  print_square(i);
  const int j{i};
  print_square(j);
}
