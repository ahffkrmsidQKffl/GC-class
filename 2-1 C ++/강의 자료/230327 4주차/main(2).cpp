#include <iostream>
using namespace std;

void addMul(int a, int b, int& s, int& m);
void addMul_by_ptr(int a, int b, int* s, int* m);

int main()
{
	int x, y, sum, mul;
	cout << "�� ���� ���� �Է��Ͻÿ�: ";
	cin >> x >> y;
	addMul(x, y, sum, mul);
	cout << "�� ���� ��: " << sum << endl;
	cout << "�� ���� ��: " << mul << endl;
	return 0;
}

void addMul(int a, int b, int &s, int &m) {
	s = a + b;
	m = a * b;
}