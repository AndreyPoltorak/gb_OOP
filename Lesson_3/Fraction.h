#pragma once
#include <iostream>
#include <cstdlib> 

class Fraction
{
	int min();
	void fraction_reduction();
	int numerator{};
	int denominator{};
public:
	Fraction(int, int);
	void print() const;
	friend Fraction operator+ (const Fraction& f1, const Fraction& f2);
	friend Fraction operator- (const Fraction& f1, const Fraction& f2);
	friend Fraction operator/ (const Fraction& f1, const Fraction& f2);
	friend Fraction operator* (const Fraction& f1, const Fraction& f2);

	friend bool operator== (const Fraction & f1, const Fraction & f2);
	friend bool operator!= (const Fraction& f1, const Fraction& f2);
	friend bool operator> (const Fraction& f1, const Fraction& f2);
	friend bool operator<= (const Fraction& f1, const Fraction& f2);
	friend bool operator< (const Fraction& f1, const Fraction& f2);
	friend bool operator>= (const Fraction& f1, const Fraction& f2);

	Fraction operator-()
	{
		return Fraction(-numerator, denominator);
	}
};

