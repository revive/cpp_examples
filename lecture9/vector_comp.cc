#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main ()
{
  vector<int> iv1{1, 1, 2, 2, 3, 3};
  vector<int> iv2(iv1);
  vector<int> iv3{1, 1, 3, 2, 3, 3};

  cout << (iv1 == iv2) << endl;
  cout << (iv1 > iv3) << endl;

}
