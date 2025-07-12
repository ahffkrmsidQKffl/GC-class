#include <iostream>
#include "rectangle.h"

int Rectangle::rPoint = 0;

Rectangle::Rectangle()
	:Figure()
{
	rPoint = rPoint + 20;
	point = point + 20;
	width = 0;
	height = 0;
	cout << "Rectangle con without pars" << endl;
}
Rectangle::Rectangle(string name, int x, int y, int w, int h)
	:Figure(name, x, y)
{
	rPoint = rPoint + 20;
	point = point + 20;
	width = w;
	height = h;
	cout << "Rectangle con with pars" << endl;
}
Rectangle::Rectangle(Rectangle& r)
	:Figure(r)
{
	rPoint = rPoint + 20;
	point = point + 20;
	width = r.width;
	height = r.height;
	cout << "Rectangle copycon" << endl;
}
Rectangle::~Rectangle() {
	rPoint = rPoint - 20;
	point = point - 20;
	cout << "Rectangle destructor" << endl;
}

void Rectangle::getArea() {
	cout << "Rectangle¸éÀû[" << name << "]:" << (height * width) << endl;
}

void Rectangle::DrawAll() {
	cout << "Rectangle [name: " << name << "]" << "[x:" << x << "]" << "[y:" << y << "]" << "[width:" << width << "]" << "[height:" << height << "]" << endl;
}

int Rectangle::getRPoint() {
	return rPoint;
}
