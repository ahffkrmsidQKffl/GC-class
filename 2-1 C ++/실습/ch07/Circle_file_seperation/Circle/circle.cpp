#include <iostream>
#include "circle.h"
using namespace std;

//2. 멤버 함수 정의(구현)
// constuctor without parameter
Circle::Circle() {
	radius = 0.0;
	cout << "constuctor without parameter" << endl;
}

// constuctor with parameter
Circle::Circle(double rds) {
	if (rds < 0) {
		cout << "반지름은 0이상이어야 합니다." << endl;
		radius = 0; // assert(false);로 프로그램을 종료할 수 있다.

	}
	else {
		radius = rds;
	}
	cout << "constuctor with parameter" << endl;
}

// copy constuctor
Circle::Circle(const Circle& c) {
	this->radius = c.radius; // this의 데이터 타입은 Circle*이다. this->는 이 객체를 의미.
	cout << "copy constuctor" << endl;
}

// deconstructor
Circle::~Circle() {
	cout << "deconstructor" << endl;
}

// getter
double Circle::getRadius() {
	return radius;
}

// setter
void Circle::setRadius(double rds) {
	this->radius = rds;
}

//넓이 구하기
double Circle::getArea() {
	return (3.14 * this->radius * this->radius);
}

//둘레 구하기
double Circle::getPerimeter() {
	return (3.14 * 2 * this->radius);
}
