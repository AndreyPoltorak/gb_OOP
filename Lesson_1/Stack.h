#pragma once
class Stack
{
	int mass[10]{};
	int dl{};
public:
	void reset();
	bool push(int p);
	int pop();
	void print();
};

