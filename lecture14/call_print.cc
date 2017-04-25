#include "print_overload.h"

int main ()
{
  int i{13};
  float f{2.7};
  double d{3.14159};
  char c{'S'};
  std::string s{"I love SJTU!"};

  print (i);
  print (f);
  print (d);
  print (c);
  print ("I love SJTU!");
  print (s);
}
