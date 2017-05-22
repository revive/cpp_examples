#include <iostream>

using std::cout;
using std::endl;

class Base {
public:
    Base () : p{new int[100]} {}
    virtual ~Base () { cout << "Base Destructor!" << endl; delete [] p;}
protected:
    int *p;
};

class Derived : public Base {
public:
    Derived () : Base(), q{new int[100]} {}
    ~Derived () {
        cout << "Derived Destructor!" << endl;
        delete [] q;
//        delete [] p;
    }
private:
    int *q;
};

int main () {
    
    Base * pb = new Derived;
    delete pb;
Derived d;
}
