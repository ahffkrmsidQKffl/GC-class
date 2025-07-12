#include <iostream>
#include <cassert>
#include "date.h" 
using namespace std;

//�Ű����� ���� ������
Date::Date() {
	month = 1; day = 1; year = 2000;
	cout << "�Ű����� ���� ������" << endl; 

}

// �Ű������� �ִ� ������ 
Date::Date(int m, int d, int y) {
	month = m; day = d; year = y;
	if ((month < 1) || (month > 12))
	{
		cout << "Month is out of range. ";
		assert(false);
	}
	int daysInMonths[13] = { 0, 31, 28, 31, 30, 31, 30, 31,
	31, 30, 31, 30 ,31 };
	if ((day < 1) || (day > daysInMonths[month]))
	{
		cout << "Day out of range! ";
		assert(false);
	}
	if ((year < 1900) || (year > 2099))
	{
		cout << "Year out of range! ";
		assert(false);
	}
	cout << "�Ű����� �ִ� ������" << endl;
}

Date::Date(const Date& d) {
	month = d.month; day = d.day; year = d.year;
	cout << "���� ������" << endl;
}


// �Ҹ���
Date :: ~Date()
{
	cout << "�Ҹ���" << endl;
}

// print ��� �Լ�
void Date::print() const
{
	cout << month << "/" << day << "/" << year << endl;
}
