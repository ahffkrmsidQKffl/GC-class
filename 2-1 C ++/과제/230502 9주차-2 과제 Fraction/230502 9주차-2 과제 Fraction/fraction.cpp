#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
	: numer(0), denom(1) // 초기화 리스트(this->numer = 0; this->denom = 1;)
{
	cout << "기본 생성자" << endl;
}
Fraction::Fraction(int num, int den = 1)
	: numer(num), denom(den) // 초기화 리스트
{
	normalize();
	cout << "매개변수 있는 생성자" << endl;
}
Fraction::Fraction(const Fraction& fract)
	: numer(fract.numer), denom(fract.denom) // 초기화 리스트
{
	cout << "복사 생성자" << endl;
}
Fraction :: ~Fraction() {
	cout << "소멸자" << endl;
}
int Fraction::getNumer() const
{
	return this->numer;
}
int Fraction::getDenom() const
{
	return this->denom;
}
void Fraction::print() const
{
	cout << this->numer << "/" << this->denom << endl;
}
void Fraction::setNumer(int num)
{
	this->numer = num;
	normalize();
}
void Fraction::setDenom(int den)
{
	this->denom = den;
	normalize();
}
void Fraction::normalize() // 약분 겸 분모가 0인지 검사
{
	// Handling a denominator of zero
	if (denom == 0)
	{
		cout << "Invalid denomination. Need to quit." << endl;
		assert(false);
	}
	// Changing the sign of denominator // 분수의 부호는 원래 분자와 분모 부호의 곱셈이기 때문. 또, 이렇게 함으로 print 함수가 단순해짐
	if (denom < 0)
	{
		numer = -numer;
		denom = -denom;
	}
	// Dividing numerator and denominator by gcd
	int divisor = gcd(abs(numer), abs(denom)); // abs는 절댓값(absolute)
	numer = numer / divisor; // 최대 공약수로 나눈 값을 저장
	denom = denom / divisor; // 최대 공약수로 나눈 값을 저장
}
int Fraction::gcd(int n, int m) // 최대 공약수 찾아서 리턴
{
	int gcd = 1;
	for (int k = 1; k <= n && k <= m; k++)
	{
		if (n % k == 0 && m % k == 0)
		{
			gcd = k;
		}
	}
	return gcd;
}
