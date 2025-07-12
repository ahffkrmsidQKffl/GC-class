#include <iostream>
using namespace std;
char* SHIFTR(char* orig, int len);

int main() {
	char ori[20] = "BINGO_JJANG!!!";
	int num = strlen(ori); 
	cout << ori << endl;
	char* bingo = SHIFTR(ori, num); //배열 선언한 게 아니라 진짜 char주소만 받으려는 거니까 ori랑 bingo랑 자료형이 같네
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	bingo = SHIFTR(bingo, num);
	cout << bingo << endl;
	delete[] bingo; bingo = NULL;
	return 0;
}

char* SHIFTR(char* orig, int len) {
	char* cp;
	cp = new char[len + 1];
	cp[0] = orig[len - 1];
	for (int i = 1; i < len; i++) {
		cp[i] = orig[i - 1]; 
	}
	cp[len] = '\0';
	return cp;
}