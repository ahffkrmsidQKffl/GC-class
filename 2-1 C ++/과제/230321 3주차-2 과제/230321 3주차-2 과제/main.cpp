#include <iostream>
using namespace std;

int addMul(int a, int b, int& add, int& mul);
int addMul_by_ptr(int x, int y, int* s, int* m); //4주차 수업 시간에 추가된 부분

int main() {
	int a, b, add=0, mul=0;
	cout << "첫번째 숫자를 입력하세요: ";
	cin >> a;
	cout << "두번째 숫자를 입력하세요: ";
	cin >> b;
	addMul(a, b, add, mul);
	cout << "두수의 합은 " << add << "이고 " << "두수의 곱은 " << mul << "입니다.";



}

int addMul(int a, int b,int &add, int&mul)
{
	add = a + b;
	mul= a* b;
	return 0;
}

int addMul_by_ptr(int x, int y, int* s, int* m);
