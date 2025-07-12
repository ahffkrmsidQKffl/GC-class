#ifndef CIRCLE_H
#define CIRCLE_H
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
#endif