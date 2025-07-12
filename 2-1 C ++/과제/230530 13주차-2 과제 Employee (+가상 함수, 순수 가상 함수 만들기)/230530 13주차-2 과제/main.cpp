#include <iostream>
#include "employee.h"
#include "permanent.h"
#include "temporary.h"
#include "sales.h"
enum {PERMANENT = '1', TEMPORARY, SALES, PAYROLL, QUIT };
const int E_MAX = 10;
void ShowMenu();
void AddPermanent(Employee** A, int& index);
void AddTemporary(Employee** A, int& index);
void AddSales(Employee** A, int& index);
void CalcPay(Employee** A, int index);
void CleanUp(Employee** A, int index);

int main() {
	Employee* A[E_MAX];
	int index = 0;
	char choice;
	while (true) {
		ShowMenu();
		cout << "메뉴 입력: ";
		cin >> choice;
		switch (choice) {
		case PERMANENT:
			AddPermanent(A, index);
			break;
		case TEMPORARY:
			AddTemporary(A, index);
			break;
		case SALES:
			AddSales(A, index);
			break;
		case PAYROLL:
			CalcPay(A, index);
			break;
		case QUIT :
			CleanUp(A, index);
			break;
		default:
			cout << "잘못된 메뉴를 선택하셨습니다." << endl;
			break;

		}
	}
	//Permanent p1; //이거 왜자꾸 p1()과 같이 해서 매개변수 없는 생성자 쓰면 밑에서 p1.멤버함수 요런 식으로 쓸 때 오류가 나지? name에 뭐가 들어간다고 생각하는 건가...?
	//Permanent p2("kim", 3000000);
	//Permanent p3(p2);
	//cout << "p1.Getpay(): " << p1.Getpay() << " p2.Getpay(): " << p2.Getpay() << " p3.Getpay(): " << p3.Getpay() << endl;
	//cout << endl;

	//Temporary t1; 
	//Temporary t2("Lee", 200, 15000);
	//Temporary t3(t2);
	//cout << "t1.Getpay(): " << t1.Getpay() << " t2.Getpay(): " << t2.Getpay() << " t3.Getpay(): " << t3.Getpay() << endl;
	//cout << endl;

	//Sales s1;
	//Sales s2("Park", 2000000, 10000000);
	//Sales s3(s2);
	//cout << "s1.Getpay(): " << s1.Getpay() << " s2.Getpay(): " << s2.Getpay() << " s3.Getpay(): " << s3.Getpay() << endl;
	//cout << endl;

	//Employee bObj("BOB");
	//cout << bObj.GetName() << endl;
	//cout << bObj.Getpay() << endl;
	//Sales dObj("Kimberly", 2000000, 50000000);
	//cout << dObj.GetName() << endl;
	//cout << dObj.Getpay() << endl;
	//bObj = dObj; //객체간 형변환
	//cout << bObj.GetName() << endl;
	//cout << bObj.Getpay() << endl;
	
	
	return 0;
}

void ShowMenu() {
	cout << "================ 메뉴 ================" << endl;
	cout << "1. 직원 입력 [Permanent]" << endl;
	cout << "2. 직원 입력 [Temporary]" << endl;
	cout << "3. 직원 입력 [Sales]" << endl;
	cout << "4. 모든 직원 월 급여 계산하기" << endl;
	cout << "5. 프로그램 종료 " << endl;
	
}

void AddPermanent(Employee** A, int& index) {
	string name;
	int sal;
	cout << "name: ";
	cin >> name;
	cout << "salary: ";
	cin >> sal;
	A[index] = new Permanent(name, sal);
	index++;
}

void AddTemporary(Employee** A, int& index) {
	string name;
	int hours, hourlywage;
	cout << "name: ";
	cin >> name;
	cout << "hours: ";
	cin >> hours;
	cout << "hourlywage: ";
	cin >> hourlywage;
	A[index] = new Temporary(name, hours, hourlywage); //bp = dp;
	index++;
}

void AddSales(Employee** A, int& index) {
	string name;
	int base, sr;
	cout << "name: ";
	cin >> name;
	cout << "base: ";
	cin >> base;
	cout << "sr: ";
	cin >> sr;
	A[index] = new Sales(name, base, sr);
	index++;
}

void CalcPay(Employee** A, int index) {
	for (int i = 0; i < index; i++) {
		cout << "A[i]->GetName(): "<< A[i]->GetName() << endl;
		cout << "A[i]->Getpay(): " << A[i]->GetPay() << endl;
	}
}

void CleanUp(Employee** A, int index) {
	for (int i = 0; i < index; i++) {
		delete A[i]; A[i] = NULL;
	}
}