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
	Bobby = p2; // ���� x, ���� o (��� �� ����� ������ ��)(���� ���� �����ڸ� �����ε����� ���� ���, �Ҹ��� ���� �� �� Bobby�� �̹� ������ �޸𸮸� �ٽ� �����϶�� ����� �������� ��Ÿ�� ������ �߻�)
	Bobby.ShowData();
	return 0;
}