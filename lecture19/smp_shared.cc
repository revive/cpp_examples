#include <iostream>
#include <memory>
 
struct Base
{
    Base() { std::cout << "  Base::Base()\n"; }
    virtual ~Base() { std::cout << "  Base::~Base()\n"; }
};
struct Derived: public Base
{
    Derived() { std::cout << "  Derived::Derived()\n"; }
    ~Derived() { std::cout << "  Derived::~Derived()\n"; }
};
 
int main()
{
    std::shared_ptr<Base> p = std::make_shared<Derived>();
 
    std::cout << "Created a shared Derived (as a pointer to Base)\n"
              << "  p.get() = " << p.get()
              << ", p.use_count() = " << p.use_count() << '\n';
    for (int i = 0; i < 3; ++i) {
        std::shared_ptr<Base> pt = p;
        std::cout << p.use_count() << ":" << pt.use_count() << std::endl;
    }
    std::cout << "p.use_count() = " << p.use_count() << '\n';
}
