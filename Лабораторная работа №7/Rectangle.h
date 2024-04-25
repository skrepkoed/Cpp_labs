#pragma once
#include "Shape.h"
class Rectangle: public Shape//�����-������� ������ Shape
{
public:
	Rectangle(const string& name, double width, double height);
	double area() const override;// ��������������� ������ area() ��� ���������� ������� ������� ��������������
private:
	double width;
	double height;
};

