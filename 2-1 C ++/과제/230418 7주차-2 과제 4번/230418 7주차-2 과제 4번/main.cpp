#include <iostream>
using namespace std;

// 1. 클래스 정의
const int MAX = 100;
class Person {
private:
	char name[MAX]; // 이름
	int age; // 나이

public:
	// 3 constructors, 1 destructor, getter, setter 선언
	Person();
	Person(const char* name, int age);
	Person(const Person& p); 
	~Person();
	char* getName();
	int getAge();
	void setName(const char* name);
	void setAge(int age);
};

// 2. 멤버 함수 정의
Person::Person() {
	cout << "매개변수 없는 생성자" << endl;
	age = 0;
	name[0] = '\0';
}

Person::Person(const char* name, int age) {
	cout << "매개변수 있는 생성자" << endl;
	this->age = age;
	strcpy_s(this->name, MAX, name);
}

Person::Person(const Person& p) {
	cout << "복사 생성자" << endl;
	this->age = p.age;
	strcpy_s(this->name, MAX, p.name);
}

Person::~Person() {
	cout << "소멸자" << endl;
}
char* Person::getName() {
	return this->name;
}
int Person::getAge() {
	return this->age;
}
void Person::setName(const char* name) {
	strcpy_s(this->name, MAX, name);
}
void Person::setAge(int age) {
	this->age = age;
}

// 3. 애플리케이션 또는 클라이언트
int main() {
	Person p1;
	Person p2("AmuGae", 30);
	Person p3(p2);

	cout << endl;
	cout << "p2.getName(): " << p2.getName() << endl;
	cout << "p2.getAge(): " << p2.getAge() << endl;
	cout << "p3.getName(): " << p3.getName() << endl;
	cout << "p3.getAge(): " << p3.getAge() << endl;
	cout << endl;


	p1.setName("Kim");
	p1.setAge(40);
	p2.setName("Lee");
	p2.setAge(50);
	p3.setName("Park");
	p3.setAge(60);

	cout << endl;
	cout << "after setting, p1.getName(): " << p1.getName() << endl;
	cout << "after setting, p1.getAge(): " << p1.getAge() << endl;
	cout << "after setting, p2.getName(): " << p2.getName() << endl;
	cout << "after setting, p2.getAge(): " << p2.getAge() << endl;
	cout << "after setting, p3.getName(): " << p3.getName() << endl;
	cout << "after setting, p3.getAge(): " << p3.getAge() << endl;
	cout << endl;


	return 0;
}