#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std; // string class�� std��� namespace�� ���ԵǹǷ�
class Employee {
protected:
	string name; // std::string name;
public:
	Employee(); 
	Employee(string _name);
	Employee(const Employee& e); // bObj = dObj, e = t
	~Employee();
	string GetName(); 
	virtual int GetPay(); // �����Լ��� �Ǹ鼭 Base�� overriding �Լ��� ���簨�� �����
};
#endif