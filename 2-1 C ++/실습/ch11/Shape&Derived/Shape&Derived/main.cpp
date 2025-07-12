#include <iostream>
using namespace std;

class Shape {
protected:
	int x;
	int y;
public:
	Shape();
	Shape(int x, int y);
	Shape(const Shape& s);
	~Shape();
	void Draw();
};

class Circle : public Shape {
private:
	int radius;
public:
	Circle();
	Circle(int x, int y, int r);
	Circle(const Circle& c);
	~Circle();
	void Draw(); //�������̵��� �����ε��� ���� ������ �ߴ�. // hidden�� Draw() �ҷ����� �� : c.Shape::Draw();
};



Shape::Shape() {
	cout << "Shape con without par" << endl;
	x = 0; y = 0;
}
Shape::Shape(int x, int y) {
	cout << "Shape con with par" << endl;
	this->x = x; this->y = y;
}
Shape::Shape(const Shape& s) {
	cout << "Shape copy con" << endl;
	this->x = s.x; this->y = s.y;
}
Shape::~Shape() {
	cout << "Shape destructor" << endl;
}
void Shape::Draw() {
	cout << "[Shape] Position = ( " << x << ", " << y << ")" << endl;
}



Circle::Circle() 
	:Shape()
{
	cout << "Circle con without par" << endl;
	radius = 0;
}
Circle::Circle(int x, int y, int r) 
	:Shape(x, y)
{
	cout << "Circle con with par" << endl;
	this->radius = r;
}
Circle::Circle(const Circle& c) 
:Shape(c) // ����ȯ�� �Ͼ�� ������ ok (������ζ�� �Ű������� Shape& s�� �����)
{
	cout << "Circle copy con" << endl;
	this->radius = c.radius;
}
Circle::~Circle() {
	cout << "Circle destructor" << endl;
}
void Circle::Draw() {
	cout << "[Circle] Position = ( " << x << ", " << y << ", " << radius << ")" << endl;
}




class Rect : public Shape {
private:
	int width, height;
public:
	Rect();
	Rect(int x, int y, int w, int h);
	Rect(const Rect& r);
	~Rect();
	void Draw(); 
};



Rect::Rect()
	:Shape()
{
	cout << "Rect con without par" << endl;
	width = 0; height = 0;
}
Rect::Rect(int x, int y, int w, int h)
	:Shape(x, y)
{
	cout << "Rect con with par" << endl;
	this->width = w; this->height = h;
}
Rect::Rect(const Rect& r)
	:Shape(r) // ����ȯ�� �Ͼ�� ������ ok (������ζ�� �Ű������� Shape& s�� �����)
{
	cout << "Rect copy con" << endl;
	this->width = r.width; this->height = r.height;
}
Rect::~Rect() {
	cout << "Rect destructor" << endl;
}
void Rect::Draw() {
	cout << "[Rect] Position = ( " << x << ", " << y << ", " << width << ", " << height << ")" << endl;
}

int main() {
	Shape bObj(10, 10);
	bObj.Draw();
	Circle dObj(10, 10, 100);
	dObj.Draw();
	cout << "��ü�� ����ȯ" << endl;
	bObj = dObj; //���Ǵ� ����ȯ implicit(�Ϲ���) casting
	bObj.Draw(); //Shape�� Draw�� ������ ��. bObj�� �»������� base obj
	cout << "upcasting" << endl;
	Shape* bp = &bObj;
	Circle* dp = &dObj;
	bp = dp;
	bp->Draw(); //Shape�� Draw�� ������ ��. bp�� �»������� base ptr

	//Shape s(10, 10);
	//Circle c(10, 10, 10);
	//Rect r(10, 10, 10, 10); //����� ��� ������ �Ҹ��� ���� (�κ��� ���� �����ǰ� �κ��� ���� �������)
	//s.Draw();
	//c.Draw();
	//r.Draw();
	//Shape* A[5] = { NULL };
	////R, C, R, C, R
	//A[0] = new Rect(1, 1, 1, 1);
	//A[1] = new Circle(1, 1, 1);
	//A[2] = new Rect(2, 2, 2, 2);
	//A[3] = new Circle(2, 2, 2);
	//A[4] = new Rect(3, 3, 3, 3);
	//for (int i = 0; i < 5; i++) {
	//	A[i]->Draw(); //�̷��� �����ϸ� ���� Shape(Base)�� Draw�� ������ ��(A[i]�� ������ Ÿ���� Shape*�̱� ����) -> ����ȯ�� �����ؾ� �Ѵ�? 3�� 14���� �� ����; �����������ΰ�
	//}
	return 0;
}//b d, ���ʿ� base �����ʿ� derived�� ok (�Ϲ����� ����ȯ)

//ppt base�� derived ���� ����ȯ(1) ���� �� ����