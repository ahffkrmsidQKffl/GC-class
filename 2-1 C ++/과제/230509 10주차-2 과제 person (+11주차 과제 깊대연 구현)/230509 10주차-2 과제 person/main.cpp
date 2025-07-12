#include <iostream>
#include "person.h"
using namespace std;

int main() {
	Person Bobby;
	Bobby.ShowData();
	Person p1("KIM", "013-333-5555", 22);
	p1.ShowData();
	Person p2(p1);
	p2.ShowData();
	Bobby = p2; // 생성 x, 대입 o (멤버 대 멤버가 대입이 됨)(깊은 대입 연산자를 오버로딩하지 않을 경우, 소멸자 실행 될 때 Bobby는 이미 해지된 메모리를 다시 해지하라는 명령이 내려져서 런타임 에러가 발생)
	Bobby.ShowData();
	return 0;
}