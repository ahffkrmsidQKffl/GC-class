#include <iostream>
using namespace std;

int main() {

	char password[101];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while (true) {
		cout << "��ȣ: ";
		cin.getline(password, 100);
		if (strcmp(password, "C ++") == 0) {
			cout << "passsword is correct. ���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else if (strcmp(password, "\0") == 0) { // "", "\0"�� �� ����, NULL�� �ȵ�
			cout << "�Է�����. ���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
	}
	return 0;
}