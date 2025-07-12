#include <iostream>
using namespace std;
int main() {
	int size;
	cout << "몇 개의 정수를 입력하시겠습니까? ";
	cin >> size;
	int* ip = new int[size]; //dynamic memory allocation, ip는 스택에 배열 자체는 힙에
	for (int i = 0; i < size; ++i) {
		cin >> *(ip + i);
	}
	// 배열 요소를 입력받아 요소의 합과 평균을 구해서 출력하기
	int total = 0;
	for (int i = 0; i < size; ++i) {
		total += *(ip + i);
	}
	float average = (float)total / (float)size;
	cout << "합: " << total << ", 평균: " << average << endl;
	cout << "delete 전의 ip: " << ip << endl;
	cout << "delete 전의 *ip: " << *ip << endl;
	delete[] ip; ip = NULL; //세트
	cout << "delete 후의 ip: " << ip << endl;
	// cout << "delete 후의 *ip: " << *ip << endl;
	return 0;
}