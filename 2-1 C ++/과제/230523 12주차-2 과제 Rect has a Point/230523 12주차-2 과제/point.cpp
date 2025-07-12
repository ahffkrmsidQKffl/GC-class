#include <iostream>
#include "point.h"
using namespace std;

Point::Point() {
	this->x = 0; this->y = 0;
	cout << "�Ű����� ���� ������" << endl;
}

Point::Point(int initialX, int initialY) {
	this->x = initialX; this->y = initialY;
	cout << "�Ű����� �ִ� ������" << endl;
}

Point::Point(const Point& pt) {
	this->x = pt.x; this->y = pt.y;
	cout << "���� ������" << endl;
}

Point::~Point() {
	cout << "�Ҹ���" << endl;
}

void Point::SetX(int value) {
	this->x = value;
}

void Point::SetY(int value) {
	this->y = value;
}

int Point::GetX() const {
	return this->x;
}

int Point::GetY() const {
	return this->y;
}

void Point::Print() const {
	cout << "x : " << x << " y : " << y << endl;
}