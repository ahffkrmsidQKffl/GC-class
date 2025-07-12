#include <iostream>
using namespace std;
const int MAX = 100;
// 1. 클래스 Student 정의
class Student {
private:
	char name[MAX]; // 이름(인스턴스 멤버 변수)
	int sNo; // 학번(인스턴스 멤버 변수)
public: 
	// 3 constructors, 1 destructor, getter, setter 선언
	Student();
	Student(const char* name_arg, int num); // pass by ptr라 변경 못하게 const
	Student(const Student& sobj); // pass by reference라 변경 못하게 const
	~Student();
	char* getName();
	void setName(const char* name_arg);
	int getSNo();
	void setSNo(int num);
};
// 2. 멤버 함수 정의
Student::Student() {
	cout << "매개변수 없는 생성자" << endl;
	this->sNo = 0;
	name[0] = '\0';
}
Student::Student(const char* name_arg, int num) {
	cout << "매개변수 있는 생성자" << endl;
	this->sNo = num;
	strcpy_s(this->name, MAX, name_arg);
}
Student::Student(const Student& sobj) { // s2가 sobj로 전달
	cout << "복사 생성자" << endl;
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
// 3. 애플리케이션 또는 클라이언트
void func(); // 객체를 생성
int main() {
	Student s1; // 매개변수 없는 생성자
	s1.setName("William");
	cout << "sizeof(Student): " << sizeof(Student) << endl;
	cout << "sizeof(s1): " << sizeof(s1) << endl;
	cout << "s1.getName(): " << s1.getName() << endl;
	Student s2("Jeffery", 123); // 매개변수 있는 생성자
	cout << "before func() call" << endl; // 여기까지 객체 2개 생성
	func();
	cout << "after func() call" << endl; // 현재 객체 3개(William, Jeffery, Grace)
	Student s3(s2); // 복사 생성자 // 여기까지 객체 4개 생성(William, Jeffery, Jeffery, Grace)
	return 0;
}
void func() {
	Student std1("Alpha", 342);
	std1.setName("Alpha Go");
	cout << "std1.getName(): " << std1.getName() << endl;
	Student std2("James", 214); // 여기까지 객체 4개 생성
	Student* sp = new Student("Grace", 584); // 여기까지 객체 5개 생성
}