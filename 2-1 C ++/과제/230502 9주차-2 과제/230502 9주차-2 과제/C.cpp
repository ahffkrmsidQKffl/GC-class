#include <iostream>
#include "A.h"
#include "C.h"
using namespace std;

C::C() {
	cout << "������" << endl;
}
C::~C() {
	cout << "�Ҹ���" << endl;
}
void C::C1() {
	cout << "in C1()" << endl;
	A::A1();
	A::A2();
}
