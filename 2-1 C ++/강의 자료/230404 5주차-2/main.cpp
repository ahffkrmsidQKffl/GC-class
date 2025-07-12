#include <iostream>
using namespace std;

void printArray(int* p, int size);
void UsingArray(char* A, int size);

int main() {
	int k = 1000;
	int* pk = &k;
	int** ppk = &pk;
	cout << "k: " << k << " &k: " << &k << endl;
	cout << "pk: " << pk << " &pk: " << &pk << " *pk: " << *pk << endl;
	cout << "ppk: " << ppk << " &ppk: " << &ppk << " *ppk: " 
		<< *ppk << " **ppk: " << **ppk << endl;
	/*char B[] = "foo bar";
	UsingArray(B, 8);
	cout << "B: " << B << endl;
	int i = 10;
	int* q = &i;
	cout << "q: " << q << endl;
	cout << "++q: " << ++q << endl;
	cout << "q: " << q << endl;
	cout << "q++: " << q++ << endl;
	cout << "q: " << q << endl;
	int A[10] = { -999 }; // 배열 초기화
	
	cout << "1. 배열명을 사용한 index 표현: " << endl;
	for (int i = 0; i < 10; i++) {
		A[i] = i;
	}
	printArray(A, 10);

	cout << "2. 배열명을 사용한 포인터표현: " << endl;
	for (int i = 0; i < 10; i++) {
		*(A + i) = i * i;
	}
	printArray(A, 10);
	int* ip = A; //A는 &A[0]과 같으므로 & 연산자 사용 X
	cout << "ip: " << ip << endl;
	cout << "3. 배열명을 저장한 포인터변수를 사용한 포인터표현: " << endl;
	for (int i = 0; i < 10; i++) {
		*(ip + i) = i * i * i;
	}
	printArray(A, 10);
	cout << "ip: " << ip << endl;
	cout << "3-1. 배열명을 저장한 포인터변수를 사용한 포인터표현: " << endl;
	for (int i = 0; i < 10; i++) {
		*ip++ = i;
	}
	printArray(A, 10);
	cout << "ip: " << ip << endl; //데시멀로 40 차이.
	ip = A;
	/*cout << "3-2. 배열명을 저장한 포인터변수를 사용한 포인터표현: " << endl;
	for (int i = 0; i < 10; i++) {
		*++ip = i;
	}
	printArray(A, 10);
	cout << "ip: " << ip << endl;
	cout << "4. 배열명을 저장한 포인터변수를 사용한 index 표현: " << endl;
	for (int i = 0; i < 10; i++) {
		ip[i] = i * i * i * i;
	}
	printArray(A, 10); */
	return 0;
}
void printArray(int* p, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";
	}
	cout << endl;
}
// A[i] == *(A + i) == *(ip + i) == ip[i]

void UsingArray(char* A, int size) {
	*(A + 3) = 'N';
}