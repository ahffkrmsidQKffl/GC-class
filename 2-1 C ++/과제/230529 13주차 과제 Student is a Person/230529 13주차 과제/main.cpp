#include <iostream>
#include "student.h"
#include "person.h"
using namespace std;

int main()
{
	// Person 객체 인스턴스화하고 사용
	Person person0;
	Person person1(111111111);
	Person person2(person1);
	cout << "Person 객체의 정보: " << endl;
	person0.print();
	person1.print();
	person2.print();
	cout << endl;

	// Student 객체 인스턴스화하고 사용
	Student student0;
	Student student1(222222222, 3.9);
	Student student2(student1);
	cout << "Student 객체의 정보: " << endl;
	student0.print();
	student1.print();
	student2.print();
	cout << endl;
	return 0;
}