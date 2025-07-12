#include "point.h"
#include <iostream>
using namespace std;

Point::Point(const Point& pt)
{
	x = pt.x;
	y = pt.y;
	cout << "Point 복사생성자 실행중" << endl;
}

Point::Point(int initialX, int initialY)
{
	SetX(initialX);
	SetY(initialY);
	cout << "Point 매개변수 있는 생성자 실행중" << endl;
}

Point::Point()
{
	x = 0;
	y = 0;
	cout << "Point 매개변수 없는 생성자 실행중" << endl;
}
Point::~Point()
{
	cout << "Point 소멸자 실행중" << endl;
}
void Point::SetX(int value) 
{ 
	if (value < 0)		x = 0;
	else			x = value;
}
void Point::SetY(int value)
{ 
	if (value < 0)		y = 0;
	else			y = value;
}
int Point::GetX() const
{return x;};
int Point::GetY() const
{return y;};
void Point::Print() const
{
	cout << "(" << x << ", " << y << ")" << endl;
}
