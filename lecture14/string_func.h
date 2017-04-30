#ifndef STRING_FUNC_H_
#define STRING_FUNC_H_

#include <string>

const std::string & shorterString (const std::string & s1,
				   const std::string & s2);

std::string & shorterString (std::string & s1,
			     std::string & s2);

const std::string & longerString (const std::string & s1,
				   const std::string & s2);

std::string & longerString (std::string & s1,
			     std::string & s2);

#endif	// STRING_FUNC_H_
