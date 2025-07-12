// ���� ���� �����ڶ� �ϸ�(��� �����Ϳ� ������ ������) �����ڿ��� ������ �� new�� ����ߵ�
#ifndef PERSON_H
#define PERSON_H

const int MAX = 100;
class Person {
private:
	char* name; 
	char* phone;
	int age; // ����

public:
	// 3 constructors, 1 destructor, getter, setter ����
	Person();
	Person(const char* _name, const char* _phone, int _age);
	Person(const Person& p);
	~Person();
	void ShowData();
	Person& operator=(const Person& other);
};

#endif