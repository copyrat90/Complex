#include "common.h"
#include "rational.h"


Rational Rational::add(const Rational& other) const
{
#ifdef _DEBUG_MODE_
	std::cout << "Rational Rational::add(const Rational& other) const" << std::endl;
#endif
	return Rational(this->numerator * other.denominator + other.numerator * this->denominator, this->denominator * other.denominator);
}


Rational Rational::multiply(const Rational& other) const
{
	return Rational(this->numerator * other.numerator, this->denominator * other.denominator);
}


Rational Rational::subtract(Rational r) const
{
	r.numerator *= -1;
	
	return add(r);
}


Rational Rational::operator +(const Rational& other) const
{
#ifdef _DEBUG_MODE_
	std::cout << "Rational Rational::operator +(const Rational& other) const" << std::endl;
#endif
	return add(other);
}


Rational Rational::operator *(const Rational& other) const
{
	return multiply(other);
}


Rational Rational::operator -(const Rational& other) const
{
	return subtract(other);
}


Rational::Rational(int numerator, int denominator)
{
#ifdef _DEBUG_MODE_
	std::cout << "Rational::Rational(" << numerator << ", " << denominator << ")\n";
#endif
	set(numerator, denominator);
}

	
void Rational::set(int numerator, int denominator)
{
	if (denominator < 0)
	{
		numerator *= -1;
		denominator *= -1;
	}
	
	this->numerator = numerator;
	this->denominator = denominator;
	
	int abs_num = abs(numerator);
	int abs_den = abs(denominator);
	
	int nGcd = (abs_num > abs_den) ? gcd(abs_num, abs_den) : gcd(abs_den, abs_num);
	
#ifdef _DEBUG_MODE_
	std::cout << "nGcd == " << nGcd << std::endl;
	std::cout << "this->numerator /= nGcd" << std::endl;
#endif
	this->numerator /= nGcd;
	this->denominator /= nGcd;
}


// 반드시 big >= small 이어야 함.  함수 호출 전 조건검사 필요. 
int Rational::gcd(int big, int small) const
{
	if (small == 0)
		return big;
		
	return gcd(small, big%small);
}


void Rational::print() const
{
	std::cout << numerator << " / " << denominator;
}
