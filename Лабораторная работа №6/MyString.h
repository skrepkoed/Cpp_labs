#pragma once
#include <iostream>

using namespace std;
class MyString
{
	
public:
	//char str[80];
	char* str;
	MyString(const char*);
	MyString() {};
	~MyString();
	MyString(const MyString&);
	MyString& operator=(const MyString&);
	MyString& operator+(const MyString&);
	int operator==(const MyString&);
	int length();
	void in();
	void out();

};

