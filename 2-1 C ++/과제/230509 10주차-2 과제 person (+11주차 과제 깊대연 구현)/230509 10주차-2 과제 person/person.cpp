#include <iostream>
#include "person.h"
using namespace std;

Person::Person() {
	this->name = new char[MAX];
	this->name[0] = NULL;
	this->phone = new char[MAX];
	this->phone[0] = NULL;
	this->age = 0;
	cout << "�Ű����� ���� ������" << endl;
	
}

Person::Person(const char* _name, const char* _phone, int _age) {
	this->name = new char[strlen(_name)+1]; //MAX�� �ƴ϶� strlen���� �߾�� �߱���... sizeof�� 32��Ʈ���� ������ 4����Ʈ 64��Ʈ���� ������ 8����Ʈ ���ͼ�(�������� ����� �˷��༭) �� �ǳ�
	strcpy_s(this->name, strlen(_name) + 1, _name);
	this->phone = new char[strlen(_phone) + 1];
	strcpy_s(this->phone, strlen(_phone) + 1, _phone);
	this->age = _age;
	cout << "�Ű����� �ִ� ������" << endl;
	
}

Person::Person(const Person& p) { // ���ｺ������ ������ �ν��Ͻ�.name, �ν��Ͻ�.phone�� �� ��(private�̱� ����), �н� ���� ���۷����󼭸� �̷��� ������ ��
	this->name = new char[strlen(p.name) + 1]; //MAX�� �ƴ϶� strlen���� �߾�� �߱���... sizeof�� 32��Ʈ���� ������ 4����Ʈ 64��Ʈ���� ������ 8����Ʈ ���ͼ�(�������� ����� �˷��༭) �� �ǳ�
	strcpy_s(this->name, strlen(p.name) + 1, p.name);
	this->phone = new char[strlen(p.phone) + 1];
	strcpy_s(this->phone, strlen(p.phone) + 1, p.phone);
	this->age = p.age;
	cout << "���� ���� ������" << endl;
}

Person::~Person() {
	if (this->name) {
		delete[] this->name; this->name = NULL;
	}
	if (this->phone) {
		delete[] this->phone; this->phone = NULL;
	}
	cout << "�Ҹ��� ����" << endl;
}

void Person::ShowData() {
	cout << "name : " << this->name << endl;
	cout << "phone : " << this->phone << endl;
	cout << "age : " << this->age << endl;
}

Person& Person::operator=(const Person& other) { // �̰� �ٵ� ����Ʈ �� �ص� �Ǵ� ��...? �Ҹ��ڿ��� �Ҹ��ϰڱ���
	if (this != &other) {
		delete[] this->name; this->name = NULL;
		this->name = new char[strlen(other.name)+1];
		strcpy_s(this->name, strlen(other.name) + 1, other.name);
		delete[] this->phone; this->phone = NULL;
		this->phone = new char[strlen(other.phone) + 1];
		strcpy_s(this->phone, strlen(other.phone) + 1, other.phone);
		this->age = other.age;
	}
	cout << "���� ���� ������ �����ε�" << endl;
	return *this;
}