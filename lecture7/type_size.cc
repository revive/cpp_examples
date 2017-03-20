#include <iostream>

using namespace std;
int main ()
{
    cout << "size of bool = " << sizeof(bool) * 8 << " bits." << endl;
    cout << "size of char = " << sizeof(char) * 8 << " bits." << endl;
    cout << "size of wchar_t = " << sizeof(wchar_t) * 8 << " bits." << endl;
    cout << "size of char16_t = " << sizeof(char16_t) * 8 << " bits." << endl;
    cout << "size of char32_t = " << sizeof(char32_t) * 8 << " bits." << endl;
    cout << "size of short = " << sizeof(short) * 8 << " bits." << endl;
    cout << "size of int = " << sizeof(int) * 8 << " bits." << endl;
    cout << "size of long = " << sizeof(long) * 8 << " bits." << endl;
    cout << "size of long long = " << sizeof(long long) * 8 << " bits." << endl;
    cout << "size of float = " << sizeof(float) * 8 << " bits." << endl;
    cout << "size of double = " << sizeof(double) * 8 << " bits." << endl;
    cout << "size of long double = " << sizeof(long double) * 8 << " bits." << endl;
}
