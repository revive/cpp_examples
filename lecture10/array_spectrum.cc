#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
  double e;
  int energy_spectrum[20] = {};
  while (cin >> e) {
    if (e > 0 && e < 10) {
      size_t index = e/0.5;
      ++energy_spectrum[index];
    }
  }

  e = 0;
  for (auto c: energy_spectrum) {
    cout << e << "\t";
    for (int i = 0; i < c; ++i) {
      cout << "#";
    }
    cout << endl;
    e += 0.5;
  }
}
