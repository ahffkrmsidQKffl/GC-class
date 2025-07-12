#ifndef TEMPORARY_H
#define TEMPORARY_H
#include "employee.h"

class Temporary : public Employee {
private:
	int hours;
	int hourlyWage;
public:
	Temporary();
	Temporary(string name, int hours, int hourlyWage);
	Temporary(Temporary& t);
	~Temporary();
	int GetPay(); //overriding
	string GetName();
};

#endif
