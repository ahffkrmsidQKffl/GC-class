// 깊은 복사 생성자라 하면(멤버 데이터에 포인터 있으면) 생성자에서 무조건 다 new를 해줘야됨
#ifndef PERSON_H
#define PERSON_H

const int MAX = 100;
class Person {
private:
	char* name; 
	char* phone;
	int age; // 나이

public:
	// 3 constructors, 1 destructor, getter, setter 선언
	Person();
	Person(const char* _name, const char* _phone, int _age);
	Person(const Person& p);
	~Person();
	void ShowData();
	Person& operator=(const Person& other);
};

#endif