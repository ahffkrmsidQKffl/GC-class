#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "figure.h"

class Triangle : public Figure {
private:
	int base, height;
public:
	Triangle();
	Triangle(string name, int x, int y, int b, int h);
	Triangle(Triangle& t);
	~Triangle();
	void getArea();
	void DrawAll();
private:
	static int tPoint;
public:
	static int getTPoint();
};

#endif