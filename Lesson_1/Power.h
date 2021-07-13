#pragma once
class Power
{
	double per_1{};
	double per_2{};
public:
	Power()
	{
		per_1 = 1.5;
		per_2 = 2.5;
	}
	void set(double a, double b);
	double calculate();
};

