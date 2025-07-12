#ifndef PERMANENT_H
#define PERMANENT_H
#include "employee.h"

class Permanent : public Employee{
private :
	int salary;
public :
	Permanent();
	Permanent(string name, int salary);
	Permanent(Permanent& p);
	~Permanent();
	int GetPay();
	string GetName();
};

#endif
