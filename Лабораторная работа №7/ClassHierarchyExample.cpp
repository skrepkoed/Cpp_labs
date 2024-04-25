#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    Shape* shapes[] = {
        new Rectangle("Прямоугольник", 4.0, 5.0),
        new Circle("Круг", 2.5)
    };

    // Вывод информации о фигурах
    for (auto shape : shapes) {
        cout << "Имя: " << shape->name << ", Площадь: " << shape->area() << endl;
    }

    // Вывод количества созданных фигур
    cout << "Количество фигур: " << gettotalShapes(*shapes[0]) << endl;

    // Удаление объектов
    for (auto shape : shapes) {
        delete shape;//Правильное удаление из массива  Shape возможно благодаря определению виртуального деструктора
    }
}
int gettotalShapes(const Shape& shape) {
    return shape.shapeCount;
}
