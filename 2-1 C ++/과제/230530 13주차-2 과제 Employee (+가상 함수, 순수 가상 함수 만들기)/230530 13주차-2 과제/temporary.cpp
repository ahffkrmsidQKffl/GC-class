#include <iostream>
#include "employee.h"
#include "temporary.h"

Temporary::Temporary()
	:Employee()
{
	this->hours = 0; this->hourlyWage = 0;
	cout << "Temporary con without par" << endl;
}

Temporary::Temporary(string name, int hours, int hourlyWage)
	:Employee(name)
{
	this->hours = hours; this->hourlyWage = hourlyWage;
	cout << "Temporary con with par" << endl;
}

Temporary::Temporary(Temporary& t)
	:Employee(t) //객체간 형변환, bobj = dobj, e = t
{
	this->hours = t.hours; this->hourlyWage = t.hourlyWage;
	cout << "Temporary copy con" << endl;
}

Temporary::~Temporary() {
	cout << "Temporary decon" << endl;
}

int Temporary::GetPay() {
	return (hours*hourlyWage);
}

string Temporary::GetName() {
	return name;
}