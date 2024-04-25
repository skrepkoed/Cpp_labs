#pragma once
#include "Shape.h"
class Circle :public Shape// ласс-потомок класса  Shape
{
public:
	Circle(const string& name, double radius);
	double area() const override;// переопределение метода area() дл€ правльного расчета площади пр€моугольника
private:
	double radius;
	double const PI = 3.14159;
};

