#include <iostream>
using namespace std;

//클래스 정의
const int DEFAULT_ARR_SIZE = 10;
class DA {
public: //public 안 하면 디폴트는 private
	int* arr;
	int size;
	DA();
	DA(int size);
	DA(const DA& d);
	~DA();
};

// 멤버 함수 정의(구현)
DA::DA() {
	this->size = DEFAULT_ARR_SIZE;
	arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		arr[i] = 0;
	}
	cout << "매개변수 없는 생성자" << endl;
}
DA::DA(int size) {
	this->size = size;
	arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		arr[i] = 0;
	}
	cout << "매개변수 있는 생성자" << endl;
}
DA::DA(const DA& d) {
	this->size = d.size;
	arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		arr[i] = d.arr[i];
	}
	cout << "깊은 복사 생성자" << endl;
}
DA::~DA() {
	if (arr) { //arr이 null이 아니라면
		delete[] arr; arr = NULL;
	}
	cout << "소멸자" << endl;
}

//클라이언트 || 애플리케이션
int func1(DA obj);
int func2(DA& obj);
int main() {
	int n = 0;
	cout << "몇 개의 정수를 입력하시겠습니까? : ";
	cin >> n;
	DA d1(n); // con with parameter
	for (int i = 0; i < d1.size; i++) { // 멤버 데이터를 private으로 쓸 경우 getter 필요
		cout << "입력: ";
		cin >> d1.arr[i];         // 멤버 데이터를 private으로 쓸 경우 kind of getter가 필요
	}
	cout << "reverse out: " << endl;
	for (int i = d1.size-1; i >=0; i--) { 
		cout << d1.arr[i] << " ";

	}
	cout << endl;

	DA d2(d1); // deep copy con
	for (int i = 0; i < d2.size; i++) {
		cout << d2.arr[i] << " ";

	}
	cout << endl;

	cout << func1(d1) << endl; // passbyvalue를 했으므로 obj가 스택 메모리에 새로 만들어져야됨, obj는 깊은 복사 생성자에 의해 생성됨! (DA obj = d1)=(DA obj(d1))
	cout << func2(d1) << endl; // passbyreference를 했으므로 copycon or destructor가 일어나지 않음!

	return 0;
}

int func1(DA obj) { // obj.arr의 요소합을 리턴 
	cout << "in func1()" << endl;
	int sum = 0;
	for (int i = 0; i < obj.size; i++) {
		sum = sum + obj.arr[i];
	}
	return sum;
}

int func2(DA& obj) {
	cout << "in func2()" << endl;
	int sum = 0;
	for (int i = 0; i < obj.size; i++) {
		sum = sum + obj.arr[i];
	}
	return sum;
}