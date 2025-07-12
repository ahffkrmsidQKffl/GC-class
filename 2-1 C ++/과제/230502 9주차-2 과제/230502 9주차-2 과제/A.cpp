#include <iostream>
#include "A.h"
#include "B.h"
using namespace std;

A::A() {
	cout << "持失切" << endl;
}
A::~A() {
	cout << "社瑚切" << endl;
}
void A::A1() {
	cout << "in A1()" << endl; 
	B::B1();
	B::B2();
}
void A::A2() {
	cout << "in A2()" << endl;
}
void A::A3() {
	cout << "in A3()" << endl;
}
