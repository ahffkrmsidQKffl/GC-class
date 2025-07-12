#include <iostream>
using namespace std;

int funcmin(int B[], int size);
int main() {
	int A[5] = { -1, 2, -3, 4, -5 };
	int res = funcmin(A, 5);
	cout << "최소값은" << res << "입니다." << endl;

	return 0;
}

int funcmin(int B[], int size) {
	int min = B[0];
	for (int i=0; i<size; i++) {
		if (min > B[i]) {
			min = B[i];
		}
	}
	return min;
}