#include <iostream>
#include "account.h"
using namespace std;

Account::Account() {
	this->id = 0;
	this->balance = 0;
	this->name = new char[NAME_LEN];
	this->name[0] = NULL;
	cout << "�Ű����� ���� ������" << endl;

}

Account::Account(int id, int balance, const char* name) { //const �������� ���ڿ��� �ν��� �� �ϴ� �� ������...?
	this->id = id;
	this->balance = balance;
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name, strlen(name) + 1, name);
	cout << "�Ű����� �ִ� ������" << endl;
}

Account::Account(const Account& a) {
	this->id = a.id;
	this->balance = a.balance;
	this->name = new char[strlen(a.name) + 1];
	strcpy_s(this->name, strlen(a.name) + 1, a.name);
	cout << "���� ���� ������" << endl;
}

Account::~Account() {
	if (this->name) {
		delete[] this->name; this->name = NULL;
	}
	cout << "�Ҹ���" << endl;
}

Account& Account::operator=(const Account& a) { // ���� ���Կ����� �����ε�
	if (this != &a) {
	this->id = a.id;
	this->balance = a.balance;
	delete[] this->name; this->name = NULL;
	this->name = new char[strlen(a.name) + 1];
	strcpy_s(this->name, strlen(a.name) + 1, a.name);
	cout << "���� ���� ������ �����ε�" << endl;
	}
	return *this;
}

void Account::ShowAllData() const {
	cout << "id : " << this->id << endl;
	cout << "balance : " << this->balance << endl;
	cout << "name : " << this->name << endl;
}

int Account::InMoney(int val) { // balance�� val��ŭ �߰�(balance ����)
	this->balance = this->balance + val;
	cout << "id " << this->id << "�� " << val << "��ŭ �Ա��� �Ϸ�Ǿ� ���� " << this->balance << "��ŭ �ܰ� ���ҽ��ϴ�." << endl;
	return this->balance;
}  

bool Account::OutMoney(int val) { // balance�� val��ŭ ����(balance�� val��ŭ ��������)
	if (val > this->balance) {
		cout << "����Ϸ��� �ݾ��� ���� �ִ� �ݾ׺��� Ů�ϴ�." << endl;
		return false;
	}
	else {
		this->balance = this->balance - val;
		cout << "id " << this->id << "�� " << val << "��ŭ ����� �Ϸ�Ǿ� ���� " << this->balance << "��ŭ �ܰ� ���ҽ��ϴ�." << endl;
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
void Account::SetName(const char* name) { //const �������� ���ڿ��� �ν��� �� �ϴ� �� ������...?
	strcpy_s(this->name, strlen(name) + 1, name);
}