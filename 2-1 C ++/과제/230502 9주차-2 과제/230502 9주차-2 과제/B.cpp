#include <iostream>
#include "A.h"
#include "B.h"
using namespace std;

B::B() {
	cout << "������" << endl;
}
B::~B() {
	cout << "�Ҹ���" << endl;
}
void B::B1() {
	cout << "in B1()" << endl;
}
void B::B2() {
	cout << "in B2()" << endl;
	A::A2();
	B1();
}
