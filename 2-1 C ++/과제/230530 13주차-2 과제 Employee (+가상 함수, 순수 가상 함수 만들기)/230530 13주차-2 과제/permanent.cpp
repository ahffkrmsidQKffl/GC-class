#include <iostream>
#include "employee.h"
#include "permanent.h"

Permanent::Permanent()
	:Employee()
{
	this->salary = 0;
	cout << "Permanent con without par" << endl;
}

Permanent::Permanent(string name, int salary) 
	:Employee(name)
{
	this->salary = salary;
	cout << "Permanent con with par" << endl;
}

Permanent::Permanent(Permanent& p) 
	:Employee(p)
{
	this->salary = p.salary;
	cout << "Permanent copy con" << endl;
}

Permanent::~Permanent() {
	cout << "Permanent decon" << endl;
}

int Permanent::GetPay() {
	return salary;
}

string Permanent::GetName() {
	return name;
}