#include <iostream>
#include <cassert>
#include "rectangle.h"
using namespace std;

int main() {
	Rectangle rect1(3.0, 4.2);
	Rectangle rect2(5.1, 10.2);
	Rectangle rect3(rect2);

	cout << "�簢��1: ";
	rect1.print();
	cout << "����: " << rect1.getArea() << endl;
	cout << "�ѷ�: " << rect1.getPerimeter() << endl;

	cout << "�簢��2: ";
	rect2.print();
	cout << "����: " << rect2.getArea() << endl;
	cout << "�ѷ�: " << rect2.getPerimeter() << endl;

	cout << "�簢��3: ";
	rect3.print();
	cout << "����: " << rect3.getArea() << endl;
	cout << "�ѷ�: " << rect3.getPerimeter() << endl;
}