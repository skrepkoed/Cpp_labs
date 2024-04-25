#include "Money.h"

Money::Money(long d, int c): dollars(d), cents(c){}

int Money::operator>(const Money& m) const
{
    return
        (dollars > m.dollars) ||
        ((dollars == m.dollars) && (cents > m.cents));
}

ostream& operator<<(ostream& stream, Money& m)
{
    stream << "$" << m.dollars << '.' << m.cents;
    return stream;
}
