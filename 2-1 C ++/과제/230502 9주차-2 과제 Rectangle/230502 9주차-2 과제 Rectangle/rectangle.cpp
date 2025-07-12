#include <iostream>
#include <cassert>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(double length, double height) 
	:length(length), height(height)
{
	if (length <= 0.0 || height <= 0.0) {
		cout << "Rectangle 객체를 생성할 수 없음! (너비 혹은 높이가 0 이하임!!)" << endl;
		assert(false);
	}
	cout << "매개변수 있는 생성자" << endl;
}
Rectangle::Rectangle(Rectangle& rect) 
	:length(rect.length), height(rect.height)
{
	cout << "복사 생성자" << endl;
}
Rectangle::~Rectangle() {
	cout << "소멸자" << endl;
}
void Rectangle::print() const {
	cout << "사각형의 너비: " << this->length << ", 높이: " << this->height << endl;
}
double Rectangle::getArea() const {
	return (this->length * this->height);
}
double Rectangle::getPerimeter() const {
	return (2 * (this->length + this->height));
}