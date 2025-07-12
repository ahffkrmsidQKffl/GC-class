#include <iostream>
#include <cassert>
#include "rect.h"
#include "point.h"
using namespace std;

int main() {
	Point topleft1(0, 1);
	Point bottomright1(1, 0);
	Rect rect1(topleft1, bottomright1);

	Point topleft2;
	Point bottomright2(100,-100);
	Rect rect2(topleft2, bottomright2);

	Point topleft3(topleft2);
	Point bottomright3(bottomright2);
	Rect rect3(topleft3, bottomright3);

	Rect rect4(rect3);

	Rect rect5{ 0, 2, 2, 0 };

	rect1.Print();
	rect2.Print();
	rect3.Print();
	rect4.Print();
	rect5.Print();
}