#include <iostream>
#include "derived.h"
using namespace std;

int main() {
	Derived dObj;
	//dObj.f(); //Derived
	//dObj.Base::f(); //Base
	cout << "overriding with virtual" << endl;
	dObj.f(); //Derived::f() called
	Base bObj;
	bObj = dObj; //overriding + virtual + �ܼ��� ��ü�� ����ȯ
	bObj.f(); //Base::f() called
	Base* bp = &dObj; //overriding + virtual + upCasting -> dynamic binding ����
	bp->f(); //Derived::f() called
	return 0;
}