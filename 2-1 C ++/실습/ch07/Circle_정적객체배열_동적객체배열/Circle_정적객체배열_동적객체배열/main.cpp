#include <iostream>
using namespace std;

// 1. Ŭ���� ���� - ��� ������, ��� �Լ� ����
class Circle {
private:
	double radius;
	char name[100]; // ���߿� Circle* ++ �� �� ũ��(sizeof)�� �󸶳� Ŀ���°��� �� �� ���������� ���� ���� circle�� ũ�⸦ Ű����� �̿� ���� ����
public:
	Circle(); // constructor without parameter
	Circle(double rds); // constructor with parameter
	Circle(const Circle& c); // copy constructor (��� �����Ϳ� ������ ���� ������ deep copy con �ʿ� X)
	~Circle(); // destructor
	double getRadius();
	void setRadius(double rds);
	double getArea();
	double getPerimeter();
};

// 2. ��� �Լ� ����
Circle::Circle() {
	radius = 0.0;
	cout << "constructor without parameter" << endl;
} // constructor without parameter
Circle::Circle(double rds) {
	if (rds < 0) {
		cout << "�������� 0 �̻��̾�� �մϴ�." << endl;
		radius = 0; // assert(false);�� ���α׷��� ������ �� �ִ�.
	}
	else {
		radius = rds;
	}
	cout << "constructor with parameter" << endl;
} // constructor with parameter
Circle::Circle(const Circle& c) {
	this->radius = c.radius; //this->�� �� ��ü�� �ǹ�, this�� ������ Ÿ���� Circle*
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
		cout << "�������� 0 �̻��̾�� �մϴ�." << endl;
		this->radius = 0; // assert(false);�� ���α׷��� ������ �� �ִ�.
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

// 3. ���ø����̼� || Ŭ���̾�Ʈ
int main() {
	Circle c1;
	cout << "sizeof(c1)" << sizeof(c1) << endl;           //��ü ������ sizeof �޸� �е��� �ణ ���� ���� ����ϰ� ���� �� ����.
	cout << "sizeof(Circle)" << sizeof(Circle) << endl;   // adt �̸����� sizeof �޸� �е��� �ణ ���� ���� ����ϰ� ���� �� ����.
	
	// ��ü �����ͷ� ��� ����
	Circle donut;
	Circle pizza(30);
	Circle* p;
	p = &donut;
	p->setRadius(3.5);

	// p�� �̿��ؼ� donut ��ü�� ������ ����ϱ�(�ΰ��� ���)
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
	
	// 1. ���� ��ü �迭
	Circle A[3] = { Circle(5), Circle(20), Circle(30) };
	p = A; // p�� A[0] ��ü�� �ּҰ��� ���´�. �� A�� ���, p�� ����
	cout << "A: " << A << endl;
	cout << "&A[0]: " << &A[0] << endl;
	cout << "p: " << p << endl;
	cout << "p + 1: " << p + 1 << endl; // p ��ü�� ���� ���Ѱ��� �ƴ�
	cout << "++p: " << ++p << endl; // ���������� p�� ���� sizeof(Circle)��ŭ ������
	//�̰� debug X32�� �ٲٰ� ������� �� ���� �̻��غ��� �� �ִµ� 16������ ������ �׷� �� ���� p+1�� p�� ���̸� ������ȭ �غ��� �ᱹ sizeof(Circle)�� ���ٴ� �� �� �� �ִ�.

	p = A;
	cout << "p: " << p << endl;

	for (int i = 0; i < 3; i++) { // p ���� �̿��Ͽ� ���� ��ü �迭�� �Ҽӵ� ��ü�� ������ ���ϱ�(p ���� ������ ����)
		cout << "Circle[" << i << "]�� ����: " << (p + i)->getArea() << endl;
	}

	cout << "p: " << p << endl;
	
	for (int i = 0; i < 3; i++) { // p ���� �̿��Ͽ� ���� ��ü �迭�� �Ҽӵ� ��ü�� ������ ���ϱ�(p ���� �����ϸ�)
		cout << "Circle[" << i << "]�� ����: " << p->getArea() << endl;
		p++;
	}

	cout << "p: " << p << endl;

	// 2.���� ��ü �迭
	cout << "�����ϰ��� �ϴ� ���� ������? ";
	int num;
	int count = 0;
	double radius_tmp;
	cin >> num;
	Circle* B = new Circle[num];

	// ����ڿ��� �� Circle ��ü�� �������� ��� �����Ѵ�.
	for (int i = 0; i < num; i++) {
		cout << i + 1 << "��° ��ü�� �������� ���� �Ͻðڽ��ϱ�?";
		cin >> radius_tmp;
		(B + i)->setRadius(radius_tmp);
	}

	// ������ 100~200 ������ Circle ��ü�� ������ ����Ѵ�.
	for (int i = 0; i < num; i++) {
		if ((B + i)->getArea() < 200 && (B + i)->getArea() > 100)
			count++;
		
	}
	cout << "������ 100~200 ������ Circle ��ü�� ������ " << count << "�� �Դϴ�." << endl;

	return 0;
}