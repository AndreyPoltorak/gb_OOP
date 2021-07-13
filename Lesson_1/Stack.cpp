#include "Stack.h"
#include <iostream>

void Stack::reset()
{
	this->dl = 0;
	for (int i = 0; i < 10; i++)
	{
		this->mass[i] = 0;
	}
}

bool Stack::push(int p)
{
	if (this->dl < 10)
	{
		mass[dl] = p;
		dl++;
		return true;
	}
	return false;
}

int Stack::pop()
{
	if (this->dl == 0)
	{
		std::cout << "Stack = NULL" << std::endl;
		return NULL;
	}
	else
	{
		this->dl--;
		int r = this->mass[this->dl];
		this->mass[this->dl] = 0;
		
		return r;
	}
}

void Stack::print()
{
	std::cout << "( ";
	for (int i = 0; i < this->dl; i++)
	{
		std::cout << this->mass[i] << " ";
	}
	std::cout << ")"<<std::endl;
}
