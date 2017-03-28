#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main ()
{
  double e;
  vector<int> energy_spectrum(20, 0);
  while (cin >> e) {
    if (e > 0 && e < 10) {
      ++energy_spectrum[e/0.5];
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
