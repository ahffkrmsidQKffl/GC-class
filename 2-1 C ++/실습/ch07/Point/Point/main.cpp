#include <iostream>
#include "point.h"
using namespace std;

const int MAX = 3;

int main() {
	int x, y;
	cout << "1. 정적 객체 배열 방식" << endl;
	Point A[MAX];
	cout << "sizeof(Point) : " << sizeof(Point) << endl;
	cout << "A: " << A << endl;
	cout << "A+2: " << A + 2 << endl;
	for (int i = 0; i < MAX; i++) {
		cout << i << "번째 객체의 x값 y값 설정 : ";
		cin >> x >> y;
		A[i].setX(x); (A+i)->setY(y);
	}

	for (int i = 0; i < MAX; i++) {
		cout << i << "번째 Point data : ";
		A[i].print(); // (A + i)->print();
	}

	cout << "2. 정적 객체 배열 방식" << endl;
	int num;
	cout << "객체 몇 개? ";
	cin >> num;
	Point* B = new Point[num];
	for (int i = 0; i < num; i++) {
		cout << i << "번째 객체의 x값 y값 설정 : ";
		cin >> x >> y;
		B[i].setX(x); (B + i)->setY(y); 
	}

	for (int i = 0; i < num; i++) {
		cout << i << "번째 Point data : ";
		B[i].print(); // (B + i)->print(); (*(B+i)).print(); 
	}

	cout << "3. 객체 포인터 배열 방식" << endl;
	Point* C[MAX];
	for (int i = 0; i < MAX; i++) {
		cout << i << "번째 객체의 x값 y값 설정 : ";
		cin >> x >> y;
		C[i] = new Point(x, y);
	}

	for (int i = 0; i < MAX; i++) {
		cout << i << "번째 Point data : ";
		C[i]->print(); // (*(C+i))->print(); (**(C+i)).print(); 
	}

	cout << "4. clean up" << endl;
	delete[] B; B = NULL;
	for (int i = 0; i < MAX; i++) {
		delete C[i]; C[i] = NULL; 
	}

	//Point pt(50, 50);
	//Point* p1 = new Point();
	//Point* p2 = &pt; // 이게 뭐지?
	//pt.print();
	//p2->print();
	//delete p1; p1 = NULL; // delete[]하면 안 됨! p1은 배열이 아님
	
	return 0;
}