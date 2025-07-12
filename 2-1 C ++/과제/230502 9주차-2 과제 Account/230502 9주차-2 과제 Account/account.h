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
	void checkBalance() const;  // Accessor(getter) // 호스트 객체를 변경하지 않게 const 한정자 추가(호스트 객체를 상수 개체로 만들어줌)
	void deposit(double amount); // Mutator(setter) 
	void withdraw(double amount);// Mutator(setter)  
private:
	static int base; // Static data member
public:
};

#endif