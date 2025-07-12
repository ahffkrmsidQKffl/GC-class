#include <iostream>
using namespace std;
// 1. Ŭ���� Student ����
const int MAX = 100;
class Student {
private : 
	char name[MAX]; // �̸�
	int sNo; // �й�

public : 
	// 3 constructors, 1 destructor, getter, setter ����
	Student();
	Student(const char* name_arg, int num); // pass by pointer�� ���� �� �ϰ�
	Student(const Student& s); // pass by reference�� ���� �� �ϰ�
	~Student();
	char* getName();
	int getSNo();
	void setName(const char* name_arg);
	void setSNo(int num);
};

// 2. ��� �Լ� ����
Student::Student() {
	cout << "�Ű����� ���� ������" << endl;
	sNo = 0;
	name[0] = '\0'
}

Student::Student(const char* name_arg, int num) {
	cout << "�Ű����� �ִ� ������" << endl;
	this->sNo = num;
	strcpy_s(this->name, MAX, name_arg);
} 

Student::Student(const Student& s) {
	cout << "���� ������" << endl;
	this->sNo = s.sNo;
	strcpy_s(this->name, MAX, s.name);
}

Student::~Student() {
	cout << "�Ҹ���" << endl;
}
char* Student::getName() {
	return this->name;
}
int Student::getSNo() {
	return this->sNo;
}


void Student::setName(const char* name_arg) {
	strcpy_s(this->name, MAX, name_arg);
}
void Student::setSNo(int num) {
	this->sNo=num;
}

// 3. ���ø����̼� �Ǵ� Ŭ���̾�Ʈ
void func();// ��ü�� ����
int main() {
	cout << "before func call" << endl;
	func();
	cout << "after func call" << endl;

	return 0;
}

void func() {
	Student std1("Alpha", 342);
	std1.setStudentName("Alpha Go");
	cout << "std1.getName(): " << std1.getName() << endl;
	Student std2("James", 214);
	Student* sp = new Student("Grace", 584);

}