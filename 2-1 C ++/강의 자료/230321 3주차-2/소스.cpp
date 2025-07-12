#include <iostream>
using namespace std;
void func(int x, int& y);
void swapByValue(int i, int j);
void swapByReference(int& ri, int& rj);
int main() {
	int a = 10, b = -20;
	swapByReference(a, b);
	cout << "after swapByReference a: " << a << " b: " << b << endl;
	/*func(a, b);
	cout << "a: " << a << " b: " << b << endl;*/
	// swapByValue(a, b);
	// cout << "after swapByValue a: " << a << " b: " << b << endl;
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
void func(int x, int& y) {
	x++;
	y++;
}