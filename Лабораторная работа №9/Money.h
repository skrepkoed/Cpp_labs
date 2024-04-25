#pragma once
#include <ostream>
using namespace std;
class Money
{
	long dollars;
	int cents;
public:
	Money() {};
	Money(long d, int c);
	int operator>(const Money& m) const;
	friend ostream& operator<<(ostream& stream, Money&);

};

