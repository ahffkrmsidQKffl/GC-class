#include <iostream>
using namespace std;
int main() {
	int A[10] = { 0 };
	int B[10] = { 10 };
	A = B; //A�� int pointer ���, LHS�� �������� ��.
	for (int i = 0; i < 10; i++) {
		cout << i << "��° ��: ";
		cin >> A[i];
	}
	for (int i = 9; i >= 0; i--) {
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}