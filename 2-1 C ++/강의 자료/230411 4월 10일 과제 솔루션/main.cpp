#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int MAX = 100;

// 문자열의 스왑
void swap_string(char* cpp1, char* cpp2);
void swap_string_cpp(string& A, string& B);

int main()
{
	char A[MAX], B[MAX]; //cstyle string

	cout << "처음 문자열: ";
	cin.getline(A, MAX); //sapce 허용

	cout << "두번째 문자열: ";
	cin.getline(B, MAX);

	cout << "(void*)A: " << (void*)A << endl; //주소 출력
	cout << "(void*)B: " << (void*)B << endl;

	swap_string(A, B);

	cout << "swap_string 콜 후" << endl;
	cout << "처음 문자열은 " << A << endl
		<< "두번째 문자열은 " << B << endl
		<< "-----------------------\n"; //"\n"은 endl과 같은 역할을 한다.

	//cstyle의 문자열 A,B를 c++ style 문자열로 만들어 스왑한다. (과제!)
	string strA = A;
	string strB = B;
	swap_string_cpp(strA, strB);
	cout << "swap_string_cpp 콜 후" << endl;
	cout << "처음 문자열은 " << strA << endl
		<< "두번째 문자열은 " << strB << endl
		<< "-----------------------\n"; //"\n"은 endl과 같은 역할을 한다.

	return 0;
}

void swap_string(char* cpp1, char* cpp2)
{
	cout << "swap_string 콜" << endl;
	cout << "(void*)cpp1: " << (void*)cpp1 << endl; //주소출력
	cout << "(void*)cpp2: " << (void*)cpp2 << endl;

	cout << "&cpp1: " << &cpp1 << endl; //값 출력
	cout << "&cpp2: " << &cpp2 << endl;

	// //not working version, local 변수만 변경
	// char *tp;
	// tp = cpp1;
	// cpp1 = cpp2;
	// cpp2 = tp;

	 // working version -> vs code 에서는 strcpy함수 사용.
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
	cout << "swap_string_cpp 콜" << endl;
	string tmp = A;
	A = B;
	B = tmp;
}