#include <iostream>
#include <string>
using namespace std;
const int MAX = 50;

int main() {
	char A[MAX];
	char B[MAX];
	//����ڿ��� �ΰ��� ���ڿ��� �ޱ�
	//swap_string_cstyle(char*, char*)�� ���ؼ� ���ο��� ����Ѵ�.
	cout << "A ���ڿ��� �Է��Ͻÿ�: " << endl;
	cin.getline(A, MAX);
	cout << "B ���ڿ��� �Է��Ͻÿ�: " << endl;
	cin.getline(B, MAX);
	//���� : c��Ÿ�� ���ڿ� A, B�κ��� c++ ��Ÿ���� ���ڿ��� �ΰ� �����.
	//swap_string_cppstyle(); �Լ��� ���Ͽ� ���ڿ��� �����Ͽ� ����Ѵ�.
	return 0;
}

void swap_string_cstyle(char)
