#include <iostream>
#include <cassert>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(double length, double height) 
	:length(length), height(height)
{
	if (length <= 0.0 || height <= 0.0) {
		cout << "Rectangle ��ü�� ������ �� ����! (�ʺ� Ȥ�� ���̰� 0 ������!!)" << endl;
		assert(false);
	}
	cout << "�Ű����� �ִ� ������" << endl;
}
Rectangle::Rectangle(Rectangle& rect) 
	:length(rect.length), height(rect.height)
{
	cout << "���� ������" << endl;
}
Rectangle::~Rectangle() {
	cout << "�Ҹ���" << endl;
}
void Rectangle::print() const {
	cout << "�簢���� �ʺ�: " << this->length << ", ����: " << this->height << endl;
}
double Rectangle::getArea() const {
	return (this->length * this->height);
}
double Rectangle::getPerimeter() const {
	return (2 * (this->length + this->height));
}