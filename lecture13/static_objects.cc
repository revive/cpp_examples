#include <iostream>
#include <sstream>

size_t count_calls ()
{
  static size_t count{0};
  return ++count;
}

int main (int argc, char * argv[])
{
  int n{100};
  if (argc>1) {
    std::stringstream ss{argv[1]};
    ss >> n;
  }
  size_t c;
  for (int i=0; i<n; ++i) {
    c = count_calls();
  }
  std::cout << c << std::endl;
}
