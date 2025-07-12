#include <iostream>
using namespace std;
const int DEFAULT_ARR_SIZE = 10;
class DA {
public:
	int* arr;
	int size;
public:
	DA();
	DA(int arraySize);
	DA(const DA& d);
	~DA();
	DA& operator=(const DA& other); // ���� ���Կ����� �����ε�
};
DA::DA() {
	this->size = DEFAULT_ARR_SIZE;
	arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
		arr[i] = 0;
	cout << "con without parameter" << endl;
}
DA::DA(int arraySize) {
	this->size = arraySize;
	arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
		arr[i] = 0;
	cout << "con with parameter" << endl;
}
DA::DA(const DA& d) {
	this->size = d.size;
	arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
		arr[i] = d.arr[i];
	cout << "deep copy con" << endl;
}
DA::~DA() {
	if (arr) { // arr != NULL
		delete[] arr; arr = NULL;
		cout << "destructor" << endl;
	}
}
DA& DA::operator=(const DA& other) {
	if (this != &other) {
		delete[] arr; arr = NULL;
		size = other.size;
		arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = other.arr[i];
		}
	}
	cout << "deep assignment operator overloading" << endl;
	return *this; // ��ȭ�� this ��ü ����
}
// Ŭ���̾�Ʈ or ���ø����̼�
int func1(DA obj);
int func2(DA& obj);
int main() {
	int n = 0;
	cout << "�� ���� ������ �Է��Ͻðڼ�? ";
	cin >> n;
	DA d1(n); //con with parameter
	for (int i = 0; i < d1.size; i++) { // private�� �����Լ� �ʿ�
		cout << "�Է�: ";
		cin >> d1.arr[i]; // kind of getter�� �ʿ�
	}
	cout << "reverse output: " << endl;
	for (int i = d1.size - 1; i >= 0; i--) { 
		cout << d1.arr[i] << " ";
	}
	cout << endl;
	DA d2(d1); // deep copy con
	for (int i = 0; i < d2.size; i++) {
		cout << d2.arr[i] << " ";
	}
	cout << endl;
	//cout << func1(d2) << endl; // pass by value
	//cout << func2(d2) << endl; // pass by reference
	DA d3(10);
	for (int i = 0; i < d3.size; i++) { // private�� �����Լ� �ʿ�
		cout << "�Է�: ";
		cin >> d3.arr[i]; // kind of getter�� �ʿ�
	}
	d1 = d3; // ���� d1.operator=(d3);
	return 0;
}
int func1(DA obj) { // obj array�� ����� ���� �����Ѵ�. DA obj(d2)�� ����(copy con)
	cout << "in func1()" << endl;
	int sum = 0;
	for (int i = 0; i < obj.size; i++) {
		sum += obj.arr[i];
	}
	return sum;
}
int func2(DA& obj) { // pass by reference
	cout << "in func2()" << endl;
	int sum = 0;
	for (int i = 0; i < obj.size; i++) {
		sum += obj.arr[i];
	}
	return sum;
}