#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

vector<string> process(int stat)
{
  if (stat == 0) {
    return {};
  }
  if (stat == 1) {
    return {"Load", "Success"};
  }
  if (stat == -1) {
    return {"Load", "Failure"};
  }
  return {"Unexpected"};
}

int main()
{
  auto v = process(1);
  for (const auto & s: v) {
    cout << s << endl;
  }
  return 0;
}
