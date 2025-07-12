#include <iostream>
#include <cassert>
#include "rect.h"
#include "point.h"
using namespace std;

Rect::Rect()
	:topLeft(0,100), bottomRight(100,0)
{
	cout << "매개변수 없는 생성자" << endl;
}
Rect::Rect(const Point& TL, const Point& BR) 
	:topLeft(TL), bottomRight(BR)
{
	if (topLeft.GetX() >= bottomRight.GetX() || topLeft.GetY() <= bottomRight.GetY()) {
		cout << "포인트를 잘못 설정하였습니다. topLeft는 bottomRight보다 왼쪽 위에 설정되어야 합니다.";
		assert(false);
	}
	cout << "매개변수 있는 생성자" << endl;
}

Rect::Rect(int a, int b, int c, int d) 
	:topLeft(a, b), bottomRight(c, d)
{
	if (topLeft.GetX() >= bottomRight.GetX() || topLeft.GetY() <= bottomRight.GetY()) {
		cout << "포인트를 잘못 설정하였습니다. topLeft는 bottomRight보다 왼쪽 위에 설정되어야 합니다.";
		assert(false);
	}
	cout << "매개변수를 초기화 리스트에 대입하는 생성자?" << endl;
}
Rect::Rect(const Rect& r) 
	:topLeft(r.topLeft), bottomRight(r.bottomRight)
{
	cout << "복사 생성자" << endl;
}
Rect::~Rect() {
	cout << "소멸자" << endl;
}

void Rect::Print() const {
	cout << endl;
	cout << "topLeft: " << endl;
	topLeft.Print();
	cout << "bottmRight: " << endl;
	bottomRight.Print();
	cout << endl;
}