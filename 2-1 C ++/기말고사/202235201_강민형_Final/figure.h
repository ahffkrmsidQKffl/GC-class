#ifndef FIGURE_H
#define FIGURE_H
#include<string>
using namespace std;

class Figure {
protected:
	string name;
	int x, y;
public:
	Figure();
	Figure(string name, int x, int y);
	Figure(Figure& f);
	virtual ~Figure();
	virtual void getArea() = 0;
	virtual void DrawAll() = 0;

protected:
	static int point;

public:
	static int GetPoint();

};

#endif