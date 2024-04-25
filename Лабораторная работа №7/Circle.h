#pragma once
#include "Shape.h"
class Circle :public Shape//�����-������� ������  Shape
{
public:
	Circle(const string& name, double radius);
	double area() const override;// ��������������� ������ area() ��� ���������� ������� ������� ��������������
private:
	double radius;
	double const PI = 3.14159;
};

