#ifndef BBB_H
#define BBB_H
#include <string>
#include "aaa.h"
using namespace std; //string�̶�� ���̺귯���� std��� namspace�� ���ϱ� ������ �ݵ�� �̰͵� ���������

class BBB : public AAA { //���� �� ����ϰھ� = �ݷ�
private:
	int b;
	string name;
public:
	BBB();
	BBB(int b, string name);
	~BBB();
	void Print();
	void SetData();
};

#endif