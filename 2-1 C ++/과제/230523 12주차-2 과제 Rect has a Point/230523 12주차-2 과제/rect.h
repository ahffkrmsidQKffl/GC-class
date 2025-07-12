#ifndef RECT_H
#define RECT_H
#include "point.h"

class Rect {
public:
	// »ý¼ºÀÚ
	Rect();
	Rect(const Point& TL, const Point& BR);
	Rect(int a, int b, int c, int d);
	Rect(const Rect& r);
	~Rect();
	void Print() const;
private:
	Point topLeft;
	Point bottomRight;
};

#endif