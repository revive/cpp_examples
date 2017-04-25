#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main ()
{
  int score{0};
  // score < 60: E
  // 60 <= score < 70: D
  // 70 <= score < 80: C
  // 80 <= score < 90: B
  // 90 <= score < 100: A
  // score == 100 : A++
  vector<string> grade{"E", "D", "C" ,"B", "A", "A++"};
  while (cin >> score) {
    if (score < 60)
      cout << grade[0] << endl;
    else {
      auto index = (score - 60)/10 + 1;
      cout << grade[index] << endl;
    }
  }
}
