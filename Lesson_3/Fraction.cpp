#include "Fraction.h"

int Fraction::min()
{
	if (numerator > denominator)
	{
		return denominator;
	}
	else 
	{
		return numerator;
	}
	
}

void Fraction::fraction_reduction()
{
	int i = 2;
	if (numerator == denominator)
	{
		numerator = 1;
		denominator = 1;
	}
	else
	{
		while (i < min())
		{
			if (numerator % i == 0 && denominator % i == 0)
			{
				numerator = numerator / i;
				denominator = denominator / i;
				i = 2;
			}
			else {
				i++;
			}
		}
	}
	
}

Fraction::Fraction(int num, int denom)
{

	try // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
	{
		if (denom != 0)
		{
			numerator = num;
			denominator = denom;
		}
		else
		{
			throw - 1;
		}
	}
	catch (int a) // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << "Знаменатель не может быть равен 0" << '\n';
		exit(a);
	}
	
	
}

void Fraction::print() const
{
	std::cout << numerator << "/" << denominator<<std::endl;
}

Fraction operator+(const Fraction& f1, const Fraction& f2)
{
	Fraction f3(f1.numerator * f2.denominator + f2.numerator * f1.denominator, f1.denominator * f2.denominator);
	f3.fraction_reduction();
	return f3;
}

Fraction operator-(const Fraction& f1, const Fraction& f2)
{
	Fraction f3(f1.numerator * f2.denominator - f2.numerator * f1.denominator, f1.denominator * f2.denominator);
	f3.fraction_reduction();
	return f3;
}

Fraction operator/(const Fraction& f1, const Fraction& f2)
{
	Fraction f3(f1.numerator * f2.denominator, f1.denominator * f2.numerator);
	f3.fraction_reduction();
	return f3;
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	Fraction f3(f1.numerator * f2.numerator, f1.denominator * f2.denominator);
	f3.fraction_reduction();
	return f3;
}

bool operator==(const Fraction& f1, const Fraction& f2)
{
	if(f1.numerator == f2.numerator && f1.denominator==f2.denominator)
		return true;
	return false;
}

bool operator!=(const Fraction& f1, const Fraction& f2)
{
	if(f1==f2)
		return false;
	return true;
}

bool operator>(const Fraction& f1, const Fraction& f2)
{
	if (f1.numerator * f2.denominator > f2.numerator * f1.denominator)
		return true;
	return false;
}

bool operator<=(const Fraction& f1, const Fraction& f2)
{
	if(f1>f2)
		return false;
	return true;
}

bool operator<(const Fraction& f1, const Fraction& f2)
{
	if (f1.numerator * f2.denominator < f2.numerator * f1.denominator)
		return true;
	return false;
}

bool operator>=(const Fraction& f1, const Fraction& f2)
{
	if (f1 < f2)
		return false;
	return true;
}
