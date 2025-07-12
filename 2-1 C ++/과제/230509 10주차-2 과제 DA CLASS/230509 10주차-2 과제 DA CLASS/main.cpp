#include <iostream>
#include "DA.h"
using namespace std;

int func1(DA obj);
int func2(DA& obj);
int main() {
	int n = 0;
	int temp;
	cout << "�� ���� ������ �Է��Ͻðڽ��ϱ�? : ";
	cin >> n;
	DA d1(n); // con with parameter
	for (int i = 0; i < d1.getSize(); i++) { 
		cout << "�Է�: ";
		cin >> temp;         
		d1.setArrElement(i, temp);
	}
	cout << "reverse out: " << endl;
	for (int i = d1.getSize() - 1; i >= 0; i--) {
		cout << d1.getArrElement(i) << " ";
	}
	cout << endl;

	DA d2(d1); // deep copy con
	for (int i = 0; i < d2.getSize(); i++) {
		cout << d2.getArrElement(i) << " ";
	}
	cout << endl;

	cout << func1(d1) << endl; // passbyvalue�� �����Ƿ� obj�� ���� �޸𸮿� ���� ��������ߵ�, obj�� ���� ���� �����ڿ� ���� ������! (DA obj = d1)==(DA obj(d1))
	cout << func2(d1) << endl; // passbyreference�� �����Ƿ� copycon or destructor�� �Ͼ�� ����!

	DA d3(10);
	for (int i = 0; i < d3.getSize(); i++) {
		cout << "�Է�: ";
		cin >> temp;
		d3.setArrElement(i, temp);
	}

	d1 = d3; // ����, �����Ϸ��� 'd1.operator=(d3)'�� �����Ѵ�. (��뿬 �����ε��� �� �ϸ� �Ȱ��� �޸� ��ġ �ι� delete �ϱ� ������ �Ҹ��� ���� �� �� ��Ÿ�� ���� ��)

	return 0;
}

int func1(DA obj) { // obj.arr�� ������� ���� 
	cout << "in func1()" << endl;
	int sum = 0;
	for (int i = 0; i < obj.getSize(); i++) {
		sum = sum + obj.getArrElement(i);
	}
	return sum;
}

int func2(DA& obj) {
	cout << "in func2()" << endl;
	int sum = 0;
	for (int i = 0; i < obj.getSize(); i++) {
		sum = sum + obj.getArrElement(i);
	}
	return sum;
}