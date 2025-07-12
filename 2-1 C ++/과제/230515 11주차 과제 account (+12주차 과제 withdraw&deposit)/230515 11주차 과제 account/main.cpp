#include <iostream>
#include "account.h"
using namespace std;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
void printMenu();
void makeAccount(Account* A, int& index, int size); // index 하나씩 늘려야돼서 패바렙
void deposit(Account* A, int index);
void withdraw(Account* A, int index);
void inquire(Account* A, int index);
void cleanUp(Account* A);


int main() {
	cout << "sizeof(Account): " << sizeof(Account) << endl;

	//사용자에게 몇개의 계좌를 만들지 물어본다.
	int size;
	cout << "몇 개의 계좌를 만드시겠습니까? ";
	cin >> size;

	//동적 객체 배열을 만든다
	Account* A = new Account[size];

	//while 루프 안에서 menu driven
	int index = 0;
	int choice;
	while (true) {
		printMenu();
		cout << "원하는 메뉴 번호를 입력하시오 : ";
		cin >> choice;
		switch (choice) {
		case MAKE:
			//cout << "계좌 개설" << endl;
			makeAccount(A, index, size);
			break;
		case DEPOSIT:
			//cout << "입금" << endl;
			deposit(A, index);
			break;
		case WITHDRAW:
			//cout << "출금" << endl;
			withdraw(A, index);
			break;
		case INQUIRE:
			//cout << "전체 조회" << endl;
			inquire(A, index);
			break;
		case EXIT:
			cout << "프로그램 종료" << endl;
			cleanUp(A);
			return 0;
		default:
			cout << "잘못 선택됨" << endl;
			break;
		}
	}
	//tip : 최대 사이즈와 인덱스를 항상 염두에 두어야 한다.

	return 0;
}

void printMenu() {
	cout << "------------MENU------------" << endl;
	cout << "1. 계좌 개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 전체 조회" << endl;
	cout << "5. 프로그램 종료" << endl;
}

//index와 size를 비교한다.
//index가 size보다 작다면 teller에게 id, balance, 이름을 입려받는다.
//setter 함수를 사용한다.
//index를 증가시킨다.
void makeAccount(Account* A, int& index, int size) {
	if (index < size) {
		int id, balance;
		char name[NAME_LEN];
		cout << "id, balance, 이름을 입력해보시오(id bal name): ";
		cin >> id >> balance >> name;
		A[index].SetId(id); (*(A + index)).SetBalance(balance); (A + index)->SetName(name);
		index++;
	}
	else
		cout << "최대" << size << "개의 계좌를 만들 수 있습니다." << endl;
		return;
}

//사용자에게 id와 입금액을 입력 받음
//id 존재 여부 확인
//id가 존재한다면 balance를 입금액만큼 증가시킨다
void deposit(Account* A, int index) {
	int id, balance;
	int find = 0;
	cout << "id와 입금액을 입력하세요(id 입금액): ";
	cin >> id >> balance;

	for (int i = 0; i < index; i++) {
		if (id == A[i].GetId()) {
			find = 1;
			A[i].InMoney(balance);
		}
	}

	if (find == 0) {
		cout << "그런 id는 존재하지 않습니다!" << endl;
	}

}

//사용자에게 id와 출금액을 입력 받음
//id 존재 여부 확인
//id가 존재한다면 balance를 출금액만큼 감소시킨다
//만약에 balance가 출금액보다 작다면 에러메시지 주고 돌아와야한담!
void withdraw(Account* A, int index) {
	int id, balance;
	int find = 0;
	cout << "id와 출금액을 입력하세요(id 출금액): ";
	cin >> id >> balance;

	for (int i = 0; i < index; i++) {
		if (id == A[i].GetId()) {
			if (A[i].GetBalance() < balance) {
				find = 1;
				cout << "출금하려는 금액이 남아 있는 금액보다 더 큽니다!" << endl;
			}
			else {
				find = 1;
				A[i].OutMoney(balance);
			}
		}
	}

	if (find == 0) {
		cout << "그런 id는 존재하지 않습니다!" << endl;
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

// 임의로 main에 맹글어봤던 것들
/*while (true) {
		int menuNum, accountNum, accountId;
		accountId = 0;

		printMenu();
		cout << "원하는 메뉴 번호를 입력하시오 : ";
		cin >> menuNum;
		cout << endl;
		if (menuNum == 1) {
			cout << "몇 개의 계좌를 개설하시겠습니까? ";
			cin >> accountNum;
			Account* ap = new Account[accountNum];
			for (int i = 0; i < accountNum; i++) {
				char name_temp[NAME_LEN];
				cout << i << "번째 계좌의 이름을 뭘로 설정하시겠습니까? ";
				cin >> name_temp;
				ap[accountId].SetName(name_temp);
				ap[accountId].SetId(accountId);
				accountId++;
			}
			cout << accountNum << "개의 계좌를 개설하였습니다." << endl;
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
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
	}*/ 