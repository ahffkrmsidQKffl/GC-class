#ifndef CIRCLE_H
#define CIRCLE_H
//1. Ŭ���� ���� - ��� ������, ��� �Լ� ����
class Circle {

private:
	double radius;

public:
	Circle(); // constuctor without parameter
	Circle(double radius); // constuctor with parameter
	Circle(const Circle& c); // copy constuctor 
	~Circle(); // deconstructor
	double getRadius(); // getter
	void setRadius(double rds); // setter
	double getArea();
	double getPerimeter();

};
#endif