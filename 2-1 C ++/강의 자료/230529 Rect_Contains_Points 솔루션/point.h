#ifndef POINT_H
#define POINT_H

// Point 클래스를 정의한다.
class Point {
public:
	// 멤버 함수
	void Print() const;

	// 생성자들
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);
	// 소멸자
	~Point();
	// 접근자
	void SetX(int value) ;
	void SetY(int value);
	int GetX() const;
	int GetY() const;

private:
	// 멤버 변수
	int x, y;
};

#endif
