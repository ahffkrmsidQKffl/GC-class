#include <iostream>
#include "student.h"
#include "person.h"
using namespace std;

int main()
{
	// Person ��ü �ν��Ͻ�ȭ�ϰ� ���
	Person person0;
	Person person1(111111111);
	Person person2(person1);
	cout << "Person ��ü�� ����: " << endl;
	person0.print();
	person1.print();
	person2.print();
	cout << endl;

	// Student ��ü �ν��Ͻ�ȭ�ϰ� ���
	Student student0;
	Student student1(222222222, 3.9);
	Student student2(student1);
	cout << "Student ��ü�� ����: " << endl;
	student0.print();
	student1.print();
	student2.print();
	cout << endl;
	return 0;
}