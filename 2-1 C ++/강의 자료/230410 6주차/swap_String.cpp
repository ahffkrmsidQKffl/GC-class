#include <iostream>
#include <string>
using namespace std;
const int MAX = 50;
void swap_string_cstyle(char* cp1, char* cp2);
int main() {
	char A[MAX];
	char B[MAX];
	// ����ڿ��� �� ���� ���ڿ� �ޱ�
	// swap_string_cstyle(char*, char*)�� ���ؼ� ���ο��� ����Ѵ�.
	cout << "ó�� ���ڿ�: ";
	cin.getline(A, MAX);
	cout << "�ι�° ���ڿ�: ";
	cin.getline(B, MAX);
	cout << "A: " << (void*)A << endl;
	cout << "B: " << (void*)B << endl;
	swap_string_cstyle(A, B);
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	// ����: cstyle ���ڿ� A, B�κ��� cppstyle�� ���ڿ��� �� �� �����.
	// swap_string_cppstyle(); �Լ��� ���Ͽ� ���ڿ��� �����Ͽ� ����Ѵ�.
	return 0;
}
void swap_string_cstyle(char* cp1, char* cp2) {

}