#include <iostream>
#include "rect.h"
#include "point.h"
using namespace std;

Rect::Rect()
: topLeft(), bottomRight()
{
	cout << "Rect 매개변수가 없는 생성자 실행중" << endl;
}
Rect::Rect(const Point& TL, const Point& BR) 
: topLeft(TL), bottomRight(BR)
{
	cout << "Rect 매개변수가 Point2개인 생성자 실행중" << endl;
}
Rect::Rect(int a, int b, int c, int d)
: topLeft(a, b), bottomRight(c, d)
{
	cout << "Rect 매개변수가 int 4개인 생성자 실행중" << endl;
}
Rect::~Rect(){
	cout << "Rect소멸자 실행중" << endl;
}
void Rect::Print() const{
	cout << "{L=" << topLeft.GetX() << ", T=" << topLeft.GetY();
	cout << ", R=" << bottomRight.GetX() << ", B=" << bottomRight.GetY() << "}" << endl;
	topLeft.Print();
	bottomRight.Print();
}
