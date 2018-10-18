#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;


class Complex
{
public:
	Complex(int realParam = 0, int imaginaryParam = 0)
		: realPart(realParam), imaginaryPart(imaginaryParam) {}
	
	const Complex operator +(const Complex& other) const;
	const Complex operator *(const Complex& other) const;
	
	friend ostream& operator <<(ostream& out, const Complex& c);
	
private:
	int realPart;
	int imaginaryPart;
};

ostream& operator <<(ostream& out, const Complex& c);

#endif  // COMPLEX_H
