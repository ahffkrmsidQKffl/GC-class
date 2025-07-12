#include <iostream>
#include <string>
using namespace std;
const int MAX = 50;
void swap_string_cstyle(char* cp1, char* cp2);
int main() {
	char A[MAX];
	char B[MAX];
	// 사용자에게 두 개의 문자열 받기
	// swap_string_cstyle(char*, char*)을 콜해서 메인에서 출력한다.
	cout << "처음 문자열: ";
	cin.getline(A, MAX);
	cout << "두번째 문자열: ";
	cin.getline(B, MAX);
	cout << "A: " << (void*)A << endl;
	cout << "B: " << (void*)B << endl;
	swap_string_cstyle(A, B);
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	// 숙제: cstyle 문자열 A, B로부터 cppstyle의 문자열을 두 개 만든다.
	// swap_string_cppstyle(); 함수를 콜하여 문자열을 스왑하여 출력한다.
	return 0;
}
void swap_string_cstyle(char* cp1, char* cp2) {

}