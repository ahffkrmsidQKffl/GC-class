#include <iostream>
using namespace std;
int* int_arr_return(int size);
int main() {
	int size;
	cout << "�� ���� ������ �Է��Ͻðڽ��ϱ�? ";
	cin >> size;
	/*int* ip = new int[size]; //dynamic memory allocation, ip�� ���ÿ� �迭 ��ü�� ����
	for (int i = 0; i < size; ++i) {
		cin >> *(ip + i);
	}*/
	int* ip = int_arr_return(size);
	// �迭 ��Ҹ� �Է¹޾� ����� �հ� ����� ���ؼ� ����ϱ�
	int total = 0;
	for (int i = 0; i < size; ++i) {
		total += *(ip + i);
	}
	float average = (float)total / (float)size;
	cout << "��: " << total << ", ���: " << average << endl;
	cout << "delete ���� ip: " << ip << endl;
	cout << "delete ���� *ip: " << *ip << endl;
	delete[] ip; ip = NULL; //��Ʈ
	cout << "delete ���� ip: " << ip << endl;
	// cout << "delete ���� *ip: " << *ip << endl;
	return 0;
}
int* int_arr_return(int s) {
	int* p = new int[s];
	return p;
}