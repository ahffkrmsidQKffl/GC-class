#include <iostream>
#include <string>
#include "Employee.h"
#include "Permanent.h"
#include "Temporary.h"
#include "SalesPerson.h"
using namespace std;
enum {PERMANENT = '1', TEMPORARY, SALESPERSON, PAYROLL, QUIT};
const int E_MAX = 10;
void ShowMenu();
void AddPermanent(Employee** A, int& index);
void AddTemporary(Employee** A, int& index);
void AddSalesPerson(Employee** A, int& index);
void CalcPay(Employee** A, int index);
void CleanUp(Employee** A, int index);
int main() {
	Employee* A[E_MAX];
	int index = 0;
	char choice;
	while (true) {
		ShowMenu();
		cout << "�Է�: ";
		cin >> choice;
		switch (choice) {
		case PERMANENT: 
			AddPermanent(A, index);
			break;
		case TEMPORARY:
			AddTemporary(A, index);
			break;
		case SALESPERSON:
			AddSalesPerson(A, index);
			break;
		case PAYROLL:
			CalcPay(A, index);
			break;
		case QUIT:
			CleanUp(A, index);
			break;
		default:
			cout << "�߸��� �޴��� �����ϼ̽��ϴ�." << endl;
			break;
		}
	}
	//Employee bObj("BOB");
	//cout << bObj.GetName() << endl;
	//cout << bObj.GetPay() << endl;
	//SalesPerson dObj("Kimberly", 2000000, 50000000);
	//cout << dObj.GetName() << endl;
	//cout << dObj.GetPay() << endl;
	//bObj = dObj; // ��ü�� ����ȯ
	//cout << bObj.GetName() << endl;
	//cout << bObj.GetPay() << endl;
	return 0;
}
void ShowMenu() {
	cout << "========== �޴� ==========" << endl;
	cout << "1. ���� �Է� [Permanent]" << endl;
	cout << "2. ���� �Է� [Temporary]" << endl;
	cout << "3. ���� �Է� [SalesPerson]" << endl;
	cout << "4. ��� ���� �� �޿� ����ϱ�" << endl;
	cout << "5. ����" << endl;
	cout << "==========================" << endl;
}
void AddPermanent(Employee** A, int& index) {
	string name;
	int sal;
	cout << "name: ";
	cin >> name;
	cout << "salary: ";
	cin >> sal;
	A[index] = new Permanent(name, sal); // bp = dp;
	index++;
}
void AddTemporary(Employee** A, int& index) {
	string name;
	int hours, hourlyWage;
	cout << "name: ";
	cin >> name;
	cout << "hours: ";
	cin >> hours;
	cout << "hourlyWage: ";
	cin >> hourlyWage;
	A[index] = new Temporary(name, hours, hourlyWage);
	index++;
}
void AddSalesPerson(Employee** A, int& index) {
	string name;
	int basePay, sr;
	cout << "name: ";
	cin >> name;
	cout << "basePay: ";
	cin >> basePay;
	cout << "salesRevenue: ";
	cin >> sr;
	A[index] = new SalesPerson(name, basePay, sr);
	index++;
}
void CalcPay(Employee** A, int index) {
	for (int i = 0; i < index; i++) {
		cout << A[i]->GetName() << endl;
		cout << A[i]->GetPay() << "��" << endl;
	}
}
void CleanUp(Employee** A, int index) {
	for (int i = 0; i < index; i++) {
		delete A[i]; A[i] = NULL;
	}
}