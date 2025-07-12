#include <iostream>
#include <cassert>
#include "account.h"
using namespace std;

int Account::base = 0; // Initialization of static data member

// Parameter Constructor
Account::Account(double balance) 
	:balance(balance) // 초기화 리스트 (this->balance = balance;)
{
	if (balance < 0.0) {
		cout << "Balance is negative; program terminates";
		assert(false);
	}
	base++;
	this->accNumber = 100000 + base;
	cout << "Account " << this->accNumber << " is opened. " << endl;
	cout << "Balance $" << this->balance << endl << endl;
}

// Destructor
Account :: ~Account()
{
	cout << "Account #: " << this->accNumber << " is closed." << endl;
	cout << "$" << this->balance << " was sent to the customer." << endl << endl;
}

// Accessor
void Account::checkBalance() const
{
	cout << "Account #: " << this->accNumber << endl;
	cout << "Transaction: balance check" << endl;
	cout << "Balance: $" << this->balance << endl << endl;
}

// Mutator
void Account::deposit(double amount)
{
	if (amount > 0.0)
	{
		this->balance += amount;
		cout << "Account #: " << this->accNumber << endl;
		cout << "Transaction: deposit of $" << amount << endl;
		cout << "New balance: $" << this->balance << endl << endl;
	}
	else
	{
		cout << "Transaction aborted." << endl;
	}
}

// Mutator
void Account::withdraw(double amount)
{
	if (amount > this->balance)
	{
		amount = this->balance;
	}
	this->balance = this->balance - amount;
	cout << "Account #: " << this->accNumber << endl;
	cout << "Transaction: withdraw of $" << amount << endl;
	cout << "New balance: $" << this->balance << endl << endl;
}
