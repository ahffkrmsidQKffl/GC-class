#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char password[100];
    cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��Ͻʽÿ�." << endl;
    while (true) {
        cout << "��ȣ �Է�: ";
        cin.getline(password, 100, '\n');

        if (strcmp(password, "C ++") == 0) {
            cout << "password is correct. ���α׷��� ���� �����մϴ�." << endl;
            break;
        }
        else if (strcmp(password, "") == 0) {
            cout << "�Է�����. ���α׷��� ���� �����մϴ�." <<  endl;
            break;
        }
        else {
            cout << "�߸��� ��ȣ��." << endl;
        }
      
    }
}