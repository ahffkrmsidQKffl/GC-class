#ifndef RECT_H
#define RECT_H
#include "point.h"
class Rect{
public:
	// 생성자
	Rect();
	Rect(const Point& TL, const Point& BR);
	Rect(int a, int b, int c, int d);
	~Rect();
	// 내용 출력
	void Print() const;
private:
	Point topLeft;
	Point bottomRight;
};

#endif
