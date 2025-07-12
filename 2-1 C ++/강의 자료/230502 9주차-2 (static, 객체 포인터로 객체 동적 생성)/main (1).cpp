#include <iostream>
#include "circle.h"
using namespace std;
// 3. 애플리케이션 || 클라이언트
int main() {
	Circle c1;
	cout << "sizeof(c1)" << sizeof(c1) << endl;
	cout << "sizeof(Circle)" << sizeof(Circle) << endl;
	//cout << c1.radius << endl; //'Circle::radius': private 멤버('Circle' 클래스에서 선언)에 액세스할 수 없습니다.
	cout << c1.getRadius() << endl;
	Circle c2(5.8);
	cout << c2.getRadius() << endl;
	cout << c2.getArea() << endl;
	cout << c2.getPerimeter() << endl;
	Circle c3(c2); // 복사 생성자
	cout << c3.getRadius() << endl;
	cout << c3.getArea() << endl;
	cout << c3.getPerimeter() << endl;
	Circle c4(-8.8);
	cout << c4.getRadius() << endl;
	cout << c4.getArea() << endl;
	cout << c4.getPerimeter() << endl;
	Circle* c5p = new Circle; // 매개변수 없는 생성자
	c5p->setRadius(5.5);
	cout << c5p->getRadius() << endl;
	cout << (*c5p).getArea() << endl;
	cout << c5p->getPerimeter() << endl;
	delete c5p; c5p = NULL;
	return 0;
}