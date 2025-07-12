#include <iostream>
using namespace std;
#include "Account.h"
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
void printMenu();
void makeAccount(Account** C, int& index, int size);
void deposit(Account** C, int index);
void withdraw(Account** C, int index);
void inquire(Account** C, int index);
void cleanUp(Account** C, int index);
const int ACC_MAX = 10; // ��ü ������ �迭�� �ϳ��� 4byte���ۿ� �� �ǹǷ� �������̷� ��Ƴ��� ��� x

int main()
{
    int size = ACC_MAX;

    //��ü������ �迭�� �����
    Account* C[ACC_MAX]; //���� �迭�� ũ��� �ݵ�� ���ͷ� or const�� ����

    //while ���� �ȿ��� menu driven
    int index = 0;
    int choice;
    while (true) {
        printMenu();
        cout << "���� : ";
        cin >> choice;
        switch (choice) {
        case MAKE:
            //cout << "���� ����" << endl;
            makeAccount(C, index, size);
            break;
        case DEPOSIT:
            //cout << "�Ա�" << endl;
            deposit(C, index);
            break;
        case WITHDRAW:
            //cout << "���" << endl;
            withdraw(C, index);
            break;
        case INQUIRE:
            //cout << "��ü��ȸ" << endl;
            inquire(C, index);
            break;
        case EXIT:
            cout << "���α׷� ����" << endl;
            cleanUp(C, index); //���� ���¸� ����ϰ� �ʹٸ� index�� passbyreference�� ��߰���?
            return 0;
        default:
            cout << "�߸� ���õ�" << endl;
            break;
        }
    }
    return 0;
}
void printMenu() {
    cout << "--------MENU---------" << endl;
    cout << "1. ���� ����" << endl;
    cout << "2. �Ա�" << endl;
    cout << "3. ���" << endl;
    cout << "4. ��ü��ȸ" << endl;
    cout << "5. ���α׷� ����" << endl;
}
// index�� size�� ���Ѵ�.
// index�� size���� �۴ٸ� teller���� id, balance, �̸��� �Է¹޴´�.
// setter �Լ��� ����Ѵ�.
// index�� ������Ų��.
void makeAccount(Account** C, int& index, int size)
{
    int id, bal;
    char name[NAME_LEN];
    if (index < size) {
        cout << endl;
        cout << "���°����� ���� �Է�(����ID �ܾ� �̸�) : ";
        cin >> id >> bal >> name;
        C[index] = new Account(id, bal, name);

        //���� �޸𸮸� Ȯ���ϰ� setters �θ���
        /*C[index] = new Account;
        C[index]->SetId(id);
        (*(C + index))->SetBalance(bal);
        (**(C + index)).SetName(name);*/
        index++;
        cout << endl;
    }
    else
    {
        cout << "�ִ� " << size << "���� ���¸� ���� �� ����" << endl;
    }
}
// ����ڿ��� id�� �Աݾ��� �Է� �޴´�.
// id�� ���翩�θ� Ȯ���Ѵ�.
// id�� �����Ѵٸ� balance�� �Աݾ׸�ŭ �����Ѵ�.
void deposit(Account** C, int index)
{
    int m, id, bal;
    cout << "����ID: ";
    cin >> id;
    cout << "�Աݾ�:";
    cin >> m;
    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (C[i]->GetId() == id)
        {
            cout << "�Ա��� �ܰ�: " << C[i]->GetBalance() << endl;
            bal = (*(C + i))->InMoney(m);
            cout << "�Ա��� �ܰ�: " << bal << endl;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "�������� �ʴ� id�Դϴ�." << endl;
    }
}
// ����ڿ��� id�� ��ݾ��� �Է� �޴´�.
// id�� ���翩�θ� Ȯ���Ѵ�.
// ��ݾװ� balance�� ���Ѵ�.
// id�� �����Ѵٸ� balance�� ��ݾ׸�ŭ �����Ѵ�.
void withdraw(Account** C, int index)
{
    int m, id, bal;
    cout << "����ID: ";
    cin >> id;
    cout << "��ݾ�:";
    cin >> m;
    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (C[i]->GetId() == id)
        {
            cout << "����� �ܰ�: " << (*(C + i))->GetBalance() << endl;
            if (C[i]->OutMoney(m) == true) {
                cout << "����� �ܰ�: " << (**(C + i)).GetBalance() << endl;
            }
            else {
                cout << "�ܾ׺���" << endl;
            }
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "�������� �ʴ� id�Դϴ�." << endl << endl;
    }

}
void inquire(Account** C, int index) {
    for (int i = 0; i < index; i++) {
        (*(C + i))->ShowAllData();
        //C[i]->ShowAllData();
        //(**(C + i)).ShowAllData();
    }
}
void cleanUp(Account** C, int index) {
    for (int i = 0; i < index; i++) {
        delete C[i]; C[i] = NULL;
    }
}