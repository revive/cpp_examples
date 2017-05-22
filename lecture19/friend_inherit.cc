#include <iostream>

class Base {
    friend class Pal;
public:
    void pub_mem() {}
protected:
    int prot_mem;
private:
    char priv_mem;
};

class Sneaky: public Base {
private:
    int j;
}



class Pal {
public:
    int f(Base b) { return b.prot_mem; }

    int f2(Sneaky s) { return s.j;}

    int f3(Sneaky s) { return s.prot_mem; }
};

class D2 : public Pal {
public:
    int mem (Base b) { return b.prot_mem; }
}
