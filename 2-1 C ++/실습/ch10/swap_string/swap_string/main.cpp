#include <iostream>
#include <string>
using namespace std;
const int MAX = 50;

int main() {
	char A[MAX];
	char B[MAX];
	//사용자에게 두개의 문자열을 받기
	//swap_string_cstyle(char*, char*)을 콜해서 메인에서 출력한다.
	cout << "A 문자열을 입력하시오: " << endl;
	cin.getline(A, MAX);
	cout << "B 문자열을 입력하시오: " << endl;
	cin.getline(B, MAX);
	//숙제 : c스타일 문자열 A, B로부터 c++ 스타일의 문자열을 두개 만든다.
	//swap_string_cppstyle(); 함수를 콜하여 문자열을 스왑하여 출력한다.
	return 0;
}

void swap_string_cstyle(char)
