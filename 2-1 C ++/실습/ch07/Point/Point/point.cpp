#include <iostream>
#include "point.h"
using namespace std;

Point::Point() {
	this->x = 0;
	this->y = 0;
	cout << "�Ű����� ���� ������" << endl;
}
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
	cout << "�Ű����� �ִ� ������" << endl;
}
Point::Point(Point& p) {
	this->x = p.x;
	this->y = p.y;
	cout << "���� ������" << endl;
}
Point::~Point() {
	cout << "�Ҹ���" << endl;
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