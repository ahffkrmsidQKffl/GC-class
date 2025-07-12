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
	void Draw(); //오버라이딩과 오버로딩에 대한 구분을 했다. // hidden된 Draw() 불러오는 법 : c.Shape::Draw();
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
:Shape(c) // 형변환이 일어나기 때문에 ok (원래대로라면 매개변수로 Shape& s를 기대함)
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
	:Shape(r) // 형변환이 일어나기 때문에 ok (원래대로라면 매개변수로 Shape& s를 기대함)
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
	cout << "객체간 형변환" << endl;
	bObj = dObj; //허용되는 형변환 implicit(암묵적) casting
	bObj.Draw(); //Shape의 Draw가 실행이 됨. bObj는 태생적으로 base obj
	cout << "upcasting" << endl;
	Shape* bp = &bObj;
	Circle* dp = &dObj;
	bp = dp;
	bp->Draw(); //Shape의 Draw가 실행이 됨. bp는 태생적으로 base ptr

	//Shape s(10, 10);
	//Circle c(10, 10, 10);
	//Rect r(10, 10, 10, 10); //상속의 경우 생성과 소멸의 순서 (부분이 먼저 생성되고 부분이 먼저 사라진다)
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
	//	A[i]->Draw(); //이렇게 실행하면 전부 Shape(Base)의 Draw가 실행이 됨(A[i]의 데이터 타입이 Shape*이기 때문) -> 형변환을 공부해야 한다? 3시 14분쯤 못 들음; 폴리몰피즘인가
	//}
	return 0;
}//b d, 왼쪽엔 base 오른쪽엔 derived면 ok (암묵적인 형변환)

//ppt base와 derived 간의 형변환(1) 내용 못 들음