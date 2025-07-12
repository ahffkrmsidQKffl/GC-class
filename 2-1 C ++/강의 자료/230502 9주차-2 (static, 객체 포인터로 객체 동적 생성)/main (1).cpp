#include <iostream>
#include "circle.h"
using namespace std;
// 3. ���ø����̼� || Ŭ���̾�Ʈ
int main() {
	Circle c1;
	cout << "sizeof(c1)" << sizeof(c1) << endl;
	cout << "sizeof(Circle)" << sizeof(Circle) << endl;
	//cout << c1.radius << endl; //'Circle::radius': private ���('Circle' Ŭ�������� ����)�� �׼����� �� �����ϴ�.
	cout << c1.getRadius() << endl;
	Circle c2(5.8);
	cout << c2.getRadius() << endl;
	cout << c2.getArea() << endl;
	cout << c2.getPerimeter() << endl;
	Circle c3(c2); // ���� ������
	cout << c3.getRadius() << endl;
	cout << c3.getArea() << endl;
	cout << c3.getPerimeter() << endl;
	Circle c4(-8.8);
	cout << c4.getRadius() << endl;
	cout << c4.getArea() << endl;
	cout << c4.getPerimeter() << endl;
	Circle* c5p = new Circle; // �Ű����� ���� ������
	c5p->setRadius(5.5);
	cout << c5p->getRadius() << endl;
	cout << (*c5p).getArea() << endl;
	cout << c5p->getPerimeter() << endl;
	delete c5p; c5p = NULL;
	return 0;
}