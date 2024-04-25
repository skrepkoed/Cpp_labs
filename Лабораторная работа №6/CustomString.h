#pragma once
#include <ostream>
#include "MyString.h"
class CustomString
{
public:
	static int customStringComparsion(const char* str1, const char* str2);
	static char* customStringConcat(char* str1, char* str2);
	static char* customStringCopy(char* destination, const char* source);
	static int customStringLen(const char* str);
	
};

 std::ostream& operator<<(std::ostream& os, const MyString& string);
 std::istream& operator>>(std::istream& is, MyString& str);