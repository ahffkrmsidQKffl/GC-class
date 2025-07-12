#include <iostream>
using namespace std;
//1. Ŭ���� ���� - ��� ������, ��� ���� ����

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
//2. ��� ���� ����
// 
// constuctor without parameter
Circle::Circle() {                             
	radius = 0.0;
	cout << "constuctor without parameter" << endl;
} 

// constuctor with parameter
Circle::Circle(double rds) {                
	if (rds < 0) {
		cout << "�������� 0�̻��̾�� �մϴ�." << endl;
		radius = 0; // assert(false);�� ���α׷��� ������ �� �ִ�.

	}
	else {
		radius = rds;
	}
	cout << "constuctor with parameter" << endl;
} 

// copy constuctor
Circle::Circle(const Circle& c) {            
	this->radius = c.radius; // this�� ������ Ÿ���� Circle*�̴�. this->�� �� ��ü�� �ǹ�.
	cout << "copy constuctor" << endl;
} 

// deconstructor
Circle::~Circle() {                       
	cout << "deconstructor" << endl;
} 

// getter
double Circle::getRadius() {
	return radius;
} 

// setter
void Circle::setRadius(double rds) {
	this->radius = rds;
}

//���� ���ϱ�
double Circle::getArea() {
	return (3.14 * this->radius * this->radius);
}

//�ѷ� ���ϱ�
double Circle::getPerimeter() {
	return (3.14 * 2 * this->radius);
}

//3. ���ø����̼� or Ŭ���̾�Ʈ
int main() {
	Circle c1;
	cout << c1.getRadius() << endl; 
	Circle
	return 0;
}

