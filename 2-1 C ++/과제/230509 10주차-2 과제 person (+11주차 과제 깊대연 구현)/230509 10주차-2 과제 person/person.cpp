#include <iostream>
#include "person.h"
using namespace std;

Person::Person() {
	this->name = new char[MAX];
	this->name[0] = NULL;
	this->phone = new char[MAX];
	this->phone[0] = NULL;
	this->age = 0;
	cout << "매개변수 없는 생성자" << endl;
	
}

Person::Person(const char* _name, const char* _phone, int _age) {
	this->name = new char[strlen(_name)+1]; //MAX가 아니라 strlen으로 했어야 했구나... sizeof는 32비트에서 무조건 4바이트 64비트에선 무조건 8바이트 나와서(포인터의 사이즈를 알려줘서) 안 되네
	strcpy_s(this->name, strlen(_name) + 1, _name);
	this->phone = new char[strlen(_phone) + 1];
	strcpy_s(this->phone, strlen(_phone) + 1, _phone);
	this->age = _age;
	cout << "매개변수 있는 생성자" << endl;
	
}

Person::Person(const Person& p) { // 새삼스럽지만 원래는 인스턴스.name, 인스턴스.phone은 안 됨(private이기 때문), 패스 바이 래퍼런스라서만 이렇게 가능한 것
	this->name = new char[strlen(p.name) + 1]; //MAX가 아니라 strlen으로 했어야 했구나... sizeof는 32비트에서 무조건 4바이트 64비트에선 무조건 8바이트 나와서(포인터의 사이즈를 알려줘서) 안 되네
	strcpy_s(this->name, strlen(p.name) + 1, p.name);
	this->phone = new char[strlen(p.phone) + 1];
	strcpy_s(this->phone, strlen(p.phone) + 1, p.phone);
	this->age = p.age;
	cout << "깊은 복사 생성자" << endl;
}

Person::~Person() {
	if (this->name) {
		delete[] this->name; this->name = NULL;
	}
	if (this->phone) {
		delete[] this->phone; this->phone = NULL;
	}
	cout << "소멸자 실행" << endl;
}

void Person::ShowData() {
	cout << "name : " << this->name << endl;
	cout << "phone : " << this->phone << endl;
	cout << "age : " << this->age << endl;
}

Person& Person::operator=(const Person& other) { // 이거 근데 딜리트 안 해도 되는 거...? 소멸자에서 소멸하겠구나
	if (this != &other) {
		delete[] this->name; this->name = NULL;
		this->name = new char[strlen(other.name)+1];
		strcpy_s(this->name, strlen(other.name) + 1, other.name);
		delete[] this->phone; this->phone = NULL;
		this->phone = new char[strlen(other.phone) + 1];
		strcpy_s(this->phone, strlen(other.phone) + 1, other.phone);
		this->age = other.age;
	}
	cout << "깊은 대입 연산자 오버로딩" << endl;
	return *this;
}