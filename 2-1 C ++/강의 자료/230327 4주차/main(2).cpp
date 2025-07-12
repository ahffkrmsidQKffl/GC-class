#include <iostream>
using namespace std;

void addMul(int a, int b, int& s, int& m);
void addMul_by_ptr(int a, int b, int* s, int* m);

int main()
{
	int x, y, sum, mul;
	cout << "두 개의 수를 입력하시오: ";
	cin >> x >> y;
	addMul(x, y, sum, mul);
	cout << "두 수의 합: " << sum << endl;
	cout << "두 수의 곱: " << mul << endl;
	return 0;
}

void addMul(int a, int b, int &s, int &m) {
	s = a + b;
	m = a * b;
}