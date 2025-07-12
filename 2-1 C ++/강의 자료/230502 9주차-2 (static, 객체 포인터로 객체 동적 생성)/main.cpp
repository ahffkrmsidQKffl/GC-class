#include <iostream>
using namespace std;
const int MAX = 100;
class Student {
private:
	char name[MAX];
	int sNo;
public:
	// 생성자, 소멸자, 겟터, 셋터
	Student();
	Student(const char* name, int sNo);
	Student(const Student& s);
	~Student();
	// 겟터와 셋터 작성하기
private:
	static int cnt;
public:
	static void PrintStdCount();
};
int Student::cnt = 0; // static 변수 초기화
void Student::PrintStdCount() {
	cout << "In PrintStdCount() Student 객체 수 = " << cnt << endl;
}
Student::Student() {
	cout << "con without parameter" << endl;
	sNo = 0;
	name[0] = '\0';
	cnt++;
}
Student::Student(const char* name, int sNo) {
	cout << "con with parameter" << endl;
	strcpy_s(this->name, MAX, name);
	this->sNo = sNo;
	cnt++;
}
Student::Student(const Student& s) {
	cout << "copy con" << endl;
	strcpy_s(this->name, MAX, s.name);
	this->sNo = s.sNo;
	cnt++;
}
Student::~Student() {
	cout << "decon" << endl;
	cnt--;
}
// 애플리케이션
void func();
int main() {
	cout << "sizeof(Student): " << sizeof(Student) << endl;
	Student::PrintStdCount();
	Student s1("Jeffrey", 123);
	Student::PrintStdCount();
	func();
	Student::PrintStdCount();
	Student s2("Heffrey", 777);
	Student::PrintStdCount();
	return 0;
}
void func() {
	Student std1("Bill", 342);
	Student std2("JAMES", 504);
	Student::PrintStdCount();
}