#include <iostream>
using namespace std;
void printArray(int* p, int size);
int main() {
	/*
��  �迭���� ����� indexǥ��, i
��  �迭���� ����� ������ǥ��, i*i
��  �迭���� ������ �����ͺ����� ����� ������ǥ��, i*i*i
��  �迭���� ������ �����ͺ����� ����� indexǥ��, i*i*i*i
*/
	int A[10] = { -999 };
	int* ip = A;
	cout << "1. �迭���� ����� index ǥ��: " << endl;
	for (int i = 0; i < 10; i++) {
		A[i] = i;
	}
	printArray(A, 10);
	cout << "2. �迭���� ����� ������ǥ��: " << endl;
	for (int i = 0; i < 10; i++) {
		*(A + i) = i*i;
	}
	printArray(A, 10);
	/*short S[10] = {-9};
	short* sp1 = (S + 3); //&S[3]�� ����
	short* sp2 = (S + 7); //&S[7]�� ����
	cout << "sp1: " << sp1 << endl;
	cout << "sp2: " << sp2 << endl;
	cout << "sp2 - sp1: " << sp2 - sp1 << endl; //������ sizeof(short)�� �������ش�.*/
	return 0;
}
void printArray(int* p, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";
	}
	cout << endl;
}