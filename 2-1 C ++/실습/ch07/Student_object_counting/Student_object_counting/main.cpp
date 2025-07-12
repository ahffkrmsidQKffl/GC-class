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

int Student::cnt = 0; // static ������ �ʱ�ȭ

Student::Student() {
	cout << "�Ű����� ���� ������" << endl;
	this->sNo = 0;
	this->name[0] = '\0';
	cnt++;
}
Student::Student(const char* name, int sNo) {
	cout << "�Ű����� �ִ� ������" << endl;
	this->sNo = sNo;
	strcpy_s(this->name, MAX, name);
	cnt++;
}
Student::Student(const Student& s) {
	cout << "���� ������" << endl;
	this->sNo = s.sNo;
	strcpy_s(this->name, MAX, s.name);
	cnt++;
}
Student::~Student() {
	cout << "�Ҹ���" << endl;
	cnt--;
}

void Student::PrintStdCount() {
	cout << "in PrincStdCount(), ���� Student ��ü �� = " << cnt << endl;
}
void func();

int main() {
	//cout << sizeof(Student) �𸣼�
	Student::PrintStdCount();
	Student s1("������", 123);
	Student::PrintStdCount();
	func();
	Student::PrintStdCount();
	Student s2("���Ը�", 12345);
	Student::PrintStdCount();

	return 0;
}
void func(){
	Student std1("Bill", 1234);
	Student std2("�ϸ޽�", 234);
	Student::PrintStdCount();
}