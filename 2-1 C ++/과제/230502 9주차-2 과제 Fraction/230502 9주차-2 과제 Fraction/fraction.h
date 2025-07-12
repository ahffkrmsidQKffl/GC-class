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
	int getNumer() const; // 호스트 객체 변경하지 않음을 확실히 하기 위해 const 작성 (호스트 객체를 상수 객체로 만듬)
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
