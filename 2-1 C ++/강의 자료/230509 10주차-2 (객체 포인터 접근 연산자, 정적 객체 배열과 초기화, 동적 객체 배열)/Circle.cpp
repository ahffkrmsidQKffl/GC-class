#include <iostream>
using namespace std;
// 1. 클래스 정의 - 멤버 데이터, 멤버 변수 선언
class Circle {
private:
	double radius;
	char name[100];
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
	cout << "sizeof(c1)" << sizeof(c1) << endl;
	cout << "sizeof(Circle)" << sizeof(Circle) << endl;
	// 객체 포인터로 멤버 접근
	Circle donut;
	Circle pizza(30);
	Circle* p;
	p = &donut;
	p->setRadius(3.5);
	// p를 이용해서 donut 객체의 면적을 계산하기(두가지 방법)
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
	// 1. 정적 객체 배열
	Circle A[3] = { Circle(5), Circle(20), Circle(30) };
	p = A; // p는 A[0] 객체의 주소값을 갖는다. 단 A는 상수, p는 변수
	cout << "A: " << A << endl;
	cout << "&A[0]: " << &A[0] << endl;
	cout << "p: " << p << endl;
	cout << "p + 1: " << p + 1 << endl; // p 자체의 값이 변한것은 아님
	cout << "++p: " << ++p << endl; // 실질적으로 p의 값이 sizeof(Circle)만큼 증가함
	// p 값을 이용하여 정적 객체 배열에 소속된 객체의 면적을 구하기(p 값의 변경은 없다)
	p = A;
	cout << "p: " << p << endl;
	for (int i = 0; i < 3; i++) {
		cout << "Circle[" << i << "]의 면적: " << (p + i)->getArea() << endl;
	}
	cout << "p: " << p << endl;
	// p 값을 이용하여 정적 객체 배열에 소속된 객체의 면적을 구하기(p 값을 변경하며)
	for (int i = 0; i < 3; i++) {
		cout << "Circle[" << i << "]의 면적: " << p->getArea() << endl;
		p++;
	}
	cout << "p: " << p << endl;
	// 2.동적 객체 배열
	cout << "생성하고자 하는 원의 개수는? ";
	int num;
	cin >> num;
	Circle* B = new Circle[num];
	// 사용자에게 각 Circle 객체의 반지름을 물어서 저장한다.
	for (int i = 0; i < num; i++) {

	}
	// 면적이 100~200 사이인 Circle 객체의 개수를 출력한다.
	for (int i = 0; i < num; i++) {

	}
	return 0;
}