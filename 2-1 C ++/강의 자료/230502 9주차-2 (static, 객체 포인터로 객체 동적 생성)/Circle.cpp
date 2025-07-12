#include <iostream>
#include "circle.h"
using namespace std;
// 2. 멤버변수 정의(구현)
Circle::Circle() {
	radius = 0.0;
	cout << "constructor without parameter" << endl;
} // constructor without parameter
Circle::Circle(double rds) {
	if (rds < 0) {
		cout << "반지름은 0 이상이어야 합니다." << endl;
		radius = 0; // assert(false);로 프로그램을 종료할 수 있다.
	}
	else {
		radius = rds;
	}
	cout << "constructor with parameter" << endl;
} // constructor with parameter
Circle::Circle(const Circle& c) {
	this->radius = c.radius; //this->는 이 객체를 의미, this의 데이터 타입은 Circle*
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
		cout << "반지름은 0 이상이어야 합니다." << endl;
		this->radius = 0; // assert(false);로 프로그램을 종료할 수 있다.
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