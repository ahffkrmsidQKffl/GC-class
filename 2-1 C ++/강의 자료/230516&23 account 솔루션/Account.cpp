#include <iostream>
using namespace std;
#include "Account.h"

Account::Account()
{	cout << "���� ���� ������" << endl;
	id = 0;
	balance = 0;
	name = new char [NAME_LEN];
}
Account::Account(int id, int balance, char* name)
{
	cout << "���� �ִ� ������" << endl;
	this->id = id;
	this->balance = balance;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
Account::Account(const Account& a)
{
	cout << "���� ������" << endl;
	id = a.id;
	balance = a.balance;
	name = new char[strlen(a.name) + 1];
	strcpy_s(name, strlen(a.name) + 1, a.name);
}
int Account::GetId() const
{
	return id;
}
int Account::GetBalance() const
{
	return balance;
}
char* Account::GetName() const
{
	return name;
}
void Account::SetId(int val)
{
	id = val;
}
void Account::SetBalance(int val)
{
	balance = val;
}
void Account::SetName(char* name)
{
	if (this->name) {
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Account::ShowAllData() const
{
	cout << "����ID: " << id;
	cout << "  �ܾ�: " << balance;
	cout << "  �̸�: " << name << endl;
}
int Account::InMoney(int val)
{
	balance += val;
	return balance;
}
bool Account::OutMoney(int val)
{
	if(balance >= val) {
		balance -= val;
		return true;
	}
	else {
		return false;
	}
}
Account::~Account()
{
	cout << "�Ҹ���" << endl;
	delete [] name;
}
Account&  Account::operator=(const Account & a)
{
	if (this != &a)
	{
		delete [] name;
		name = new char[strlen(a.name) + 1];
		strcpy_s(name, strlen(a.name) + 1, a.name);
		id = a.id;
		balance = a.balance;
	}
	return *this;
}