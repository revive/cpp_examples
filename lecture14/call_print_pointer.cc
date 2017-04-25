#include "print_overload.h"

int main ()
{
  void (*fp) (int i) = print;
  fp(3.15);
}
