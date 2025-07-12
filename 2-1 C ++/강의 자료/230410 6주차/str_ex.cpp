#include <iostream>
#include <string>
using namespace std;
int main() {
	string strg1; // �Ű����� ���� ������
	if (strg1.empty() == true) {
		cout << "strg1 is empty" << endl;
	}
	string strg2("hello"); // �Ű����� �ִ� ������
	string strg3 = "hello everybody"; // �Ű����� �ִ� ������
	string strg4(strg2); // ���� ������
	// copy c-style : strcpy_s(dest,d_size,src)
	strg1 = strg3; // cpp-style
	cout << "strg1: " << strg1 << endl;
	if (strg1.empty() == true) {
		cout << "strg1 is empty" << endl;
	}
	else
		cout << "strg1 is not empty" << endl;
	// ���ڿ� �� �� ����
	bool b = (strg2 == strg3);
	cout << boolalpha << b << endl;
	b = (strg2 == "Alpah");
	cout << boolalpha << b << endl;
	// ����ڿ��� first name, last name, middle initial�� �Է¹޾� �����Ͽ� ���ο� ���ڿ� �����
	string first, last;
	char m;
	cout << "first name: ";
	cin >> first;
	cout << "last name: ";
	cin >> last;
	cout << "middle initial: ";
	cin >> m;
	string full = first + " " + m + ". " + last;
	cout << "full: " << full << endl;
	// cpp-style�� c-style ���ڿ��� ��ȣ��ȯ
	char cs[] = "Are you a string too?";
	string cpps;
	cpps = cs;
	cout << "cpps: " << cpps << endl;
	cpps[0] = 'B';
	cout << "cpps: " << cpps << endl;
	// cpp-style���� c-style ���ڿ� ���
	string cpps2 = "Yes, I am.";
	const char* cs2 = NULL;
	cs2 = cpps2.c_str(); // read only(����� ����)
	cout << "cs2: " << cs2 << endl;
	// dynamic memory Ȯ�� �ʿ�(������ c-style ���ڿ��� ����)
	int len = cpps2.size();
	char* cs3 = new char[len + 1];
	strcpy_s(cs3, len + 1, cpps2.c_str()); //char* cp ��������
	cout << "cs3: " << cs3 << endl;
	cs3[0] = 'Z';
	cout << "cs3: " << cs3 << endl;
	return 0;
}