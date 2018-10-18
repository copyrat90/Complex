#include <iostream>
#include "complex.h"

using namespace std;


const Complex Complex::operator +(const Complex& other) const
{
	return Complex(this->realPart + other.realPart, this->imaginaryPart + other.imaginaryPart);
}


const Complex Complex::operator *(const Complex& other) const
{
	int realTemp = this->realPart * other.realPart - this->imaginaryPart * other.imaginaryPart;
	int imaginaryTemp = this->realPart * other.imaginaryPart + this->imaginaryPart * other.realPart;
	
	return Complex(realTemp, imaginaryTemp);
}


ostream& operator <<(ostream& out, const Complex& c)
{
	cout << c.realPart;
	
	if (c.imaginaryPart != 0)
		if (c.imaginaryPart < 0)
			cout << " - " << -c.imaginaryPart << 'i';
		else
			cout << " + " << c.imaginaryPart << 'i';
	
	return out;
}
