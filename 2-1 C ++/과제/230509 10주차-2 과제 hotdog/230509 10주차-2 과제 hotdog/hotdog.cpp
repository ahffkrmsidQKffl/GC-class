#include <iostream>
#include "hotdog.h"
using namespace std;

int HotDogStand::allHotDogCount = 0; // �� ������Ͽ� ���ϱ� ������...(�ߺ� ���� ��¼�� �߸鼭), ���õ� �ƴϰ� ���� �ƴϰ� �� �ٸ� �����̴�!

HotDogStand::HotDogStand() {
	this->IDNumber = 0;
	this->eachHotDogCount = 0; // ����Ʈ �����ڰ� ������ �Ŵϱ� ������ ���� �������൵ ��� ���� �ʳ� �;��µ�(�Ű����� �ִ� �����ڳ� ���� ������ main���� ���� �͵� �ƴϴ�), ���� �׷����� ����Ʈ �����ڰ� each~�� ���� ���� ������� �𸣱� ������ �ȹٷ� counting�� ���� �ʾ��� �� ����. ��� �ٸ� �����ڴ� ���� �Ű����� ���� �����ڴ� ���� ���� ����� each~ ������ ���� 0���� �ʱ�ȭ �ϴ� �� �´� ��.
	cout << "�Ű����� ���� ������" << endl;
	}

HotDogStand::HotDogStand(int IDNumber, int eachHotDogCount) {
	this->IDNumber = IDNumber;
	this->eachHotDogCount = eachHotDogCount;
	cout << "�Ű����� �ִ� ������" << endl;
	}

HotDogStand::HotDogStand(const HotDogStand& h) {
	this->IDNumber = h.IDNumber;
	this->eachHotDogCount = h.eachHotDogCount;
	cout << "���� ������" << endl;
}

HotDogStand::~HotDogStand() {
	cout << "�Ҹ���" << endl;
	}

void HotDogStand::justSold() {
	allHotDogCount++;
	this->eachHotDogCount++;
	}

int HotDogStand::getEachHotDogCount() {
	return this->eachHotDogCount;
	}

void HotDogStand::setID(int IDNumber) {
	this->IDNumber = IDNumber;
	}

int HotDogStand::getID() {
	return this->IDNumber;
}

int HotDogStand::getAllHotDogCount() {
	return allHotDogCount;
}