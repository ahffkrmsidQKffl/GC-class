#include "point.h"
#include "rect.h"
#include <iostream>
using namespace std;
int main()
{
 
	cout << "포인트 두개 만들기 " << endl;
	Point p1(10, 20);
	Point p2(30, 40);
	cout << "r1 객체만들기시작..." << endl;
	Rect r1(p1, p2);
	r1.Print();
	cout << "r2 객체만들기시작..." << endl;
	Rect r2(100, 200, 300, 400);
	r2.Print();
	Rect r3;
	r3.Print();
	return 0;
}
/*
포인트 두개 만들기
Point 매개변수 있는 생성자 실행중
Point 매개변수 있는 생성자 실행중
r1 객체만들기시작...
Point 복사생성자 실행중
Point 복사생성자 실행중
Rect 매개변수가 Point2개인 생성자 실행중
{L=10, T=20, R=30, B=40}
(10, 20)
(30, 40)
r2 객체만들기시작...
Point 매개변수 있는 생성자 실행중
Point 매개변수 있는 생성자 실행중
Rect 매개변수가 int 4개인 생성자 실행중
{L=100, T=200, R=300, B=400}
(100, 200)
(300, 400)
Point 매개변수 없는 생성자 실행중
Point 매개변수 없는 생성자 실행중
Rect 매개변수가 없는 생성자 실행중
{L=0, T=0, R=0, B=0}
(0, 0)
(0, 0)
Rect소멸자 실행중
Point 소멸자 실행중
Point 소멸자 실행중
Rect소멸자 실행중
Point 소멸자 실행중
Point 소멸자 실행중
Rect소멸자 실행중
Point 소멸자 실행중
Point 소멸자 실행중
Point 소멸자 실행중
Point 소멸자 실행중

*/
