#include <iostream>
#include "DA.h"
using namespace std;

int func1(DA obj);
int func2(DA& obj);
int main() {
	int n = 0;
	int temp;
	cout << "몇 개의 정수를 입력하시겠습니까? : ";
	cin >> n;
	DA d1(n); // con with parameter
	for (int i = 0; i < d1.getSize(); i++) { 
		cout << "입력: ";
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

	cout << func1(d1) << endl; // passbyvalue를 했으므로 obj가 스택 메모리에 새로 만들어져야됨, obj는 깊은 복사 생성자에 의해 생성됨! (DA obj = d1)==(DA obj(d1))
	cout << func2(d1) << endl; // passbyreference를 했으므로 copycon or destructor가 일어나지 않음!

	DA d3(10);
	for (int i = 0; i < d3.getSize(); i++) {
		cout << "입력: ";
		cin >> temp;
		d3.setArrElement(i, temp);
	}

	d1 = d3; // 대입, 컴파일러는 'd1.operator=(d3)'를 실행한다. (깊대연 오버로딩을 안 하면 똑같은 메모리 위치 두번 delete 하기 때문에 소멸자 실행 될 때 런타임 에러 남)

	return 0;
}

int func1(DA obj) { // obj.arr의 요소합을 리턴 
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