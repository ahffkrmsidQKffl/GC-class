#include <iostream>
#include <cassert>
#include "rect.h"
#include "point.h"
using namespace std;

Rect::Rect()
	:topLeft(0,100), bottomRight(100,0)
{
	cout << "�Ű����� ���� ������" << endl;
}
Rect::Rect(const Point& TL, const Point& BR) 
	:topLeft(TL), bottomRight(BR)
{
	if (topLeft.GetX() >= bottomRight.GetX() || topLeft.GetY() <= bottomRight.GetY()) {
		cout << "����Ʈ�� �߸� �����Ͽ����ϴ�. topLeft�� bottomRight���� ���� ���� �����Ǿ�� �մϴ�.";
		assert(false);
	}
	cout << "�Ű����� �ִ� ������" << endl;
}

Rect::Rect(int a, int b, int c, int d) 
	:topLeft(a, b), bottomRight(c, d)
{
	if (topLeft.GetX() >= bottomRight.GetX() || topLeft.GetY() <= bottomRight.GetY()) {
		cout << "����Ʈ�� �߸� �����Ͽ����ϴ�. topLeft�� bottomRight���� ���� ���� �����Ǿ�� �մϴ�.";
		assert(false);
	}
	cout << "�Ű������� �ʱ�ȭ ����Ʈ�� �����ϴ� ������?" << endl;
}
Rect::Rect(const Rect& r) 
	:topLeft(r.topLeft), bottomRight(r.bottomRight)
{
	cout << "���� ������" << endl;
}
Rect::~Rect() {
	cout << "�Ҹ���" << endl;
}

void Rect::Print() const {
	cout << endl;
	cout << "topLeft: " << endl;
	topLeft.Print();
	cout << "bottmRight: " << endl;
	bottomRight.Print();
	cout << endl;
}