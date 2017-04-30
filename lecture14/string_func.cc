#include "string_func.h"

using std::string;

const string & shorterString (const string & s1,
				   const string & s2)
{
  return s1.size()<s2.size()?s1:s2;
}

string & shorterString (string & s1,
			     string & s2)
{
  return const_cast<string &> (shorterString (const_cast<const string &> (s1),
					      const_cast<const string &> (s2)));
}

const string & longerString (const string & s1,
				   const string & s2)
{
  return s1.size()>s2.size()?s1:s2;
}

string & longerString (string & s1,
			     string & s2)
{
  return const_cast<string &> (longerString (const_cast<const string &> (s1),
					      const_cast<const string &> (s2)));
}
