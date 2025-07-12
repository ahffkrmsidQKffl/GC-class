#include <iostream>
#include "person.h"
#include "student.h"
using namespace std;

Student::Student() 
:Person()
{
	gpa = 0;
	cout << "con without par in Student" << endl;
}

Student::Student(long identity, double gpa) 
:Person(identity)
{
	this->gpa = gpa;
	cout << "con with par in Student" << endl;
}

Student::Student(const Student& student) 
	:Person(student)
{
	this->gpa = student.gpa;
	cout << "copy con in Student" << endl;
}

Student::~Student() {
	cout << "decon in Student" << endl;
}

void Student::print() const {
	Person::print();
	cout << "gpa: " << gpa << endl;
}