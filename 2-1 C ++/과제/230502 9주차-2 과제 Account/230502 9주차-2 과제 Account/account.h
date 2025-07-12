#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
	long accNumber;
	double balance;
public:
	Account(double balance); //Constructor
	~Account();              // Destructor
	void checkBalance() const;  // Accessor(getter) // ȣ��Ʈ ��ü�� �������� �ʰ� const ������ �߰�(ȣ��Ʈ ��ü�� ��� ��ü�� �������)
	void deposit(double amount); // Mutator(setter) 
	void withdraw(double amount);// Mutator(setter)  
private:
	static int base; // Static data member
public:
};

#endif