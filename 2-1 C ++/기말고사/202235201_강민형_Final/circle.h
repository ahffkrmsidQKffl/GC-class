#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"

class Circle : public Figure {
private:
	int radius;
public:
	Circle();
	Circle(string name, int x, int y, int r);
	Circle(Circle& c);
	~Circle();
	void getArea();
	void DrawAll();
private:
	static int cPoint;
public:
	static int getCPoint();
};

#endif