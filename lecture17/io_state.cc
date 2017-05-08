#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
    int i;
    while (cin >> i) {
        cout << i << endl;
    }
    auto s = cin.rdstate();
    cout << s << endl;
    if (cin.fail()) {
        cout << "cin fail!" << endl;
    }
    if (cin.bad()) {
        cout << "cin bad!" << endl;
    }
    if (cin.eof()) {
        cout << "cin eof!" << endl;
    }
}
