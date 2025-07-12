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
	virtual int GetPay()=0; //순수 가상 함수(pure virtual function)이 됨. 더 이상 객체를 만들 수 없음
	string GetName();
};

#endif