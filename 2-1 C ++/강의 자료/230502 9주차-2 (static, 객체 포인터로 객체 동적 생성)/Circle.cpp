#include <iostream>
#include "circle.h"
using namespace std;
// 2. ������� ����(����)
Circle::Circle() {
	radius = 0.0;
	cout << "constructor without parameter" << endl;
} // constructor without parameter
Circle::Circle(double rds) {
	if (rds < 0) {
		cout << "�������� 0 �̻��̾�� �մϴ�." << endl;
		radius = 0; // assert(false);�� ���α׷��� ������ �� �ִ�.
	}
	else {
		radius = rds;
	}
	cout << "constructor with parameter" << endl;
} // constructor with parameter
Circle::Circle(const Circle& c) {
	this->radius = c.radius; //this->�� �� ��ü�� �ǹ�, this�� ������ Ÿ���� Circle*
	cout << "copy constructor" << endl;
} // copy constructor
Circle::~Circle() {
	cout << "destructor" << endl;
} // destructor
double Circle::getRadius() {
	return this->radius;
}
void Circle::setRadius(double rds) {
	if (rds < 0) {
		cout << "�������� 0 �̻��̾�� �մϴ�." << endl;
		this->radius = 0; // assert(false);�� ���α׷��� ������ �� �ִ�.
	}
	else {
		this->radius = rds;
	}
}
double Circle::getArea() {
	return (3.14 * this->radius * this->radius);
}
double Circle::getPerimeter() {
	return (2 * 3.14 * this->radius);
}