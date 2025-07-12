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
	cout << "�Ű����� ���� ������" << endl;
}
Point::Point(int initX, int initY) {
	this->x = initX;
	this->y = initY;
	cout << "�Ű����� �ִ� ������" << endl;
}
Point::Point(const Point& p) {
	this->x = p.x;
	this->y = p.y;
	cout << "���� ������" << endl;
}
Point::~Point() {
	cout << "�Ҹ���" << endl;
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
// Ŭ���̾�Ʈ
const int MAX = 3;
int main() {
	int x, y;
	cout << "1.������ü�迭 ���" << endl;
	Point A[MAX];
	cout << "sizeof(Point): " << sizeof(Point) << endl;
	cout << "A: " << A << endl;
	cout << "A + 2: " << A + 2 << endl;
	// x,y �޾Ƽ� SetX(), SetY()
	for (int i = 0; i < MAX; i++) {
		cout << i << "��° x y: ";
		cin >> x >> y;
		A[i].SetX(x);
		(A + i)->SetY(y);
	}
	// Print()�� ���
	for (int i = 0; i < MAX; i++) {
		cout << i << "��° Point data: ";
		A[i].Print(); // (A + i)->Print();�� ����
	}
	cout << "2. ������ü�迭 ���" << endl;
	int num;
	cout << "��ü �? ";
	cin >> num;
	Point* B = new Point[num];
	for (int i = 0; i < num; i++) {
		cout << i << "��° x y: ";
		cin >> x >> y;
		B[i].SetX(x);
		(B + i)->SetY(y);
	}
	for (int i = 0; i < num; i++) {
		cout << i << "��° Point data: ";
		(B + i)->Print(); // B[i].Print(); , (*(B + i)).Print();�� ����
	}
	cout << "3. ��ü������ �迭" << endl;
	Point* C[MAX];
	for (int i = 0; i < MAX; i++) {
		cout << i << "��° x y: ";
		cin >> x >> y;
		C[i] = new Point(x, y);
	}
	for (int i = 0; i < MAX; i++) {
		cout << i << "��° Point data: ";
		C[i]->Print(); // (*(C + i))->Print(); , (**(C + i)).Print();�� ����
	}
	cout << "4. clean up" << endl;
	delete[] B; B = NULL;
	for (int i = 0; i < MAX; i++) {
		delete C[i]; C[i] = NULL; // [] �ƴ�
	}
	/*Point pt(50, 50);
	Point* p1 = new Point();
	Point* p2 = &pt;
	pt.Print();
	p2->Print();
	delete p1; p1 = NULL;*/
	return 0;
}