#include "Shape.h"

Shape::Shape(const string& name) : name(name)
{
	++shapeCount;
}

Shape::~Shape()
{
	--shapeCount;
}

int Shape::shapeCount = 0;

