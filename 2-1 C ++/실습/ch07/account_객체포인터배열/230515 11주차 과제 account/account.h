#ifndef ACCOUNT_H
#define ACCOUNT_H

const int NAME_LEN = 20;
class Account
{
private:
	int id;
	int balance;
	char* name; // rule of 3 구현

public:
	Account();
	Account(int id, int balance, const char* name);
	Account(const Account& a);
	~Account();
	Account& operator=(const Account& a); // 깊은 대입연산자 오버로딩
	void ShowAllData() const; // ID = Name = 보여줌
	int InMoney(int val); // balance에 val만큼 추가(balance 리턴)
	bool OutMoney(int val); // balance에 val만큼 감소(balance에 val만큼 없을수도)
	int GetId()const;
	int GetBalance() const;
	char* GetName() const;
	void SetId(int val);
	void SetBalance(int val);
	void SetName(const char* name);
};
#endif