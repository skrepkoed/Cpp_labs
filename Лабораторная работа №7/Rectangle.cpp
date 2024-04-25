#include "Rectangle.h"

Rectangle::Rectangle(const string& name, double width, double height) :
	Shape(name), width(width), height(height) {};

double Rectangle::area() const
{
	return width * height;
}
