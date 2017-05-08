#include "TType.h"

#include <iostream>
#include <typeinfo>

int main ()
{
    if (typeid(f) == typeid(g))
        std::cout << "f and g are of the same type." << std::endl;
    else
        std::cout << "f and g are of different types." << std::endl;
    // f ff;
    // g gg = ff;

    data d = {1, 3.5, 18.3, "taken in 2017/5/4"};

    constexpr Debug debug = {1, true};
}
