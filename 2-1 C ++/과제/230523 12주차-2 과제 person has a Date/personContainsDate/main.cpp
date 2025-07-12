#include <iostream>
#include <cassert>
#include "date.h"
#include "person.h" 
using namespace std;
int main()
{
	// 인스턴스화
	Date date1(5, 6, 1980);
	Person person1(111111456, date1);
	Date date2(4, 23, 1978);
	Person person2(345332446, date2);
	Date date3(date2);
	Person person3(124124121, date3);
	Person person4(person3);

	// 출력
	person1.print();
	person2.print();
	person3.print();
	person4.print();
	return 0;
}