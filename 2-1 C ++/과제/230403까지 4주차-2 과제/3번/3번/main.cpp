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


	/*�迭���� ����� index ǥ��, i
	�迭���� ����� ������ ǥ��, i * i
	�迭���� ������ �����ͺ����� ����� ������ǥ��, i * i * i
	�迭���� ������ �����ͺ����� ����� indexǥ��, i * i * i * i */
	
	//char B[] = "foo bar";
	//UsingArray(B, 8);
	//cout << "B: " << B << endl;


	//int i = 10;
	//int* q = &i;
	//cout << "q:" << q << endl;
	//cout << "++q: " << ++q << endl;
	//cout << "q:" << q << endl;
	//cout << "q++: " << q++ << endl;
	//cout << "q:" << q << endl;      //�������� �������� ����


	//int A[10] = { -999 };
	//int* ip = A;
	//cout << "1. �迭���� ����� index ǥ��: " << endl;
	//for (int i = 0; i < 10; i++) {
	//	A[i] = i;
	//}
	//printArray(A, 10);


	//cout << "2. �迭���� ����� ������ ǥ��: " << endl;
	//for (int i = 0; i < 10; i++) {
	//	*(A + i) = i * i;
	//}
	//printArray(A, 10);


	//cout << "ip:" << ip << endl;
	//cout << "3. �迭���� ������ �����ͺ����� ����� ������ǥ��: " << endl;
	//for (int i = 0; i < 10; i++) {
	//	*(ip + i) = i * i * i;
	//}
	//printArray(A, 10);
	//cout << "ip: " << ip << endl; // 3���� ���� ���� ip�� �����Ǿ� ������? �������� ���� �翬�� ����


	//cout << "3-1. �迭���� ������ �����ͺ����� ����� ������ǥ��: " << endl;
	//for (int i = 0; i < 10; i++) {
	//	*ip++ = i;
	//}
	//printArray(A, 10);
	//cout << "ip:" << ip << endl; // ���øַ� 40����
	//ip = A;

	////cout << "3-2. �迭���� ������ �����ͺ����� ����� ������ǥ��: " << endl;
	////for (int i = 0; i < 10; i++) {
	////	*++ip = i*i; //index����ħ������ ��Ÿ�� ����. ip�� ���� �þ������ ���۷��������Ƿ� �ε��� �ƿ� ���� �ٿ��
	////}
	////printArray(A, 10);
	////cout << "ip:" << ip << endl;


	//cout << "4. �迭���� ������ �����ͺ����� ����� indexǥ��: " << endl;
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

//�̰� 3�� 4���� �����ð��� �� �� �߾���...? �� ���س��� ���� �̰� �������;

void UsingArray(char* A, int size) {
	*(A + 3) = 'N';
}