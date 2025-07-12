#include <iostream>
using namespace std;
class Shape {
protected:
	int x;
	int y;
public:
	Shape();
	Shape(int _x, int _y);
	Shape(const Shape& s);
	~Shape();
	void Draw(); 
};
Shape::Shape() {
	x = 0; y = 0;
	cout << "Shape con without parameter" << endl;
}
Shape::Shape(int _x, int _y) {
	x = _x; y = _y;
	cout << "Shape con with parameter" << endl;
}
Shape::Shape(const Shape& s) {
	x = s.x; y = s.y;
	cout << "Shape copy con" << endl;
}
Shape::~Shape() {
	cout << "Shape decon" << endl;
}
void Shape::Draw() {
	cout << "[Shape] Position = ( " << x << ", " << y << " )" << endl;
}
class Circle : public Shape {
private:
	int radius;
public:
	Circle();
	Circle(int _x, int _y, int r);
	Circle(const Circle& c);
	~Circle();
	void Draw();
};
Circle::Circle() 
	:Shape()
{
	radius = 0;
	cout << "Circle con without parameter" << endl;
}
Circle::Circle(int _x, int _y, int r) 
	:Shape(_x, _y)
{
	radius = r;
	cout << "Circle con with parameter" << endl;
}
Circle::Circle(const Circle& c) 
	:Shape(c)
{
	radius = c.radius;
	cout << "Circle copy con" << endl;
}
Circle::~Circle() {
	cout << "Circle decon" << endl;
}
void Circle::Draw() {
	cout << "[Circle] Position = ( " << x << ", " << y << ", " << radius << " )" << endl;
}
class Rect : public Shape {
private:
	int width, height;
public:
	Rect();
	Rect(int _x, int _y, int w, int h);
	Rect(const Rect& r);
	~Rect();
	void Draw();
};
Rect::Rect()
	:Shape()
{
	width = 0; height = 0;
	cout << "Rect con without parameter" << endl;
}
Rect::Rect(int _x, int _y, int w, int h)
	: Shape(_x, _y)
{
	width = w; height = h;
	cout << "Rect con with parameter" << endl;
}
Rect::Rect(const Rect& r)
	: Shape(r)
{
	width = r.width; height = r.height;
	cout << "Rect copy con" << endl;
}
Rect::~Rect() {
	cout << "Rect decon" << endl;
}
void Rect::Draw() {
	cout << "[Rect] Position = ( " << x << ", " << y << ", " << width << ", " << height << " )" << endl;
}
int main() {
	Shape bObj(10, 10);
	bObj.Draw();
	Circle dObj(10, 10, 100);
	dObj.Draw();
	cout << "객체간 형변환" << endl;
	bObj = dObj; // 허용되는 형변환 implicit(암묵적) casting
	bObj.Draw(); // Shape의 Draw()가 실행됨, bObj는 태생적으로 Base Obj
	cout << "upcasting" << endl;
	Shape* bp = &bObj;
	Circle* dp = &dObj;
	bp = dp;
	bp->Draw(); // Shape의 Draw()가 실행됨, bp는 태생적으로 Base ptr
	//Shape s(10, 10);
	//Circle c(5, 5, 50);
	//Rect r(20, 20, 10, 10);
	//s.Draw();
	//c.Draw();
	//r.Draw();
	//Shape* A[5] = { NULL };
	//// R, C, R, C, R
	//A[0] = new Rect(10, 10, 5, 5);
	//A[1] = new Circle(10, 10, 50); // Shape* = Circle*(bp = dp)
	//A[2] = new Rect(20, 20, 7, 7);
	//A[3] = new Circle(20, 20, 40);
	//A[4] = new Rect(30, 30, 9, 9);
	//for (int i = 0; i < 5; i++) {
	//	A[i]->Draw(); //base의 Draw()를 실행시킴
	//}
	return 0;
}