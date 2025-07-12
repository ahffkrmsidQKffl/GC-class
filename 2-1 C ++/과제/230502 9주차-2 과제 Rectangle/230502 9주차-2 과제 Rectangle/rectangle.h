#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
	double length;
	double height;
public:
	Rectangle(double length, double height);
	Rectangle(Rectangle& rect);
	~Rectangle();
	void print() const;
	double getArea() const;
	double getPerimeter() const;
};
#endif