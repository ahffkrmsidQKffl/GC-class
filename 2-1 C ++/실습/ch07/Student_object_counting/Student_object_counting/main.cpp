#include <iostream>
using namespace std;
const int MAX = 100;

class Student {
private:
	char name[MAX];
	int sNo;
public:
	Student();
	Student(const char* name, int sNo);
	Student(const Student& s);
	~Student();
	int getSNo();
	char* getName();
	void setSNo(int sNo);
	void setName(const char* name);
private:
	static int cnt;
public:
	static void PrintStdCount();
};

int Student::cnt = 0; // static 변수의 초기화

Student::Student() {
	cout << "매개변수 없는 생성자" << endl;
	this->sNo = 0;
	this->name[0] = '\0';
	cnt++;
}
Student::Student(const char* name, int sNo) {
	cout << "매개변수 있는 생성자" << endl;
	this->sNo = sNo;
	strcpy_s(this->name, MAX, name);
	cnt++;
}
Student::Student(const Student& s) {
	cout << "복사 생성자" << endl;
	this->sNo = s.sNo;
	strcpy_s(this->name, MAX, s.name);
	cnt++;
}
Student::~Student() {
	cout << "소멸자" << endl;
	cnt--;
}

void Student::PrintStdCount() {
	cout << "in PrincStdCount(), 현재 Student 객체 수 = " << cnt << endl;
}
void func();

int main() {
	//cout << sizeof(Student) 모르쇠
	Student::PrintStdCount();
	Student s1("제프리", 123);
	Student::PrintStdCount();
	func();
	Student::PrintStdCount();
	Student s2("갸규리", 12345);
	Student::PrintStdCount();

	return 0;
}
void func(){
	Student std1("Bill", 1234);
	Student std2("하메스", 234);
	Student::PrintStdCount();
}