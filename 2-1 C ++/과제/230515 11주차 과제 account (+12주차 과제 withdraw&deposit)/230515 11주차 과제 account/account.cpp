#include <iostream>
#include "account.h"
using namespace std;

Account::Account() {
	this->id = 0;
	this->balance = 0;
	this->name = new char[NAME_LEN];
	this->name[0] = NULL;
	cout << "매개변수 없는 생성자" << endl;

}

Account::Account(int id, int balance, const char* name) { //const 빼먹으면 문자열로 인식을 안 하는 거 같은데...?
	this->id = id;
	this->balance = balance;
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name, strlen(name) + 1, name);
	cout << "매개변수 있는 생성자" << endl;
}

Account::Account(const Account& a) {
	this->id = a.id;
	this->balance = a.balance;
	this->name = new char[strlen(a.name) + 1];
	strcpy_s(this->name, strlen(a.name) + 1, a.name);
	cout << "깊은 복사 생성자" << endl;
}

Account::~Account() {
	if (this->name) {
		delete[] this->name; this->name = NULL;
	}
	cout << "소멸자" << endl;
}

Account& Account::operator=(const Account& a) { // 깊은 대입연산자 오버로딩
	if (this != &a) {
	this->id = a.id;
	this->balance = a.balance;
	delete[] this->name; this->name = NULL;
	this->name = new char[strlen(a.name) + 1];
	strcpy_s(this->name, strlen(a.name) + 1, a.name);
	cout << "깊은 대입 연산자 오버로딩" << endl;
	}
	return *this;
}

void Account::ShowAllData() const {
	cout << "id : " << this->id << endl;
	cout << "balance : " << this->balance << endl;
	cout << "name : " << this->name << endl;
}

int Account::InMoney(int val) { // balance에 val만큼 추가(balance 리턴)
	this->balance = this->balance + val;
	cout << "id " << this->id << "에 " << val << "만큼 입금이 완료되어 현재 " << this->balance << "만큼 잔고가 남았습니다." << endl;
	return this->balance;
}  

bool Account::OutMoney(int val) { // balance에 val만큼 감소(balance에 val만큼 없을수도)
	if (val > this->balance) {
		cout << "출금하려는 금액이 남아 있는 금액보다 큽니다." << endl;
		return false;
	}
	else {
		this->balance = this->balance - val;
		cout << "id " << this->id << "에 " << val << "만큼 출금이 완료되어 현재 " << this->balance << "만큼 잔고가 남았습니다." << endl;
		return true;
	}
}

int Account::GetId()const {
	return this->id;
}
int Account::GetBalance() const {
	return this->balance;
}
char* Account::GetName() const {
	return this->name;
}
void Account::SetId(int val) {
	this->id = val;
}
void Account::SetBalance(int val) {
	this->balance = val;
}
void Account::SetName(const char* name) { //const 빼먹으면 문자열로 인식을 안 하는 거 같은데...?
	strcpy_s(this->name, strlen(name) + 1, name);
}