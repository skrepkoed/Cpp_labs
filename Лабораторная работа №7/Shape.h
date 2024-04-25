#pragma once
#include <iostream>
#include <string>
using namespace std;
class Shape//������� ����� � ��������
{
public:
	Shape(const string& name);
	virtual ~Shape();//����������� ������� ����������� ������������ ���������� �������� �������� �������-��������
	virtual double area() const = 0;//����������� ������� ����������� ��������� ������� ������
	friend int gettotalShapes(const Shape& shape);//friend-������� ������� ������ � ���������� ���� shapeCount 
	string name;

private:
	 static int shapeCount;
};



