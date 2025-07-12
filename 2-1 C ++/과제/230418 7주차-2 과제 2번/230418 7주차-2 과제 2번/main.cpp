#include <iostream>
using namespace std;
// 1. 클래스 Student 정의

class Two {
private:
	int x;
	char a;

public:
	// 3 constructors, 1 destructor, getter, setter 선언
	Two();
	Two(int x, char a);
	Two(const Two& t); 
	~Two();
	int getX();
	char getA();
	void setX(int x);
	void setA(char a);
};

// 2. 멤버 함수 정의
Two::Two() {
	cout << "매개변수 없는 생성자" << endl;
	this->x = 0;
	this->a = '\0';
}

Two::Two(int x, char a) {
	cout << "매개변수 있는 생성자" << endl;
	this->x = x;
	this->a = a;
}

Two::Two(const Two& o) {
	cout << "복사 생성자" << endl;
	this->x = o.x;
	this->a = o.a;
}

Two::~Two() {
	cout << "소멸자" << endl;
}

int Two::getX() {
	return this->x;
}
char Two::getA() {
	return this->a;
}
void Two::setX(int x) {
	this->x = x;
}
void Two::setA(char a) {
	this->a = a;
}

// 3. 애플리케이션 또는 클라이언트
int main() {
	Two t1;
	Two t2(1, 'A');
	Two t3(t2);

	cout << endl;
	cout << "t2.getX(): " << t2.getX() << endl;
	cout << "t2.getA(): " << t2.getA() << endl;
	cout << "t3.getX(): " << t3.getX() << endl;
	cout << "t3.getA(): " << t3.getA() << endl;
	cout << endl;

	t2.setX(2);
	t2.setA('B');
	t3.setX(3);
	t3.setA('C');

	cout << endl;
	cout << "after setting, t2.getX(): " << t2.getX() << endl;
	cout << "after setting, t2.getA(): " << t2.getA() << endl;
	cout << "after setting, t3.getX(): " << t3.getX() << endl;
	cout << "after setting, t3.getA(): " << t3.getA() << endl;
	cout << endl;

	return 0;
}
