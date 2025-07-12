#include <iostream>
using namespace std;

int main() {
	//문자열과 문자 배열을 ㅜ분하자
	char name1[6] = { 'G', 'r', 'a', 'c', 'e', '\0' }; //문자열 6바이트
	char name2[5] = { 'G', 'r', 'a', 'c', 'e' };       //문자 배열 5바이트
	int i = 5;
	cout << sizeof(i) << endl; //byte를 알려주세요라는의미임
	cout << "sizeof(name1): " << sizeof(name1) << endl;
	cout << "sizeof(name2): " << sizeof(name2) << endl;	
	cout << "sizeof(Grace): " << sizeof("Grace") << endl; //6바이트나오겟네
	cout << "strlen(name1): " << strlen(name1) << endl; //문자열 크기를 byte로 알려주는게 strlen, null문자는 빼고 알려줌
	cout << "strlen(name2): " << strlen(name2) << endl; 
	//초록색 물결선은 warning을 주는 것임, 문자열이 왔다고 이해, 시작주소 받고 null문자 나올때까지 계속 읽고 그 개수(null문자는 포함 안 된)를 우리한테 줌
	cout << "strlen(Grace): " << strlen("Grace") << endl;
	cout << name1 << endl; //char포인터군 문자열의 시작주소가왓네 null문자가 나올때까지 읽어야지
	cout << name2 << endl; //char포인터군 문자열의 시작주소가왓네 null문자가 나올때까지 읽어야지



	//주소를 입력받아 출력하기   
	/*char address[100];
	cout << "주소를 입력하세요: ";

	//cin >> address;
	cin.getline(address, 100, '\n');

	cout << "입력된 주소는 " << address << " 입니다." << endl;
	*/

	return 0;
}