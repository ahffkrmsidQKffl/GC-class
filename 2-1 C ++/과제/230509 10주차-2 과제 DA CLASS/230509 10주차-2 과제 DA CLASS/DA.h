#ifndef DA_H
#define DA_H

const int DEFAULT_ARR_SIZE = 10;
class DA {
private:
	int* arr;
	int size;
public: //public �� �ϸ� ����Ʈ�� private
	DA();
	DA(int size);
	DA(const DA& d);
	~DA();
	int getArrElement(int index);
	int getSize();
	void setArrElement(int index, int val);
	void setSize(int size);
	DA& operator=(const DA& other); // ���� ���� ������ overloading

};

#endif