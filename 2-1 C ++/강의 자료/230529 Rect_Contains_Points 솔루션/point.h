#ifndef POINT_H
#define POINT_H

// Point Ŭ������ �����Ѵ�.
class Point {
public:
	// ��� �Լ�
	void Print() const;

	// �����ڵ�
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);
	// �Ҹ���
	~Point();
	// ������
	void SetX(int value) ;
	void SetY(int value);
	int GetX() const;
	int GetY() const;

private:
	// ��� ����
	int x, y;
};

#endif
