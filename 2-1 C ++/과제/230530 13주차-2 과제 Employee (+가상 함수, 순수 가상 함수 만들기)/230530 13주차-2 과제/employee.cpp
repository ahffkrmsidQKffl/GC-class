#include <iostream>
#include "employee.h"


Employee::Employee() {
	this->name[0] = '\0';
	cout << "Employee con without par" << endl;
}

Employee::Employee(string name) {
	this->name = name;
	cout << "Employee con with par" << endl;
}

Employee::Employee(Employee& e) {
	this->name = e.name;
	cout << "Employee copy con" << endl;
}

Employee::~Employee() {
	cout << "Employee decon" << endl;
}

//int Employee::GetPay() {
//	return 0;
//}

string Employee::GetName() {
	return name;
}