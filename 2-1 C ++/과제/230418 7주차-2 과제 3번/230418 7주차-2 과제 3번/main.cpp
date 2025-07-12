#include <iostream>
using namespace std;

// 1. Ŭ���� Student ����
class Point {
private:
	int x;
	int y;

public:
	// 3 constructors, 1 destructor ����
	Point();
	Point(int x, int y);
	Point(const Point& p);
	~Point();
	//getter, setter ����
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	//�������� �־��� �Լ� ����
	void pointPrint();
	void direction();
	double distance(const Point& p);

};

// 2. ��� �Լ� ����
Point::Point() {
	cout << "�Ű����� ���� ������" << endl;
	this->x = 0;
	this->y = 0;
}

Point::Point(int x, int y) {
	cout << "�Ű����� �ִ� ������" << endl;
	this->x = x;
	this->y = y;
}

Point::Point(const Point& p) {
	cout << "���� ������" << endl;
	this->x = p.x;
	this->y = p.y;
}

Point::~Point() {
	cout << "�Ҹ���" << endl;
}

int Point::getX() {
	return this->x;
}
int Point::getY() {
	return this->y;
}
void Point::setX(int x) {
	this->x = x;
}
void Point::setY(int y) {
	this->y = y;
}

void Point::pointPrint() {
	cout << "��ǥ ��� : (" << this->getX() <<", " << this->getY() <<") " << endl;
	cout << endl;
}

void Point::direction() {
	int x, y;
	cout << "�������� �����Ͻ� x��ǥ�� �Է����ּ���: ";
	cin >> x;
	cout << "�������� �����Ͻ� y��ǥ�� �Է����ּ���: ";
	cin >> y;
	if (this->x == x) {
		cout << "x��ǥ�� ��ġ�� ���ذ� �����ϴ�." << endl;
	}
	else if (this->x > x) {
		cout << "x��ǥ�� ��ġ�� ���غ��� �����ʿ� �ֽ��ϴ�." << endl;
	}
	else { cout << "x��ǥ�� ��ġ�� ���غ��� ���ʿ� �ֽ��ϴ�." << endl; }

	if (this->y == y) {
		cout << "y��ǥ�� ��ġ�� ���ذ� �����ϴ�." << endl;
	}
	else if (this->y > y) {
		cout << "y��ǥ�� ��ġ�� ���غ��� ���� �ֽ��ϴ�." << endl;
	}
	else { cout << "y��ǥ�� ��ġ�� ���غ��� �Ʒ��� �ֽ��ϴ�." << endl; }

	cout << endl;
}

double Point::distance(const Point& p) {
	return sqrt((this->x - p.x) * (this->x - p.x) + (this->y - p.y) * (this->y - p.y));
}


// 3. ���ø����̼� �Ǵ� Ŭ���̾�Ʈ
int main() {
	Point p1;
	Point p2(0, 0);
	Point p3(p2);

	cout << endl;
	cout << "p2.getX(): " << p2.getX() << endl;
	cout << "p2.getY(): " << p2.getY() << endl;
	cout << "p3.getX(): " << p3.getX() << endl;
	cout << "p3.getY(): " << p3.getY() << endl;
	cout << endl;
	
	p2.pointPrint();
	p3.direction();

	p1.setX(3);
	p1.setY(4);

	cout << "p1�� p2 ������ �Ÿ�: " << p1.distance(p2) << endl;
	cout << endl;

	return 0;
}
