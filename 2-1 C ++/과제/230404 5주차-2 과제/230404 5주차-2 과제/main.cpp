#include <iostream>
using namespace std;
char* SHIFTR(char* orig, int len);

int main() {
	char ori[20] = "BINGO_JJANG!!!";
	int num = strlen(ori); 
	cout << ori << endl;
	char* bingo = SHIFTR(ori, num); //�迭 ������ �� �ƴ϶� ��¥ char�ּҸ� �������� �Ŵϱ� ori�� bingo�� �ڷ����� ����
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