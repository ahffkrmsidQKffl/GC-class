#ifndef BBB_H
#define BBB_H
#include <string>
#include "aaa.h"
using namespace std; //string이라는 라이브러리가 std라는 namspace에 속하기 때문에 반드시 이것도 적어줘야함

class BBB : public AAA { //나는 뭘 상속하겠어 = 콜론
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