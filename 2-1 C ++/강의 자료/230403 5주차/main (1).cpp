#include <iostream>
using namespace std;
int main() {
	int size;
	cout << "�� ���� ������ �Է��Ͻðڽ��ϱ�? ";
	cin >> size;
	int* ip = new int[size]; //dynamic memory allocation, ip�� ���ÿ� �迭 ��ü�� ����
	for (int i = 0; i < size; ++i) {
		cin >> *(ip + i);
	}
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