#include <iostream>
using namespace std;
int main()
{
	//���ڿ��� ���� �迭�� ��������
	//���ڿ�
	char name1[6] = { 'G', 'r', 'a', 'c', 'e', '\0' };
	//���� �迭
	char name2[5] = { 'G', 'r', 'a', 'c', 'e' };
	int i = 5;
	cout << sizeof(i) << endl;
	cout << "sizeof(name1): " << sizeof(name1) << endl;
	cout << "sizeof(name2): " << sizeof(name2) << endl;
	cout << "sizeof(Grace): " << sizeof("Grace") << endl;
	cout << "strlen(name1): " << strlen(name1) << endl;
	cout << "strlen(name2): " << strlen(name2) << endl;
	cout << "strlen(Grace): " << strlen("Grace") << endl;
	cout << name1 << endl;
	cout << name2 << endl;
	/* �ּҸ� �Է¹޾� ����ϱ�, 
	char address[100];
	cout << "�ּ� �Է�: ";
	cin >> address;
	cin.getline(address, 100, '\n');
	cout << "�Էµ� �ּҴ� " << address << " �Դϴ�." << endl;
*/

	return 0;
}