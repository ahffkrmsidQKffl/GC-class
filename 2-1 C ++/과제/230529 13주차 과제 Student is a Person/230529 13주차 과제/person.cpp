#include <iostream>
#include "person.h"
using namespace std;

Person::Person() {
	identity = 0;
	cout << "con without par in Person" << endl;
}

Person::Person(long identity) {
	this->identity = identity;
	cout << "con with par in Person" << endl;
}

Person::Person(const Person& person) {
	this->identity = person.identity;
	cout << "copy con in Person" << endl;
}

Person::~Person() {
	cout << "decon in Person" << endl;
}

void Person::print() const {
	cout << "identity : " << identity << endl;
}