#include <iostream>
#include <ios>

using std::cin;
using std::cout;
using std::endl;
using std::hex;
using std::oct;
using std::dec;

int main()
{
  unsigned short b1 = 0227;
  b1 = ~b1;
  cout << dec << b1 << "(0" << oct << b1 << ")" << endl;
  auto b2 = ~b1;
  cout << dec << b2 << "(0" << oct << b2 << ")" << endl;

  unsigned char c1 = 0145;
  unsigned char c2 = 0257;
  unsigned char c3 = c1 & c2;
  auto c4 = c1 | c2;
  auto c5 = c1 ^ c2;

  cout << oct;
  cout << +c3 << endl;
  cout << +c4 << endl;
  cout << +c5 << endl;

  unsigned char bits = 0145;
  auto nbits_1 = bits << 5;
  auto nbits_2 = bits >> 5;
  cout << +bits << endl;
  cout << nbits_1 << endl;
  cout << nbits_2 << endl;
}
