#include <iostream>
using namespace std;

int addMul(int a, int b, int& add, int& mul);
int addMul_by_ptr(int x, int y, int* s, int* m); //4���� ���� �ð��� �߰��� �κ�

int main() {
	int a, b, add=0, mul=0;
	cout << "ù��° ���ڸ� �Է��ϼ���: ";
	cin >> a;
	cout << "�ι�° ���ڸ� �Է��ϼ���: ";
	cin >> b;
	addMul(a, b, add, mul);
	cout << "�μ��� ���� " << add << "�̰� " << "�μ��� ���� " << mul << "�Դϴ�.";



}

int addMul(int a, int b,int &add, int&mul)
{
	add = a + b;
	mul= a* b;
	return 0;
}

int addMul_by_ptr(int x, int y, int* s, int* m);
