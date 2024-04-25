#pragma once
#include <iostream>
#include <string>
using namespace std;
class Shape//Ѕазовый класс в иерархии
{
public:
	Shape(const string& name);
	virtual ~Shape();//¬иртуальна€ функци€ позвол€юща€ орнанизовать правильное удаление объектов классов-потомков
	virtual double area() const = 0;//¬иртуальна€ функци€ позвол€юща€ вычислить площадь фигуры
	friend int gettotalShapes(const Shape& shape);//friend-функци€ имеюща€ доступ к приватному полю shapeCount 
	string name;

private:
	 static int shapeCount;
};



