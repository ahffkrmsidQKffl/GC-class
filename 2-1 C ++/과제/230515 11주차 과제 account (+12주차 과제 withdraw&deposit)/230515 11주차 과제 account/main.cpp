#include <iostream>
#include "account.h"
using namespace std;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
void printMenu();
void makeAccount(Account* A, int& index, int size); // index �ϳ��� �÷��ߵż� �йٷ�
void deposit(Account* A, int index);
void withdraw(Account* A, int index);
void inquire(Account* A, int index);
void cleanUp(Account* A);


int main() {
	cout << "sizeof(Account): " << sizeof(Account) << endl;

	//����ڿ��� ��� ���¸� ������ �����.
	int size;
	cout << "�� ���� ���¸� ����ðڽ��ϱ�? ";
	cin >> size;

	//���� ��ü �迭�� �����
	Account* A = new Account[size];

	//while ���� �ȿ��� menu driven
	int index = 0;
	int choice;
	while (true) {
		printMenu();
		cout << "���ϴ� �޴� ��ȣ�� �Է��Ͻÿ� : ";
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
			//cout << "��ü ��ȸ" << endl;
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
	//tip : �ִ� ������� �ε����� �׻� ���ο� �ξ�� �Ѵ�.

	return 0;
}

void printMenu() {
	cout << "------------MENU------------" << endl;
	cout << "1. ���� ����" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. ��ü ��ȸ" << endl;
	cout << "5. ���α׷� ����" << endl;
}

//index�� size�� ���Ѵ�.
//index�� size���� �۴ٸ� teller���� id, balance, �̸��� �Է��޴´�.
//setter �Լ��� ����Ѵ�.
//index�� ������Ų��.
void makeAccount(Account* A, int& index, int size) {
	if (index < size) {
		int id, balance;
		char name[NAME_LEN];
		cout << "id, balance, �̸��� �Է��غ��ÿ�(id bal name): ";
		cin >> id >> balance >> name;
		A[index].SetId(id); (*(A + index)).SetBalance(balance); (A + index)->SetName(name);
		index++;
	}
	else
		cout << "�ִ�" << size << "���� ���¸� ���� �� �ֽ��ϴ�." << endl;
		return;
}

//����ڿ��� id�� �Աݾ��� �Է� ����
//id ���� ���� Ȯ��
//id�� �����Ѵٸ� balance�� �Աݾ׸�ŭ ������Ų��
void deposit(Account* A, int index) {
	int id, balance;
	int find = 0;
	cout << "id�� �Աݾ��� �Է��ϼ���(id �Աݾ�): ";
	cin >> id >> balance;

	for (int i = 0; i < index; i++) {
		if (id == A[i].GetId()) {
			find = 1;
			A[i].InMoney(balance);
		}
	}

	if (find == 0) {
		cout << "�׷� id�� �������� �ʽ��ϴ�!" << endl;
	}

}

//����ڿ��� id�� ��ݾ��� �Է� ����
//id ���� ���� Ȯ��
//id�� �����Ѵٸ� balance�� ��ݾ׸�ŭ ���ҽ�Ų��
//���࿡ balance�� ��ݾ׺��� �۴ٸ� �����޽��� �ְ� ���ƿ;��Ѵ�!
void withdraw(Account* A, int index) {
	int id, balance;
	int find = 0;
	cout << "id�� ��ݾ��� �Է��ϼ���(id ��ݾ�): ";
	cin >> id >> balance;

	for (int i = 0; i < index; i++) {
		if (id == A[i].GetId()) {
			if (A[i].GetBalance() < balance) {
				find = 1;
				cout << "����Ϸ��� �ݾ��� ���� �ִ� �ݾ׺��� �� Ů�ϴ�!" << endl;
			}
			else {
				find = 1;
				A[i].OutMoney(balance);
			}
		}
	}

	if (find == 0) {
		cout << "�׷� id�� �������� �ʽ��ϴ�!" << endl;
	}
}

void inquire(Account* A, int index) {
	for (int i = 0; i < index; i++) {
		A[i].ShowAllData();
	}
}

void cleanUp(Account* A) {
	delete[] A; A = NULL;
}

// ���Ƿ� main�� �ͱ۾�ô� �͵�
/*while (true) {
		int menuNum, accountNum, accountId;
		accountId = 0;

		printMenu();
		cout << "���ϴ� �޴� ��ȣ�� �Է��Ͻÿ� : ";
		cin >> menuNum;
		cout << endl;
		if (menuNum == 1) {
			cout << "�� ���� ���¸� �����Ͻðڽ��ϱ�? ";
			cin >> accountNum;
			Account* ap = new Account[accountNum];
			for (int i = 0; i < accountNum; i++) {
				char name_temp[NAME_LEN];
				cout << i << "��° ������ �̸��� ���� �����Ͻðڽ��ϱ�? ";
				cin >> name_temp;
				ap[accountId].SetName(name_temp);
				ap[accountId].SetId(accountId);
				accountId++;
			}
			cout << accountNum << "���� ���¸� �����Ͽ����ϴ�." << endl;
			cout << endl;
		}
		else if (menuNum == 4) {
			for (int i = 0; i < accountId; i++) {
				ap[i].ShowAllData();
				cout << endl;
			}
			cout << endl;
		}
		else if (menuNum == 5) {
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
	}*/ 