#include <iostream>
using namespace std;
// 1. 클래스 정의 - 멤버 데이터, 멤버 변수 선언
class Circle {
private:
	double radius;
public:
	Circle(); // constructor without parameter
	Circle(double rds); // constructor with parameter
	Circle(const Circle& c); // copy constructor
	~Circle(); // destructor
	double getRadius();
	void setRadius(double rds);
	double getArea();
	double getPerimeter();
};
// 2. 멤버변수 정의
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
// 3. 애플리케이션 || 클라이언트
int main() {
	Circle c1;
	//cout << c1.radius << endl; //'Circle::radius': private 멤버('Circle' 클래스에서 선언)에 액세스할 수 없습니다.
	cout << c1.getRadius() << endl;
	Circle c2(5.8);
	cout << c2.getRadius() << endl;
	cout << c2.getArea() << endl;
	cout << c2.getPerimeter() << endl;
	Circle c3(c2);
	cout << c3.getRadius() << endl;
	cout << c3.getArea() << endl;
	cout << c3.getPerimeter() << endl;
	Circle c4(-8.8);
	cout << c4.getRadius() << endl;
	cout << c4.getArea() << endl;
	cout << c4.getPerimeter() << endl;
	Circle* c5p = new Circle;
	c5p->setRadius(5.5);
	cout << c5p->getRadius() << endl;
	cout << (*c5p).getArea() << endl;
	cout << c5p->getPerimeter() << endl;
	return 0;
}