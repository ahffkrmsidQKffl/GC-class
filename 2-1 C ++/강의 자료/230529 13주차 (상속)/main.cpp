#include<iostream>
#include<string>
using namespace std;
class AAA {
private: int pri;
protected: int pro;
public: int pub;
public:
	AAA();
	AAA(int a, int b, int c);
	~AAA();
};
AAA::AAA(){
	cout << "AAA con w/o parameters" << endl;
	pri = 0; pro = 0; pub = 0;
}
AAA::AAA(int a, int b, int c) {
	cout << "AAA con with parameters" << endl;
	pri = a; pro = b; pub = c;
}
AAA::~AAA() {
	cout << "AAA decon" << endl;
}
class BBB : public AAA { // »ó¼Ó
private:
	int b;
	string name;
public:
	BBB();
	BBB(int bval, string s);
	~BBB();
	void Print();
	void SetData();
};
BBB::BBB() {
	cout << "BBB con w/o parameters" << endl;
	b = 0; name[0] = '\0';
}
BBB::BBB(int bval, string s) {
	cout << "BBB con with parameters" << endl;
	b = bval; name=s;
}
BBB::~BBB() {
	cout << "BBB decon" << endl;
}
void BBB::Print() {
	cout << "BBB::Print() b:" << b << " name: " << name << endl;
	cout << "pro: " << pro << " pub: " << pub << endl;
	//cout << "pri: " << pri << endl;
}
void BBB::SetData() {
	//pri = 5;
	pro = 6; pub = 7;
}
int main() {
	cout << "sizeof(AAA): " << sizeof(AAA) << " sizeof(BBB): " << sizeof(BBB) << endl;
	AAA a;
	//a.pri = 0; a.pro = 100;
	a.pub = 1000;
	BBB b(100, "Jeffrey");
	cout << "sizeof(b): " << sizeof(b) << endl;
	b.pub = 200;
	b.SetData();
	b.Print();
	return 0;
}