#include <iostream>
using namespace std;

//Ŭ���� ����
const int DEFAULT_ARR_SIZE = 10;
class DA {
public: //public �� �ϸ� ����Ʈ�� private
	int* arr;
	int size;
	DA();
	DA(int size);
	DA(const DA& d);
	~DA();
};

// ��� �Լ� ����(����)
DA::DA() {
	this->size = DEFAULT_ARR_SIZE;
	arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		arr[i] = 0;
	}
	cout << "�Ű����� ���� ������" << endl;
}
DA::DA(int size) {
	this->size = size;
	arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		arr[i] = 0;
	}
	cout << "�Ű����� �ִ� ������" << endl;
}
DA::DA(const DA& d) {
	this->size = d.size;
	arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		arr[i] = d.arr[i];
	}
	cout << "���� ���� ������" << endl;
}
DA::~DA() {
	if (arr) { //arr�� null�� �ƴ϶��
		delete[] arr; arr = NULL;
	}
	cout << "�Ҹ���" << endl;
}

//Ŭ���̾�Ʈ || ���ø����̼�
int func1(DA obj);
int func2(DA& obj);
int main() {
	int n = 0;
	cout << "�� ���� ������ �Է��Ͻðڽ��ϱ�? : ";
	cin >> n;
	DA d1(n); // con with parameter
	for (int i = 0; i < d1.size; i++) { // ��� �����͸� private���� �� ��� getter �ʿ�
		cout << "�Է�: ";
		cin >> d1.arr[i];         // ��� �����͸� private���� �� ��� kind of getter�� �ʿ�
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

	cout << func1(d1) << endl; // passbyvalue�� �����Ƿ� obj�� ���� �޸𸮿� ���� ��������ߵ�, obj�� ���� ���� �����ڿ� ���� ������! (DA obj = d1)=(DA obj(d1))
	cout << func2(d1) << endl; // passbyreference�� �����Ƿ� copycon or destructor�� �Ͼ�� ����!

	return 0;
}

int func1(DA obj) { // obj.arr�� ������� ���� 
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