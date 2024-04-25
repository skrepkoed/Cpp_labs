#include "Circle.h"

Circle::Circle(const string& name, double radius) : Shape(name), radius(radius){}

double Circle::area() const
{
	return PI * radius;
}
