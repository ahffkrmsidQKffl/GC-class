#include <iostream>
using namespace std;
// 1. 클래스 Student 정의
const int MAX = 100;
class Student {
private : 
	char name[MAX]; // 이름
	int sNo; // 학번

public : 
	// 3 constructors, 1 destructor, getter, setter 선언
	Student();
	Student(const char* name_arg, int num); // pass by pointer라 변경 못 하게
	Student(const Student& s); // pass by reference라 변경 못 하게
	~Student();
	char* getName();
	int getSNo();
	void setName(const char* name_arg);
	void setSNo(int num);
};

// 2. 멤버 함수 정의
Student::Student() {
	cout << "매개변수 없는 생성자" << endl;
	sNo = 0;
	name[0] = '\0'
}

Student::Student(const char* name_arg, int num) {
	cout << "매개변수 있는 생성자" << endl;
	this->sNo = num;
	strcpy_s(this->name, MAX, name_arg);
} 

Student::Student(const Student& s) {
	cout << "복사 생성자" << endl;
	this->sNo = s.sNo;
	strcpy_s(this->name, MAX, s.name);
}

Student::~Student() {
	cout << "소멸자" << endl;
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

// 3. 애플리케이션 또는 클라이언트
void func();// 객체를 생성
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