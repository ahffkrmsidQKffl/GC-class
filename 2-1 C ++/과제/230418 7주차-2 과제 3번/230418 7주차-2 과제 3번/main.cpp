#include <iostream>
using namespace std;

// 1. 클래스 Student 정의
class Point {
private:
	int x;
	int y;

public:
	// 3 constructors, 1 destructor 선언
	Point();
	Point(int x, int y);
	Point(const Point& p);
	~Point();
	//getter, setter 선언
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	//문제에서 주어진 함수 선언
	void pointPrint();
	void direction();
	double distance(const Point& p);

};

// 2. 멤버 함수 정의
Point::Point() {
	cout << "매개변수 없는 생성자" << endl;
	this->x = 0;
	this->y = 0;
}

Point::Point(int x, int y) {
	cout << "매개변수 있는 생성자" << endl;
	this->x = x;
	this->y = y;
}

Point::Point(const Point& p) {
	cout << "복사 생성자" << endl;
	this->x = p.x;
	this->y = p.y;
}

Point::~Point() {
	cout << "소멸자" << endl;
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
	cout << "좌표 출력 : (" << this->getX() <<", " << this->getY() <<") " << endl;
	cout << endl;
}

void Point::direction() {
	int x, y;
	cout << "기준으로 설정하실 x좌표를 입력해주세요: ";
	cin >> x;
	cout << "기준으로 설정하실 y좌표를 입력해주세요: ";
	cin >> y;
	if (this->x == x) {
		cout << "x좌표의 위치가 기준과 같습니다." << endl;
	}
	else if (this->x > x) {
		cout << "x좌표의 위치가 기준보다 오른쪽에 있습니다." << endl;
	}
	else { cout << "x좌표의 위치가 기준보다 왼쪽에 있습니다." << endl; }

	if (this->y == y) {
		cout << "y좌표의 위치가 기준과 같습니다." << endl;
	}
	else if (this->y > y) {
		cout << "y좌표의 위치가 기준보다 위에 있습니다." << endl;
	}
	else { cout << "y좌표의 위치가 기준보다 아래에 있습니다." << endl; }

	cout << endl;
}

double Point::distance(const Point& p) {
	return sqrt((this->x - p.x) * (this->x - p.x) + (this->y - p.y) * (this->y - p.y));
}


// 3. 애플리케이션 또는 클라이언트
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

	cout << "p1과 p2 사이의 거리: " << p1.distance(p2) << endl;
	cout << endl;

	return 0;
}
