#include <iostream>
#include "employee.h"
#include "sales.h"

Sales::Sales()
	:Employee()
{
	this->basePay = 0; this->salesRevenue = 0;
	cout << "Sales con without par" << endl;
}

Sales::Sales(string name, int basePay, int salesRevenue)
	:Employee(name)
{
	this->basePay = basePay; this->salesRevenue = salesRevenue;
	cout << "Sales con with par" << endl;
}

Sales::Sales(Sales& s)
	:Employee(s)
{
	this->basePay = s.basePay; this->salesRevenue = s.salesRevenue;
	cout << "Sales copy con" << endl;
}

Sales::~Sales() {
	cout << "Sales decon" << endl;
}

int Sales::GetPay() {
	return basePay + ((double)salesRevenue*0.15);
}

string Sales::GetName() {
	return name;
}