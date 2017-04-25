// This file is only used to provide examples
// It may not be compiled.

#include <iostream>

int main ()
{
  int genRandom();
  double genRandom();

  void print(int i);
  void print(int i, int j);

  typedef int Int_t; //  using Int_t = int;
  void print(int);
  void print(int i);
  void print(Int_t i);

  void print (int i);
  void print (const int i); // the same as above

  void print (int &i);
  void print (const int &i);

  const string & shorterString (const string &s1, const string &s2);
  string & shorterString(string &s1, string &s2);

  void print (int i);
  
  void print (float f);
  
  void print (double d = 3.14);
  
  void print (float f1, float f2);
  
  void print (double d1, double d2 = 3.14);
  
  void print ();

  print (3);

  string s1{"I love SJTU"};
  string s2{"I love Physics"};
  cout << shorterString(s1, s2) << endl;

  // third parameter is a function type
  // and is automatically treated as a pointer to function
  void useBigger(const string &s1, const string &s2,
		 bool pf(const string &, const string &));

  // equivalent declaration: explicitly define the parameter
  // as a pointer to function
  void useBigger(const string &s1, const string &s2,
		 bool (*pf)(const string &, const string &));
}
