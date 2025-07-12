#include "base.h"
#include "iostream"
using namespace std;

void Base::f() {
	cout << "Base::f() called" << endl;
}
Base::~Base() {
	cout << "~Base() called" << endl;
}