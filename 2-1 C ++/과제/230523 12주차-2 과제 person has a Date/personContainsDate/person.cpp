#include <iostream>
#include <cassert>
#include "date.h"
#include "person.h" 
using namespace std;

Person::Person() 
	:birthDate(1, 1, 2000)
{
	cout << "매개변수 없는 생성자" << endl;
	this->identity = 555555555;
}

// 생성자
Person::Person(long id, const Date& bd)
	: birthDate(bd)
{
	identity = id;
	assert(identity > 111111111 && identity < 999999999);
	cout << "매개변수 있는 생성자" << endl;
}

Person::Person(const Person& p) 
	: birthDate(p.birthDate)
{
	identity = p.identity;
	cout << "복사 생성자" << endl;
}

// 소멸자
Person :: ~Person()
{
	cout << "소멸자" << endl;
}

void Person::print() const
{
	cout << "Person Identity: " << identity << endl;
	cout << "Person date of birth: ";

	birthDate.print();
	cout << endl << endl;
}
