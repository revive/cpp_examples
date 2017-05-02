#include "Vector3D.h"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
    Vector3D v1, v2;
    read(cin, v1);
    read(cin, v2);
    print(cout, v1);
    cout << endl;
    double x = v2.GetX();
    cout << x << endl;
    cout << v1.Length() << endl;
    cout << v1.DotProduction(v2) << endl;
   v1 = v1.Add(v2);
    print(cout, v1);
    cout << endl;
    auto v3 = v1.CrossProduction(v2);
    print(cout, v2);
    cout << endl;
    print(cout, v3);
    cout << endl;
    print(cout, v3.Scale(2));
    cout << endl;
    auto v4{v3};
}
