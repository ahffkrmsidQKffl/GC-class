#include <iostream>
#include <cassert>
#include "rectangle.h"
using namespace std;

int main() {
	Rectangle rect1(3.0, 4.2);
	Rectangle rect2(5.1, 10.2);
	Rectangle rect3(rect2);

	cout << "사각형1: ";
	rect1.print();
	cout << "넓이: " << rect1.getArea() << endl;
	cout << "둘레: " << rect1.getPerimeter() << endl;

	cout << "사각형2: ";
	rect2.print();
	cout << "넓이: " << rect2.getArea() << endl;
	cout << "둘레: " << rect2.getPerimeter() << endl;

	cout << "사각형3: ";
	rect3.print();
	cout << "넓이: " << rect3.getArea() << endl;
	cout << "둘레: " << rect3.getPerimeter() << endl;
}