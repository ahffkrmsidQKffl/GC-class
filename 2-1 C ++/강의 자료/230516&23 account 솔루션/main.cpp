#include <iostream>
using namespace std;
#include "Account.h"
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
void printMenu();
void makeAccount(Account* A, int& index, int size);
void deposit(Account* A, int index);
void withdraw(Account* A, int index);
void inquire(Account* A, int index);
void cleanUp(Account* A);

int main()
{
    cout << "sizeof(Account): " << sizeof(Account) << endl;
    //����ڿ��� ��� ���¸� ������ �����.
    int size;
    cout << "�� ���� ����? ";
    cin >> size;
    //������ü�迭�� �����.
    Account* A = new Account[size];
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
            makeAccount(A, index, size);
            break;
        case DEPOSIT:
            //cout << "�Ա�" << endl;
            deposit(A, index);
            break;
        case WITHDRAW:
            //cout << "���" << endl;
            withdraw(A, index);
            break;
        case INQUIRE:
            //cout << "��ü��ȸ" << endl;
            inquire(A, index);
            break;
        case EXIT:
            cout << "���α׷� ����" << endl;
            cleanUp(A);
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
void makeAccount(Account* A, int& index, int size)
{
    int id, bal;
    char name[NAME_LEN];
    if (index < size) {
        cout << endl;
        cout << "���°����� ���� �Է�(����ID �ܾ� �̸�) : ";
        cin >> id >> bal >> name;
        A[index].SetId(id);
        (A + index)->SetBalance(bal); // A�� ���� ���� ����, A + index�� ���� A�� + (sizeof(Account) * index)
        (*(A + index)).SetName(name);
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
void deposit(Account* A, int index)
{
    int m, id, bal;
    cout << "����ID: ";
    cin >> id;
    cout << "�Աݾ�:";
    cin >> m;
    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (A[i].GetId() == id)
        {
            cout << "�Ա��� �ܰ�: " << A[i].GetBalance() << endl;
            bal = (A + i)->InMoney(m);
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
void withdraw(Account* A, int index)
{
    int m, id, bal;
    cout << "����ID: ";
    cin >> id;
    cout << "��ݾ�:";
    cin >> m;
    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (A[i].GetId() == id)
        {
            cout << "����� �ܰ�: " << (A + i)->GetBalance() << endl;
            if (A[i].OutMoney(m) == true) {
                cout << "����� �ܰ�: " << (*(A + i)).GetBalance() << endl;
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
void inquire(Account* A, int index) {
    for (int i = 0; i < index; i++) {
        (A + i)->ShowAllData();
    }
}
void cleanUp(Account* A) {
    delete[] A; A = NULL;
}