#include <iostream>
#include "circle.h"

int Circle::cPoint = 0;


Circle::Circle()
	:Figure()
{
	cPoint = cPoint + 10;
	point = point + 10;
	radius = 0;
	cout << "Circle con without pars" << endl;
}
Circle::Circle(string name, int x, int y, int r)
	:Figure(name, x, y)
{
	cPoint = cPoint + 10;
	point = point + 10;
	radius = r;
	cout << "Circle con with pars" << endl;
}
Circle::Circle(Circle& c)
	:Figure(c)
{
	cPoint = cPoint + 10;
	point = point + 10;
	radius = c.radius;
	cout << "Circle copycon" << endl;
}
Circle::~Circle() {
	cPoint = cPoint - 10;
	point = point - 10;
	cout << "Circle destructor" << endl;
}

void Circle::getArea() {
	cout << "Circle¸éÀû[" << name << "]:" << radius * radius * 3.14 << endl;
}

void Circle::DrawAll() {
	cout << "Circle [name: " << name << "]" << "[x:" << x << "]" << "[y:" << y << "]" << "[radius:" << radius << "]" << endl;
}

int Circle::getCPoint() {
	return cPoint;
}
