#ifndef ACCOUNT_H
#define ACCOUNT_H

const int NAME_LEN = 20;
class Account
{
private:
	int id;
	int balance;
	char* name; // rule of 3 ����

public:
	Account();
	Account(int id, int balance, const char* name);
	Account(const Account& a);
	~Account();
	Account& operator=(const Account& a); // ���� ���Կ����� �����ε�
	void ShowAllData() const; // ID = Name = ������
	int InMoney(int val); // balance�� val��ŭ �߰�(balance ����)
	bool OutMoney(int val); // balance�� val��ŭ ����(balance�� val��ŭ ��������)
	int GetId()const;
	int GetBalance() const;
	char* GetName() const;
	void SetId(int val);
	void SetBalance(int val);
	void SetName(const char* name);
};
#endif