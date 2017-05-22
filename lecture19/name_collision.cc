/*
struct Base {
    Base(): mem(0) { }
protected:
    int mem;
};

struct Derived : Base {
    Derived(int i): mem(i) { }
    int get_mem() { return mem; }
    int get_base_mem() { return Base::mem; }
protected:
    int mem;
};
*/
struct Base {
    int memfcn();
};
struct Derived : Base {
    int memfcn(int); // hides memfcn in the base
};

int main () {
    Derived d;
    Base b;
    b.memfcn(); // calls Base::memfcn
    d.memfcn(10); // calls Derived::memfcn
    d.memfcn(); // error: memfcn with no arguments is hidden
    d.Base::memfcn(); // ok: calls Base::memfcn
}

class Foo {
public:
    ~Foo () {}
};
