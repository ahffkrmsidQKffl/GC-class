#ifndef DA_H
#define DA_H

const int DEFAULT_ARR_SIZE = 10;
class DA {
private:
	int* arr;
	int size;
public: //public 안 하면 디폴트는 private
	DA();
	DA(int size);
	DA(const DA& d);
	~DA();
	int getArrElement(int index);
	int getSize();
	void setArrElement(int index, int val);
	void setSize(int size);
	DA& operator=(const DA& other); // 깊은 대입 연산자 overloading

};

#endif