#include <iostream>
using namespace std;
char* reverse_Str(char* A, int num);
char* revers_str_static(char* A, int num);
int main() {
	char orig[6] = "ABCDE";
	int len = strlen(orig); //vsc ���� ����� #include <cstring>
	char* rev = revers_str_static(orig, len);
	// char* rev = reverse_Str(orig, len);
	// main �Լ����� reverse string �����
	//char* rev = new char[len + 1];
	//// orig�� ���ڸ� �������� rev�� ä���ִ´�.
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
			cp[i] = A[num - i - 1]; // *(cp + i) = *(A + num - i - 1)�� ���� �ε���/������
	}
	cp[num] = '\0';
	return cp;
}
char* revers_str_static(char* A, int num) {
	char cp[10] = { '\0'}; // static binding
	for (int i = 0; i < num; i++) {
		cp[i] = A[num - i - 1]; // *(cp + i) = *(A + num - i - 1)�� ���� �ε���/������
	}
	cp[num] = '\0';
	return cp;
}