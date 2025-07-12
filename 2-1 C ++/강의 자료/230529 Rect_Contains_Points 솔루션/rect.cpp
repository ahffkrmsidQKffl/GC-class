#include <iostream>
#include "rect.h"
#include "point.h"
using namespace std;

Rect::Rect()
: topLeft(), bottomRight()
{
	cout << "Rect �Ű������� ���� ������ ������" << endl;
}
Rect::Rect(const Point& TL, const Point& BR) 
: topLeft(TL), bottomRight(BR)
{
	cout << "Rect �Ű������� Point2���� ������ ������" << endl;
}
Rect::Rect(int a, int b, int c, int d)
: topLeft(a, b), bottomRight(c, d)
{
	cout << "Rect �Ű������� int 4���� ������ ������" << endl;
}
Rect::~Rect(){
	cout << "Rect�Ҹ��� ������" << endl;
}
void Rect::Print() const{
	cout << "{L=" << topLeft.GetX() << ", T=" << topLeft.GetY();
	cout << ", R=" << bottomRight.GetX() << ", B=" << bottomRight.GetY() << "}" << endl;
	topLeft.Print();
	bottomRight.Print();
}
