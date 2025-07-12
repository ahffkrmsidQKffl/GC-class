#include <iostream>
#include "point.h"
using namespace std;

Point::Point() {
	this->x = 0;
	this->y = 0;
	cout << "매개변수 없는 생성자" << endl;
}
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
	cout << "매개변수 있는 생성자" << endl;
}
Point::Point(Point& p) {
	this->x = p.x;
	this->y = p.y;
	cout << "복사 생성자" << endl;
}
Point::~Point() {
	cout << "소멸자" << endl;
}
int Point::getX() {
	return this->x;
}
int Point::getY() {
	return this->y;
}
void Point::setX(int x) {
	this->x = x;
}
void Point::setY(int y) {
	this->y = y;
}
void Point::print() {
	cout << "x: " << this->x << " y: " << this->y << endl;
}