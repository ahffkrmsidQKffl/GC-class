#include <iostream>
#include "aaa.h" //얘도 사실 중복이지만 명시적으로 적으라고 하셨음
#include "bbb.h" //string이랑 namespace는 이 안에 include되어 있음

BBB::BBB() {
	b = 0; name[0] = '\0';
	cout << "BBB con without par" << endl;
}

BBB::BBB(int b, string name) {
	this->b = b; this->name = name;
	cout << "BBB con with par" << endl;
}

BBB::~BBB() {
	cout << "BBB decon" << endl;
}

void BBB::Print() {
	cout << "BBB::Print() b: " << b << " name: " << name << endl;
	cout << "pro: " << pro << " pub: " << pub << endl;
	//cout << "pri: " << pri << endl;
}

void BBB::SetData() {
	//pri = 5;
	pro = 6; pub = 7;

}