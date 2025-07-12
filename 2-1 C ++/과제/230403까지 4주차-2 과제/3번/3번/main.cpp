#include <iostream>
using namespace std;
void printArray(int* p, int size);
void UsingArray(char* A, int size);

int main()
{
	int k = 1000;
	int* pk = &k;
	int** ppk = &pk;
	cout << "k: " << k << " &k: " << &k << endl;
	cout << "pk: " << pk << " &pk: " << &pk << " *pk: " << *pk << endl;
	cout << "ppk: " << ppk << " &ppk: " << &ppk << " *ppk: " << *ppk << " **ppk: " << **ppk << endl;


	/*배열명을 사용한 index 표현, i
	배열명을 사용한 포인터 표현, i * i
	배열명을 저장한 포인터변수를 사용한 포인터표현, i * i * i
	배열명을 저장한 포인터변수를 사용한 index표현, i * i * i * i */
	
	//char B[] = "foo bar";
	//UsingArray(B, 8);
	//cout << "B: " << B << endl;


	//int i = 10;
	//int* q = &i;
	//cout << "q:" << q << endl;
	//cout << "++q: " << ++q << endl;
	//cout << "q:" << q << endl;
	//cout << "q++: " << q++ << endl;
	//cout << "q:" << q << endl;      //후위연산 전위연산 차이


	//int A[10] = { -999 };
	//int* ip = A;
	//cout << "1. 배열명을 사용한 index 표현: " << endl;
	//for (int i = 0; i < 10; i++) {
	//	A[i] = i;
	//}
	//printArray(A, 10);


	//cout << "2. 배열명을 사용한 포인터 표현: " << endl;
	//for (int i = 0; i < 10; i++) {
	//	*(A + i) = i * i;
	//}
	//printArray(A, 10);


	//cout << "ip:" << ip << endl;
	//cout << "3. 배열명을 저장한 포인터변수를 사용한 포인터표현: " << endl;
	//for (int i = 0; i < 10; i++) {
	//	*(ip + i) = i * i * i;
	//}
	//printArray(A, 10);
	//cout << "ip: " << ip << endl; // 3번을 돌고 나면 ip가 증가되어 있을까? 증가하지 않지 당연히 ㅋㅋ


	//cout << "3-1. 배열명을 저장한 포인터변수를 사용한 포인터표현: " << endl;
	//for (int i = 0; i < 10; i++) {
	//	*ip++ = i;
	//}
	//printArray(A, 10);
	//cout << "ip:" << ip << endl; // 데시멀로 40차이
	//ip = A;

	////cout << "3-2. 배열명을 저장한 포인터변수를 사용한 포인터표현: " << endl;
	////for (int i = 0; i < 10; i++) {
	////	*++ip = i*i; //index범위침범으로 런타임 오류. ip가 먼저 늘어버리고 디레퍼런싱했으므로 인덱스 아웃 오브 바운드
	////}
	////printArray(A, 10);
	////cout << "ip:" << ip << endl;


	//cout << "4. 배열명을 저장한 포인터변수를 사용한 index표현: " << endl;
	//for (int i = 0; i < 10; i++) {
	//	ip[i] = i * i * i * i;
	//}
	//printArray(A, 10);

	return 0;

}

void printArray(int* p, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";

	}
	cout << endl;
}

//이거 3번 4번을 수업시간에 다 안 했었나...? 난 왜해놨지 ㅋㅋ 이게 숙제라니;

void UsingArray(char* A, int size) {
	*(A + 3) = 'N';
}