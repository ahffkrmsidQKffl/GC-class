#include <iostream>
#include "triangle.h"

int Triangle::tPoint=0;

Triangle::Triangle() 
	:Figure()
{
	tPoint = tPoint + 30;
	point = point + 30;
	base = 0;
	height = 0;
	cout << "Triangle con without pars" << endl;
}
Triangle::Triangle(string name, int x, int y, int b, int h) 
:Figure(name, x, y)
{
	tPoint = tPoint + 30;
	point = point + 30;
	base = b;
	height = h;
	cout << "Triangle con with pars" << endl;
}
Triangle::Triangle(Triangle& t) 
	:Figure(t)
{
	tPoint = tPoint + 30;
	point = point + 30;
	base = t.base;
	height = t.height;
	cout << "Triangle copycon" << endl;
}
Triangle::~Triangle() {
	tPoint = tPoint - 30;
	point = point - 30;
	cout << "Triangle destructor" << endl;
}

void Triangle::getArea() {
	cout << "Tri¸éÀû[" << name << "]:" << height * base * 0.5 << endl;

}

void Triangle::DrawAll() {
	cout << "Tri [name: " << name << "]" << "[x:" << x << "]" << "[y:" << y << "]" << "[base:" << base << "]" << "[height:" << height << "]" << endl;
}


int Triangle::getTPoint() {
	return tPoint;
}
