#include <iostream>
using namespace std;
int* int_array_return(int s);

int main() {

	int size;
	cout << "�� ���� ������ �Է��ϰڽ��ϱ�? ";
	cin >> size;
	//int* ip = new int[size]; //dynamic memory allocation, ip�� ���ÿ� �迭 ��ü�� ����
	//for (int i = 0; i < size; ++i) {
	//	cin >> *(ip + i);
	//}
	int* ip = int_array_return(size);

	// �迭 ��Ҹ� �Է¹޾� ����� �հ� ����� ���ؼ� ����ϱ�
	int sum=0;
for (int i = 0; i < size; ++i) {
	sum += *(ip + i);
}
float average = (float)sum / (float)size;
cout << "��: " << sum << " ���: " << average << endl;
cout << "delete���� ip: " << ip << endl;
cout << "delete ���� *ip: " << *ip << endl;
delete[] ip; ip = NULL; //��Ʈ
cout << "delete ���� ip: " << ip << endl;
// cout << "delete ���� *ip: " << *ip << endl; //���׶߰����翬�� �ϸ� �ȵŤ��� 


return 0;
}

int* int_array_return(int s) {
	int* p = new int[s];
	return p;
}