#include <iostream>
using namespace std;
class Base {
public:
	virtual void f();
	~Base();
};
void Base::f() {
	cout << "Base::f() called" << endl;
}
Base::~Base() {
	cout << "~Base() called" << endl;
}
class Derived: public Base {
public:
	void f();
	~Derived();
};
void Derived::f() {
	cout << "Derived::f() called" << endl;
}
Derived::~Derived() {
	cout << "~Derived() called" << endl;
}
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
