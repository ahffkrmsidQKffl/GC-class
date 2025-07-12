#include <iostream>
using namespace std;
void printArray(int* p, int size);
int main()
{
	//short S[10] = { -9 };
	//short* sp1 = (S + 3); // &S[3]와 같음
	//short* sp2 = (S + 7); // &S[7]와 같음
	//cout << "sp1: " << sp1 << endl;
	//cout << "sp2: " << sp2 << endl;
	//cout << "sp2 - sp1: " << sp2 - sp1 << endl; // 뺄 때는 sizeof(short)로 나누어준다.

	/*배열명을 사용한 index 표현, i
	배열명을 사용한 포인터 표현, i * i
	배열명을 저장한 포인터변수를 사용한 포인터표현, i * i * i
	배열명을 저장한 포인터변수를 사용한 index표현, i * i * i * i */

	int A[10] = { -999 };
	int* ip = A;
	cout << "1. 배열명을 사용한 index 표현: " << endl;
	for (int i = 0; i < 10; i++) {
		A[i] = i;
	}
	printArray(A, 10);

	cout << "2. 배열명을 사용한 포인터 표현: " << endl;
	for (int i = 0; i < 10; i++) {
		*(A+i) = i*i;
	}
	printArray(A, 10);

	cout << "3. 배열명을 저장한 포인터변수를 사용한 포인터표현: " << endl;
	for (int i = 0; i < 10; i++) {
		*(ip + i) = i * i * i;
	}
	printArray(A, 10);

	cout << "4. 배열명을 저장한 포인터변수를 사용한 index표현: " << endl;
	for (int i = 0; i < 10; i++) {
		ip[i] = i * i * i * i;
	}
	printArray(A, 10);

	return 0;

}

void printArray(int* p, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";

	}
	cout << endl;
}