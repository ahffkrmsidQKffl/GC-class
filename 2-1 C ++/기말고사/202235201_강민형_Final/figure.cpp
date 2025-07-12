#include <iostream>
#include "figure.h"

int Figure::point = 0;

Figure::Figure() {
	name[0] = '\0';
	x = 0;
	y = 0;
	cout << "Figure con without pars" << endl;
}
Figure::Figure(string name, int x, int y) {
	this->name = name;
	this->x = x;
	this->y = y;
	cout << "Figure con with pars" << endl;
}
Figure::Figure(Figure& f) {
	this->name = f.name;
	this->x = f.x;
	this->y = f.y;
	cout << "Figure copycon" << endl;
}
Figure::~Figure() {
	cout << "Figure destructor" << endl;
}

int Figure::GetPoint() {
	return point;
}
