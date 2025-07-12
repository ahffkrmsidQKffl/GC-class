#include "derived.h"
#include "iostream"
using namespace std;

void Derived::f() {
	cout << "Derived::f() called" << endl;
}
Derived::~Derived() {
	cout << "~Derived() called" << endl;
}