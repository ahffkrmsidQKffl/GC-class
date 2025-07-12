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
const int ACC_MAX = 10; // 객체 포인터 배열은 하나당 4byte씩밖에 안 되므로 마구잡이로 잡아놔도 상관 x

int main()
{
    int size = ACC_MAX;

    //객체포인터 배열을 만든다
    Account* C[ACC_MAX]; //정적 배열의 크기는 반드시 리터럴 or const만 가능

    //while 루프 안에서 menu driven
    int index = 0;
    int choice;
    while (true) {
        printMenu();
        cout << "선택 : ";
        cin >> choice;
        switch (choice) {
        case MAKE:
            //cout << "계좌 개설" << endl;
            makeAccount(C, index, size);
            break;
        case DEPOSIT:
            //cout << "입금" << endl;
            deposit(C, index);
            break;
        case WITHDRAW:
            //cout << "출금" << endl;
            withdraw(C, index);
            break;
        case INQUIRE:
            //cout << "전체조회" << endl;
            inquire(C, index);
            break;
        case EXIT:
            cout << "프로그램 종료" << endl;
            cleanUp(C, index); //만약 계좌를 폐쇄하고 싶다면 index를 passbyreference로 줘야겠지?
            return 0;
        default:
            cout << "잘못 선택됨" << endl;
            break;
        }
    }
    return 0;
}
void printMenu() {
    cout << "--------MENU---------" << endl;
    cout << "1. 계좌 개설" << endl;
    cout << "2. 입금" << endl;
    cout << "3. 출금" << endl;
    cout << "4. 전체조회" << endl;
    cout << "5. 프로그램 종료" << endl;
}
// index와 size를 비교한다.
// index가 size보다 작다면 teller에게 id, balance, 이름을 입력받는다.
// setter 함수를 사용한다.
// index를 증가시킨다.
void makeAccount(Account** C, int& index, int size)
{
    int id, bal;
    char name[NAME_LEN];
    if (index < size) {
        cout << endl;
        cout << "계좌개설을 위한 입력(계좌ID 잔액 이름) : ";
        cin >> id >> bal >> name;
        C[index] = new Account(id, bal, name);

        //힙에 메모리를 확보하고 setters 부르기
        /*C[index] = new Account;
        C[index]->SetId(id);
        (*(C + index))->SetBalance(bal);
        (**(C + index)).SetName(name);*/
        index++;
        cout << endl;
    }
    else
    {
        cout << "최대 " << size << "개의 계좌를 만들 수 있음" << endl;
    }
}
// 사용자에게 id와 입금액을 입력 받는다.
// id의 존재여부를 확인한다.
// id가 존재한다면 balance를 입금액만큼 증가한다.
void deposit(Account** C, int index)
{
    int m, id, bal;
    cout << "계좌ID: ";
    cin >> id;
    cout << "입금액:";
    cin >> m;
    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (C[i]->GetId() == id)
        {
            cout << "입금전 잔고: " << C[i]->GetBalance() << endl;
            bal = (*(C + i))->InMoney(m);
            cout << "입금후 잔고: " << bal << endl;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "존재하지 않는 id입니다." << endl;
    }
}
// 사용자에게 id와 출금액을 입력 받는다.
// id의 존재여부를 확인한다.
// 출금액과 balance를 비교한다.
// id가 존재한다면 balance를 출금액만큼 감소한다.
void withdraw(Account** C, int index)
{
    int m, id, bal;
    cout << "계좌ID: ";
    cin >> id;
    cout << "출금액:";
    cin >> m;
    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (C[i]->GetId() == id)
        {
            cout << "출금전 잔고: " << (*(C + i))->GetBalance() << endl;
            if (C[i]->OutMoney(m) == true) {
                cout << "출금후 잔고: " << (**(C + i)).GetBalance() << endl;
            }
            else {
                cout << "잔액부족" << endl;
            }
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "존재하지 않는 id입니다." << endl << endl;
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