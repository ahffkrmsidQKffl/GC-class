#include <iostream>
#include <string>
using namespace std;
int main() {
	string strg1;
	cout << "���ڿ��� �Է��ϼ���: ";
	cin >> strg1;
	cout << "�Էµ� ���ڿ���: " << strg1 << endl;
	// input buffer clear
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "�� ���� �Է��ϼ���: ";
	getline(cin, strg1);
	cout << "�Էµ� ���� ���ڿ���: " << strg1 << endl;
	// �� �� �Է¹޾� ����ϱ� until enter only
	while (true) {
		cout << "���� �� �� �Է�: ";
		getline(cin, strg1);
		if (strg1.empty() == true) {
			cout << "���� �� �� �Է� ����" << endl;
			break;
		}
		cout << "�Էµ� �� ��: " << strg1 << endl;
	}
	return 0;
}