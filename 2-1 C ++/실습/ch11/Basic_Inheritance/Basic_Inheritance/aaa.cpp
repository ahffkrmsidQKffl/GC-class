#include <iostream>
#include "aaa.h"
using namespace std;

AAA::AAA() {
	pri = 0;
	pro = 0;
	pub = 0;
	cout << "AAA con without par" << endl;
}
AAA::AAA(int a, int b, int c) {
	pri = a;
	pro = b;
	pub = c;
	cout << "AAA con with par" << endl;
}
AAA::~AAA() {
	cout << "AAA decon" << endl;
}