#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
	: numer(0), denom(1) // �ʱ�ȭ ����Ʈ(this->numer = 0; this->denom = 1;)
{
	cout << "�⺻ ������" << endl;
}
Fraction::Fraction(int num, int den = 1)
	: numer(num), denom(den) // �ʱ�ȭ ����Ʈ
{
	normalize();
	cout << "�Ű����� �ִ� ������" << endl;
}
Fraction::Fraction(const Fraction& fract)
	: numer(fract.numer), denom(fract.denom) // �ʱ�ȭ ����Ʈ
{
	cout << "���� ������" << endl;
}
Fraction :: ~Fraction() {
	cout << "�Ҹ���" << endl;
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
void Fraction::normalize() // ��� �� �и� 0���� �˻�
{
	// Handling a denominator of zero
	if (denom == 0)
	{
		cout << "Invalid denomination. Need to quit." << endl;
		assert(false);
	}
	// Changing the sign of denominator // �м��� ��ȣ�� ���� ���ڿ� �и� ��ȣ�� �����̱� ����. ��, �̷��� ������ print �Լ��� �ܼ�����
	if (denom < 0)
	{
		numer = -numer;
		denom = -denom;
	}
	// Dividing numerator and denominator by gcd
	int divisor = gcd(abs(numer), abs(denom)); // abs�� ����(absolute)
	numer = numer / divisor; // �ִ� ������� ���� ���� ����
	denom = denom / divisor; // �ִ� ������� ���� ���� ����
}
int Fraction::gcd(int n, int m) // �ִ� ����� ã�Ƽ� ����
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
