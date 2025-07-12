#include <iostream>
#include "DA.h"
using namespace std;

DA::DA() {
	this->size = DEFAULT_ARR_SIZE;
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->arr[i] = 0;
	}
	cout << "매개변수 없는 생성자" << endl;
}
DA::DA(int size) {
	this->size = size;
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->arr[i] = 0;
	}
	cout << "매개변수 있는 생성자" << endl;
}
 
//DA::DA(const DA& d) {
//	this->size = d.size;
//	this->arr = d.arr;
//  cout << "얕은 복사 생성자" << endl;
//}

DA::DA(const DA& d) {
	this->size = d.size;
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->arr[i] = d.arr[i];
	}
	cout << "깊은 복사 생성자" << endl;
}
DA::~DA() {
	if (arr) { //arr이 null이 아니라면
		delete[] arr; arr = NULL;
	}
	cout << "소멸자" << endl;
}

int DA::getArrElement(int index) {
	return this->arr[index];
}

int DA::getSize() {
	return this->size;
}

void DA::setArrElement(int index, int val) {
	this->arr[index] = val;
}

void DA::setSize(int size) {
	size = this->size;
}

DA& DA::operator=(const DA& other) {
	if (this != &other) {
		this->size = other.size;
		delete[] arr;
		arr = new int[this->size];
		for (int i = 0; i < this->size; i++) { //person 깊대연 과제 하면선 string copy 하면 됨
			arr[i] = other.arr[i]; 
		}
	}
	cout << "깊은 대입 연산자 오버로딩" << endl;
	return *this; // 변화된 this 객체를 return함
}