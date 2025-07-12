#include <iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int initX, int initY);
	Point(const Point& p);
	~Point();
	void SetX(int value);
	void SetY(int value);
	int GetX();
	int GetY();
	void Print();
};
Point::Point() {
	this->x = 0;
	this->y = 0;
	cout << "매개변수 없는 생성자" << endl;
}
Point::Point(int initX, int initY) {
	this->x = initX;
	this->y = initY;
	cout << "매개변수 있는 생성자" << endl;
}
Point::Point(const Point& p) {
	this->x = p.x;
	this->y = p.y;
	cout << "복사 생성자" << endl;
}
Point::~Point() {
	cout << "소멸자" << endl;
}
void Point::SetX(int value) {
	this->x = value;
}
void Point::SetY(int value) {
	this->y = value;
}
int Point::GetX() {
	return this->x;
}
int Point::GetY() {
	return this->y;
}
void Point::Print() {
	cout << "x: " << x << " y: " << y << endl;
}
// 클라이언트
const int MAX = 3;
int main() {
	int x, y;
	cout << "1.정적객체배열 방식" << endl;
	Point A[MAX];
	cout << "sizeof(Point): " << sizeof(Point) << endl;
	cout << "A: " << A << endl;
	cout << "A + 2: " << A + 2 << endl;
	// x,y 받아서 SetX(), SetY()
	for (int i = 0; i < MAX; i++) {
		cout << i << "번째 x y: ";
		cin >> x >> y;
		A[i].SetX(x);
		(A + i)->SetY(y);
	}
	// Print()로 출력
	for (int i = 0; i < MAX; i++) {
		cout << i << "번째 Point data: ";
		A[i].Print(); // (A + i)->Print();와 같음
	}
	cout << "2. 동적객체배열 방식" << endl;
	int num;
	cout << "객체 몇개? ";
	cin >> num;
	Point* B = new Point[num];
	for (int i = 0; i < num; i++) {
		cout << i << "번째 x y: ";
		cin >> x >> y;
		B[i].SetX(x);
		(B + i)->SetY(y);
	}
	for (int i = 0; i < num; i++) {
		cout << i << "번째 Point data: ";
		(B + i)->Print(); // B[i].Print(); , (*(B + i)).Print();와 같음
	}
	cout << "3. 객체포인터 배열" << endl;
	Point* C[MAX];
	for (int i = 0; i < MAX; i++) {
		cout << i << "번째 x y: ";
		cin >> x >> y;
		C[i] = new Point(x, y);
	}
	for (int i = 0; i < MAX; i++) {
		cout << i << "번째 Point data: ";
		C[i]->Print(); // (*(C + i))->Print(); , (**(C + i)).Print();와 같음
	}
	cout << "4. clean up" << endl;
	delete[] B; B = NULL;
	for (int i = 0; i < MAX; i++) {
		delete C[i]; C[i] = NULL; // [] 아님
	}
	/*Point pt(50, 50);
	Point* p1 = new Point();
	Point* p2 = &pt;
	pt.Print();
	p2->Print();
	delete p1; p1 = NULL;*/
	return 0;
}