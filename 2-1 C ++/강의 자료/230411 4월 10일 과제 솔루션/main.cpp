#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int MAX = 100;

// ���ڿ��� ����
void swap_string(char* cpp1, char* cpp2);
void swap_string_cpp(string& A, string& B);

int main()
{
	char A[MAX], B[MAX]; //cstyle string

	cout << "ó�� ���ڿ�: ";
	cin.getline(A, MAX); //sapce ���

	cout << "�ι�° ���ڿ�: ";
	cin.getline(B, MAX);

	cout << "(void*)A: " << (void*)A << endl; //�ּ� ���
	cout << "(void*)B: " << (void*)B << endl;

	swap_string(A, B);

	cout << "swap_string �� ��" << endl;
	cout << "ó�� ���ڿ��� " << A << endl
		<< "�ι�° ���ڿ��� " << B << endl
		<< "-----------------------\n"; //"\n"�� endl�� ���� ������ �Ѵ�.

	//cstyle�� ���ڿ� A,B�� c++ style ���ڿ��� ����� �����Ѵ�. (����!)
	string strA = A;
	string strB = B;
	swap_string_cpp(strA, strB);
	cout << "swap_string_cpp �� ��" << endl;
	cout << "ó�� ���ڿ��� " << strA << endl
		<< "�ι�° ���ڿ��� " << strB << endl
		<< "-----------------------\n"; //"\n"�� endl�� ���� ������ �Ѵ�.

	return 0;
}

void swap_string(char* cpp1, char* cpp2)
{
	cout << "swap_string ��" << endl;
	cout << "(void*)cpp1: " << (void*)cpp1 << endl; //�ּ����
	cout << "(void*)cpp2: " << (void*)cpp2 << endl;

	cout << "&cpp1: " << &cpp1 << endl; //�� ���
	cout << "&cpp2: " << &cpp2 << endl;

	// //not working version, local ������ ����
	// char *tp;
	// tp = cpp1;
	// cpp1 = cpp2;
	// cpp2 = tp;

	 // working version -> vs code ������ strcpy�Լ� ���.
	char tp[MAX];
	strcpy_s(tp, MAX, cpp1);
	strcpy_s(cpp1, MAX, cpp2);
	strcpy_s(cpp2, MAX, tp);

	////working in vs code
	//char tp[MAX];
	//strcpy(tp, cpp1);
	//strcpy(cpp1, cpp2);
	//strcpy(cpp2, tp);
}
void swap_string_cpp(string &A, string &B) {
	cout << "swap_string_cpp ��" << endl;
	string tmp = A;
	A = B;
	B = tmp;
}