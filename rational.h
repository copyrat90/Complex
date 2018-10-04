#ifndef RATIONAL_H
#define RATIONAL_H


class Rational
{
	friend class Complex;
	
public:
	Rational(int numerator = 0, int denominator = 1);
	void set(int numerator = 0, int denominator = 1);
	
	Rational add(const Rational& other) const;
	Rational multiply(const Rational& other) const;
	Rational subtract(Rational r) const;
	
	Rational operator +(const Rational& other) const;
	Rational operator *(const Rational& other) const;
	Rational operator -(const Rational& other) const;
	
	void print() const;
	
private:
	int numerator;
	int denominator;
	int gcd(int big, int small) const;
};

#endif
