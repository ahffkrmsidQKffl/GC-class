#include <iostream>
#include <string>
using namespace std;
int main() {
	string strg1;
	cout << "문자열을 입력하세요: ";
	cin >> strg1;
	cout << "입력된 문자열은: " << strg1 << endl;
	// input buffer clear
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "한 줄을 입력하세요: ";
	getline(cin, strg1);
	cout << "입력된 한줄 문자열은: " << strg1 << endl;
	// 한 줄 입력받아 출력하기 until enter only
	while (true) {
		cout << "연속 한 줄 입력: ";
		getline(cin, strg1);
		if (strg1.empty() == true) {
			cout << "연속 한 줄 입력 종료" << endl;
			break;
		}
		cout << "입력된 한 줄: " << strg1 << endl;
	}
	return 0;
}