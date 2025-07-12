#include <iostream>
using namespace std;

//배열하고 친한 애는 for루프, 포인터.
int main() {
	int A[10] = { 0 };
	int B[10] = { 10 }; // 나머진 다 0으로 초기화됨
	//A = B; // 식이 수정할 수 있는 ivalue여야 합니다.(왼쪽이 ivalue) (A는 int pointer 상수, LHS는 변수여야 함!)
	for (int i = 0; i < 10; i++) {
		cout << i << "번째 수: ";
		cin >> A[i];

	}

	for (int i = 9; i >= 0; i--) {
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}