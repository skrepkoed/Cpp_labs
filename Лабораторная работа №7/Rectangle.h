#pragma once
#include "Shape.h"
class Rectangle: public Shape// ласс-потомок класса Shape
{
public:
	Rectangle(const string& name, double width, double height);
	double area() const override;// переопределение метода area() дл€ правльного расчета площади пр€моугольника
private:
	double width;
	double height;
};

