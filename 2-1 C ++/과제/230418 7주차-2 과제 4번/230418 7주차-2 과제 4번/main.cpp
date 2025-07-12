#include <iostream>
using namespace std;

// 1. Ŭ���� ����
const int MAX = 100;
class Person {
private:
	char name[MAX]; // �̸�
	int age; // ����

public:
	// 3 constructors, 1 destructor, getter, setter ����
	Person();
	Person(const char* name, int age);
	Person(const Person& p); 
	~Person();
	char* getName();
	int getAge();
	void setName(const char* name);
	void setAge(int age);
};

// 2. ��� �Լ� ����
Person::Person() {
	cout << "�Ű����� ���� ������" << endl;
	age = 0;
	name[0] = '\0';
}

Person::Person(const char* name, int age) {
	cout << "�Ű����� �ִ� ������" << endl;
	this->age = age;
	strcpy_s(this->name, MAX, name);
}

Person::Person(const Person& p) {
	cout << "���� ������" << endl;
	this->age = p.age;
	strcpy_s(this->name, MAX, p.name);
}

Person::~Person() {
	cout << "�Ҹ���" << endl;
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

// 3. ���ø����̼� �Ǵ� Ŭ���̾�Ʈ
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