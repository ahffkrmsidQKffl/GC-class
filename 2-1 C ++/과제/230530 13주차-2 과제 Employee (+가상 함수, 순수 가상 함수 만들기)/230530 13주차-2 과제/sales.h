#ifndef SALES_H
#define SALES_H
#include "employee.h"

class Sales : public Employee {
private:
	int basePay;
	int salesRevenue;
public:
	Sales();
	Sales(string name, int basePay, int salesRevenue);
	Sales(Sales& s);
	~Sales();
	int GetPay();
	string GetName();
};

#endif
