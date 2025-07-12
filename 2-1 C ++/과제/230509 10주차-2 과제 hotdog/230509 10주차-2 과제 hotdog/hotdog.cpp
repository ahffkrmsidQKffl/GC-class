#include <iostream>
#include "hotdog.h"
using namespace std;

int HotDogStand::allHotDogCount = 0; // 얘 헤더파일에 쓰니까 난리남...(중복 정의 어쩌구 뜨면서), 스택도 아니고 힙도 아니고 또 다른 영역이다!

HotDogStand::HotDogStand() {
	this->IDNumber = 0;
	this->eachHotDogCount = 0; // 디폴트 생성자가 생성될 거니까 생성자 전부 생략해줘도 상관 없지 않나 싶었는데(매개변수 있는 생성자나 복사 생성자 main에서 쓰는 것도 아니니), 만약 그랬으면 디폴트 생성자가 each~의 값을 뭘로 잡았을지 모르기 때문에 똑바로 counting이 되지 않았을 거 같다. 고로 다른 생성자는 몰라도 매개변수 없는 생성자는 내가 직접 만들고 each~ 변수의 값을 0으로 초기화 하는 게 맞는 듯.
	cout << "매개변수 없는 생성자" << endl;
	}

HotDogStand::HotDogStand(int IDNumber, int eachHotDogCount) {
	this->IDNumber = IDNumber;
	this->eachHotDogCount = eachHotDogCount;
	cout << "매개변수 있는 생성자" << endl;
	}

HotDogStand::HotDogStand(const HotDogStand& h) {
	this->IDNumber = h.IDNumber;
	this->eachHotDogCount = h.eachHotDogCount;
	cout << "복사 생성자" << endl;
}

HotDogStand::~HotDogStand() {
	cout << "소멸자" << endl;
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