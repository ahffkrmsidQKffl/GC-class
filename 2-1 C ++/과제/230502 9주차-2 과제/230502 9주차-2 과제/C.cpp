#include <iostream>
#include "A.h"
#include "C.h"
using namespace std;

C::C() {
	cout << "持失切" << endl;
}
C::~C() {
	cout << "社瑚切" << endl;
}
void C::C1() {
	cout << "in C1()" << endl;
	A::A1();
	A::A2();
}
