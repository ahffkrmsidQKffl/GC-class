#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee {
protected:
	string name;
public:
	Employee();
	Employee(string name);
	Employee(Employee& e);
	~Employee();
	virtual int GetPay()=0; //���� ���� �Լ�(pure virtual function)�� ��. �� �̻� ��ü�� ���� �� ����
	string GetName();
};

#endif