#include <iostream>
using namespace std;
int main()
{
	//문자열과 문자 배열을 구분하자
	//문자열
	char name1[6] = { 'G', 'r', 'a', 'c', 'e', '\0' };
	//문자 배열
	char name2[5] = { 'G', 'r', 'a', 'c', 'e' };
	int i = 5;
	cout << sizeof(i) << endl;
	cout << "sizeof(name1): " << sizeof(name1) << endl;
	cout << "sizeof(name2): " << sizeof(name2) << endl;
	cout << "sizeof(Grace): " << sizeof("Grace") << endl;
	cout << "strlen(name1): " << strlen(name1) << endl;
	cout << "strlen(name2): " << strlen(name2) << endl;
	cout << "strlen(Grace): " << strlen("Grace") << endl;
	cout << name1 << endl;
	cout << name2 << endl;
	/* 주소를 입력받아 출력하기, 
	char address[100];
	cout << "주소 입력: ";
	cin >> address;
	cin.getline(address, 100, '\n');
	cout << "입력된 주소는 " << address << " 입니다." << endl;
*/

	return 0;
}