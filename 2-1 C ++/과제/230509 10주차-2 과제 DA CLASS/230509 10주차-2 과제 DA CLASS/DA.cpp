#include <iostream>
#include "DA.h"
using namespace std;

DA::DA() {
	this->size = DEFAULT_ARR_SIZE;
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->arr[i] = 0;
	}
	cout << "�Ű����� ���� ������" << endl;
}
DA::DA(int size) {
	this->size = size;
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->arr[i] = 0;
	}
	cout << "�Ű����� �ִ� ������" << endl;
}
 
//DA::DA(const DA& d) {
//	this->size = d.size;
//	this->arr = d.arr;
//  cout << "���� ���� ������" << endl;
//}

DA::DA(const DA& d) {
	this->size = d.size;
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->arr[i] = d.arr[i];
	}
	cout << "���� ���� ������" << endl;
}
DA::~DA() {
	if (arr) { //arr�� null�� �ƴ϶��
		delete[] arr; arr = NULL;
	}
	cout << "�Ҹ���" << endl;
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
		for (int i = 0; i < this->size; i++) { //person ��뿬 ���� �ϸ鼱 string copy �ϸ� ��
			arr[i] = other.arr[i]; 
		}
	}
	cout << "���� ���� ������ �����ε�" << endl;
	return *this; // ��ȭ�� this ��ü�� return��
}