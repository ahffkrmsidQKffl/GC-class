#include <iostream>
#include <cassert>
#include "account.h"
using namespace std;

int main()
{
	// Creation of three accounts
	Account acc1(2000);
	Account acc2(5000);
	Account acc3(1000);

	// Transaction
	acc1.deposit(150);
	acc2.checkBalance();
	acc1.checkBalance();
	acc3.withdraw(800);
	acc1.withdraw(1000);
	acc2.deposit(120);
	return 0;

}