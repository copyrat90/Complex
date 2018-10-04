#ifndef COMPLEX_H
#define COMPLEX_H

#include "rational.h"


class Complex
{
public:
	Complex(int imaginaryNum = 0, int imaginaryDen = 1, int realNum = 0, int realDen = 1)
		: imaginaryPart(imaginaryNum, imaginaryDen), realPart(realNum, realDen)
		{
#ifdef _DEBUG_MODE_
			std::cout << "Complex(" << imaginaryNum << ", " << imaginaryDen << ", " << realNum << ", " << realDen << ")\n";
#endif
		}
	Complex(Rational imaginaryPart, Rational realPart)
		: imaginaryPart(imaginaryPart), realPart(realPart)
		{
#ifdef _DEBUG_MODE_
			std::cout << "Complex::Complex(Rational imagenaryPart, Rational realPart)" << std::endl;
			imaginaryPart.print();
			std::cout << std::endl;
			realPart.print();
			std::cout << std::endl;
#endif
		}
	
	Complex add(const Complex& other) const;
	Complex multiply(const Complex& other) const;
	
	Complex operator +(const Complex& other) const;
	Complex operator *(const Complex& other) const;
	
	void print() const;
	
private:
	Rational realPart;
	Rational imaginaryPart;
};

#endif
