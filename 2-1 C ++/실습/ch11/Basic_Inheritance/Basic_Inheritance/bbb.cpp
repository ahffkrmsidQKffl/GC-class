#include <iostream>
#include "aaa.h" //�굵 ��� �ߺ������� ��������� ������� �ϼ���
#include "bbb.h" //string�̶� namespace�� �� �ȿ� include�Ǿ� ����

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