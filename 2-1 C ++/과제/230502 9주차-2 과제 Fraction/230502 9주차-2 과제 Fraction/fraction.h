#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
	// Data members
private:
	int numer;
	int denom;

	// Public member functions
public:
	// Constructors
	Fraction();
	Fraction(int num, int den);
	Fraction(const Fraction& fract);
	// Destructor
	~Fraction();
	// Accessors(getter)
	int getNumer() const; // ȣ��Ʈ ��ü �������� ������ Ȯ���� �ϱ� ���� const �ۼ� (ȣ��Ʈ ��ü�� ��� ��ü�� ����)
	int getDenom() const;
	void print() const;
	// Mutators(setter)
	void setNumer(int Num);
	void setDenom(int den);

	// Helping private member functions
private:
	void normalize();
	int gcd(int n, int m);
};
#endif
