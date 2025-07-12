#include <iostream>
using namespace std;
const int MAX = 100;
// 1. Ŭ���� Student ����
class Student {
private:
	char name[MAX]; // �̸�(�ν��Ͻ� ��� ����)
	int sNo; // �й�(�ν��Ͻ� ��� ����)
public: 
	// 3 constructors, 1 destructor, getter, setter ����
	Student();
	Student(const char* name_arg, int num); // pass by ptr�� ���� ���ϰ� const
	Student(const Student& sobj); // pass by reference�� ���� ���ϰ� const
	~Student();
	char* getName();
	void setName(const char* name_arg);
	int getSNo();
	void setSNo(int num);
};
// 2. ��� �Լ� ����
Student::Student() {
	cout << "�Ű����� ���� ������" << endl;
	this->sNo = 0;
	name[0] = '\0';
}
Student::Student(const char* name_arg, int num) {
	cout << "�Ű����� �ִ� ������" << endl;
	this->sNo = num;
	strcpy_s(this->name, MAX, name_arg);
}
Student::Student(const Student& sobj) { // s2�� sobj�� ����
	cout << "���� ������" << endl;
	this->sNo = sobj.sNo; 
	strcpy_s(this->name, MAX, sobj.name);
}
Student::~Student() {
	cout << "destructor" << endl;
}
char* Student::getName() {
	return this->name;
}
void Student::setName(const char* name_arg) {
	strcpy_s(this->name, MAX, name_arg);
}
int Student::getSNo() {
	return this->sNo;
}
void Student::setSNo(int num) {
	this->sNo = num;
}
// 3. ���ø����̼� �Ǵ� Ŭ���̾�Ʈ
void func(); // ��ü�� ����
int main() {
	Student s1; // �Ű����� ���� ������
	s1.setName("William");
	cout << "sizeof(Student): " << sizeof(Student) << endl;
	cout << "sizeof(s1): " << sizeof(s1) << endl;
	cout << "s1.getName(): " << s1.getName() << endl;
	Student s2("Jeffery", 123); // �Ű����� �ִ� ������
	cout << "before func() call" << endl; // ������� ��ü 2�� ����
	func();
	cout << "after func() call" << endl; // ���� ��ü 3��(William, Jeffery, Grace)
	Student s3(s2); // ���� ������ // ������� ��ü 4�� ����(William, Jeffery, Jeffery, Grace)
	return 0;
}
void func() {
	Student std1("Alpha", 342);
	std1.setName("Alpha Go");
	cout << "std1.getName(): " << std1.getName() << endl;
	Student std2("James", 214); // ������� ��ü 4�� ����
	Student* sp = new Student("Grace", 584); // ������� ��ü 5�� ����
}