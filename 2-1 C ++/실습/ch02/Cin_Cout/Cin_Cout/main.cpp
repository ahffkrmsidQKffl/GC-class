#include <iostream>
using namespace std;

int main() {
	//���ڿ��� ���� �迭�� �̺�����
	char name1[6] = { 'G', 'r', 'a', 'c', 'e', '\0' }; //���ڿ� 6����Ʈ
	char name2[5] = { 'G', 'r', 'a', 'c', 'e' };       //���� �迭 5����Ʈ
	int i = 5;
	cout << sizeof(i) << endl; //byte�� �˷��ּ������ǹ���
	cout << "sizeof(name1): " << sizeof(name1) << endl;
	cout << "sizeof(name2): " << sizeof(name2) << endl;	
	cout << "sizeof(Grace): " << sizeof("Grace") << endl; //6����Ʈ�����ٳ�
	cout << "strlen(name1): " << strlen(name1) << endl; //���ڿ� ũ�⸦ byte�� �˷��ִ°� strlen, null���ڴ� ���� �˷���
	cout << "strlen(name2): " << strlen(name2) << endl; 
	//�ʷϻ� ���ἱ�� warning�� �ִ� ����, ���ڿ��� �Դٰ� ����, �����ּ� �ް� null���� ���ö����� ��� �а� �� ����(null���ڴ� ���� �� ��)�� �츮���� ��
	cout << "strlen(Grace): " << strlen("Grace") << endl;
	cout << name1 << endl; //char�����ͱ� ���ڿ��� �����ּҰ��ӳ� null���ڰ� ���ö����� �о����
	cout << name2 << endl; //char�����ͱ� ���ڿ��� �����ּҰ��ӳ� null���ڰ� ���ö����� �о����



	//�ּҸ� �Է¹޾� ����ϱ�   
	/*char address[100];
	cout << "�ּҸ� �Է��ϼ���: ";

	//cin >> address;
	cin.getline(address, 100, '\n');

	cout << "�Էµ� �ּҴ� " << address << " �Դϴ�." << endl;
	*/

	return 0;
}