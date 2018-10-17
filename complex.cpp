#include "common.h"
#include "complex.h"


Complex Complex::add(const Complex& other) const
{
#ifdef _DEBUG_MODE_
	std::cout << "Complex Complex::add(const Complex& other) const" << std::endl;
#endif
	return Complex(this->imaginaryPart + other.imaginaryPart, this->realPart + other.realPart);
}


Complex Complex::multiply(const Complex& other) const
{
	Rational imaginaryTemp = this->realPart * other.imaginaryPart + this->imaginaryPart * other.realPart;
	Rational realTemp = this->realPart * other.realPart - this->imaginaryPart * other.imaginaryPart;
	
	return Complex(imaginaryTemp, realTemp);
}


Complex Complex::operator +(const Complex& other) const
{
#ifdef _DEBUG_MODE_
	std::cout << "Complex Complex::operator +(const Complex& other) const" << std::endl;
#endif
	return add(other);
}


Complex Complex::operator *(const Complex& other) const
{
	return multiply(other);
}


void Complex::print() const
{
	std::cout << realPart.numerator << " / " << realPart.denominator;
	
	if (imaginaryPart.numerator < 0)
		std::cout << " - (" << abs(imaginaryPart.numerator);
	else
		std::cout << " + (" << imaginaryPart.numerator;
	
	std::cout << " / " << imaginaryPart.denominator << ") * i";
}


ostream& operator <<(ostream& out, const Complex& c)
{
	c.print();
	return out;
}
