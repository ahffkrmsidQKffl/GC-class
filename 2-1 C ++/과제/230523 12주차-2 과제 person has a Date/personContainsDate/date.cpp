#include <iostream>
#include <cassert>
#include "date.h" 
using namespace std;

//매개변수 없는 생성자
Date::Date() {
	month = 1; day = 1; year = 2000;
	cout << "매개변수 없는 생성자" << endl; 

}

// 매개변수가 있는 생성자 
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
	cout << "매개변수 있는 생성자" << endl;
}

Date::Date(const Date& d) {
	month = d.month; day = d.day; year = d.year;
	cout << "복사 생성자" << endl;
}


// 소멸자
Date :: ~Date()
{
	cout << "소멸자" << endl;
}

// print 멤버 함수
void Date::print() const
{
	cout << month << "/" << day << "/" << year << endl;
}
