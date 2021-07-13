#include "Power.h"
#include <cmath>

void Power::set(double a, double b)
{
	this->per_1 = a;
	this->per_2 = b;
}

double Power::calculate()
{
	return pow(this->per_1,this->per_2);
}
