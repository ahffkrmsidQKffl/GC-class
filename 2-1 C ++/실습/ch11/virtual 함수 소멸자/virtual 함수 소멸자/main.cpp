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
	bObj = dObj; //overriding + virtual + 단순한 객체간 형변환
	bObj.f(); //Base::f() called
	Base* bp = &dObj; //overriding + virtual + upCasting -> dynamic binding 가능
	bp->f(); //Derived::f() called
	return 0;
}