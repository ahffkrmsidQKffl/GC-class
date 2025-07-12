#include <iostream>
#include <cassert>
#include "date.h"
#include "person.h" 
using namespace std;

Person::Person() 
	:birthDate(1, 1, 2000)
{
	cout << "�Ű����� ���� ������" << endl;
	this->identity = 555555555;
}

// ������
Person::Person(long id, const Date& bd)
	: birthDate(bd)
{
	identity = id;
	assert(identity > 111111111 && identity < 999999999);
	cout << "�Ű����� �ִ� ������" << endl;
}

Person::Person(const Person& p) 
	: birthDate(p.birthDate)
{
	identity = p.identity;
	cout << "���� ������" << endl;
}

// �Ҹ���
Person :: ~Person()
{
	cout << "�Ҹ���" << endl;
}

void Person::print() const
{
	cout << "Person Identity: " << identity << endl;
	cout << "Person date of birth: ";

	birthDate.print();
	cout << endl << endl;
}
