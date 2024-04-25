#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <regex>
using namespace std;
class MyEncryptor
{
public:
	static void encrypt(const string& key, const string& filename);
};

