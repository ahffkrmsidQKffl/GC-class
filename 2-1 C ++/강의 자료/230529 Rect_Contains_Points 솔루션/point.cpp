#include "point.h"
#include <iostream>
using namespace std;

Point::Point(const Point& pt)
{
	x = pt.x;
	y = pt.y;
	cout << "Point ��������� ������" << endl;
}

Point::Point(int initialX, int initialY)
{
	SetX(initialX);
	SetY(initialY);
	cout << "Point �Ű����� �ִ� ������ ������" << endl;
}

Point::Point()
{
	x = 0;
	y = 0;
	cout << "Point �Ű����� ���� ������ ������" << endl;
}
Point::~Point()
{
	cout << "Point �Ҹ��� ������" << endl;
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
