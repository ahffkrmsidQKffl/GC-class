#include <iostream>
using namespace std;

int max(int num1, int num2);
int max(int num1, int num2, int num3);
int max(int num1, int num2, int num3, int num4);

int main() {
	cout << "5�� 7 �� ���� ū ���� " << max(5, 7) << endl;
	cout << "5�� 7�̶� 8 �� ���� ū ���� " << max(5, 7, 8) << endl;
	cout << "5�� 7�̶� 8�̶� 1000 �� ���� ū ���� " << max(5, 7, 8, 1000) << endl;
	return 0;
}

int max(int num1, int num2) {
	int larger;
	if (num1 >= num2)
	{
		larger = num1;
	}
	else 
	{
		larger = num2;
	}
	return larger;
}

int max(int num1, int num2, int num3) {

	return max(max(num1, num2), num3);

}

int max(int num1, int num2, int num3, int num4) {

	return max(max(num1, num2, num3), num3);

}