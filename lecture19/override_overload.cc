#include <iostream>

struct Base {
    virtual int memfcn() { return 0; }
    virtual int memfcn(int i) { return i; }
};
struct Derived : Base {
    using Base::memfcn;
    int memfcn(int i) { return i+1;}
};

int main ()
{
    Derived d;
    std::cout << d.memfcn() << std::endl;
    std::cout << d.memfcn(1) << std::endl;
    std::cout << d.Base::memfcn() << std::endl;
    std::cout << d.Base::memfcn(1) << std::endl;

}
