#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "figure.h"

class Rectangle : public Figure {
private:
	int width, height;
public:
	Rectangle();
	Rectangle(string name, int x, int y, int w, int h);
	Rectangle(Rectangle& r);
	~Rectangle();
	void getArea();
	void DrawAll();
private:
	static int rPoint;
public:
	static int getRPoint();
};

#endif