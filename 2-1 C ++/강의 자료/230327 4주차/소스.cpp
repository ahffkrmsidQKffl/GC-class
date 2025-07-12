#include <iostream>
using namespace std;
void func(int x, int& y, int* z);
void swapByValue(int i, int j);
void swapByReference(int& ri, int& rj);
void swapByPointer(int* pi, int* pj);
int main() {
	int a = 10, b = -20, n = -100;
	func(a, b, &n);
	cout << "a: " << a << " b: " << b << " n: " << n << endl;
	swapByValue(a, b);
	cout << "after swapByValue a: " << a << " b: " << b << endl;
	swapByReference(a, b);
	cout << "after swapByReference a: " << a << " b: " << b << endl;
	swapByPointer(&a, &b);
	cout << "after swapByPointer a: " << a << " b: " << b << endl;
	return 0;
}
void swapByReference(int& ri, int& rj) {
	int tmp = ri;
	ri = rj;
	rj = tmp;
	cout << "in swapByReference ri: " << ri << " rj: " << rj << endl;
}
void swapByValue(int i, int j) {
	int tmp = i;
	i = j;
	j = tmp;
	cout << "in swapByValue i: " << i << " j: " << j << endl;
}
void swapByPointer(int* pi, int* pj) {
	int tmp = *pi;
	*pi = *pj;
	*pj = tmp;
	cout << "in swapByPointer *pi: " << *pi << " *pj: " << *pj << endl;
}
void func(int x, int& y, int* z) {
	x++;
	y++;
	(*z)++;
}
