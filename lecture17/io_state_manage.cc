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
    if (cin.fail()) {
        cout << "cin fail!" << endl;
    }
    if (cin.bad()) {
        cout << "cin bad!" << endl;
    }
    if (cin.eof()) {
        cout << "cin eof!" << endl;
    }
    auto st = cin.rdstate();
    cin.clear();
    while (cin >> i) {
        cout << "read again: " << i << endl;
    }
    cin.setstate(st);
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
