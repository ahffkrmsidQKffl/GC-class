#include <iostream>
using namespace std;
char* reverse_Str(char* A, int num);
char* reverse_Str_static(char* A, int num);

int main(){
	
	char orig[6] = "ABCDE";
	int len = strlen(orig); // 5나옴, sizeof하면 6나와요

	char* rev = reverse_Str_static(orig, len);

	//char* rev = reverse_Str(orig, len);
	
	//main 함수에서 reverse string을 만들기
	//char* rev = new char[len + 1];
	////orig의 문자열을 역순으로 rev에 채워넣는다.
	//for (int i = 0; i < len; i++) {
	//	rev[i] = orig[len - i - 1];
	//}
	//rev[len] = '\0';
	cout << "rev: " << rev << endl;
	return 0;

	}

char* reverse_Str(char* A, int num) {
	char* cp;
	cp = new char[num + 1]; // dynamic binding
	for (int i = 0; i < num; i++) {
		cp[i] = A[num - i - 1]; //*(cp+i) = *(A+num-i-1)과 같다
	}
	cp[num] = '\0';
	return cp;
}

char* reverse_Str_static(char* A, int num)
{
	char cp[10] = { '\0' }; // static binding
	for (int i = 0; i < num; i++) {
		cp[i] = A[num - i - 1]; //*(cp+i) = *(A+num-i-1)과 같다
	}
	cp[num] = '\0';
	return cp;
}
