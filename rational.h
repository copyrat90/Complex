#ifndef RATIONAL_H
#define RATIONAL_H

#include "common.h"

class Rational
{
	friend class Complex;
	
public:
	Rational(int numerator = 0, int denominator = 1);
	void set(int numerator = 0, int denominator = 1);
	
	Rational(const Rational& r);
	
	Rational add(const Rational& other) const;
	Rational multiply(const Rational& other) const;
	Rational subtract(Rational r) const;
	
	Rational operator +(const Rational& other) const;
	Rational operator *(const Rational& other) const;
	Rational operator -(const Rational& other) const;
	
	void print() const;
	
	~Rational();
	
	static int getObjCnt();
	
private:
	static int objCnt;
	
	int numerator;
	int denominator;
	int gcd(int big, int small) const;
};

ostream& operator <<(ostream& out, const Rational& r);

#endif
