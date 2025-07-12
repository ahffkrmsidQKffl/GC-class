#ifndef POINT_H
#define POINT_H

class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int x, int y);
	Point(Point& p);
	~Point();
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	void print();
};

#endif
