#include <iostream>
using namespace std;

// 1. Ŭ���� Student ����
class One {
private:
	int x, y;

public:
	// 3 constructors, 1 destructor, getter, setter ����
	One();
	One(int x, int y); 
	One(const One& o); 
	~One();
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
};

// 2. ��� �Լ� ����
One::One () {
	cout << "�Ű����� ���� ������" << endl;
	this->x = 0;
	this->y = 0;
}

One::One (int x, int y) {
	cout << "�Ű����� �ִ� ������" << endl;
	this->x = x;
	this->y = y;
}

One::One(const One& o) {
	cout << "���� ������" << endl;
	this->x = o.x;
	this->y = o.y;
}

One::~One() {
	cout << "�Ҹ���" << endl;
}

int One::getX() {
	return this->x;
}
int One::getY() {
	return this->y;
}
void One::setX(int x) {
	this->x = x;
}
void One::setY(int y) {
	this->y = y;
}

// 3. ���ø����̼� �Ǵ� Ŭ���̾�Ʈ
int main() {
	One o1;
	One o2(1, 2);
	One o3(o2);

	cout << endl;
	cout << "o2.getX(): " << o2.getX() << endl;
	cout << "o2.getY(): " << o2.getY() << endl;
	cout << "o3.getX(): " << o3.getX() << endl;
	cout << "o3.getY(): " << o3.getY() << endl;
	cout << endl;

	return 0;
}
