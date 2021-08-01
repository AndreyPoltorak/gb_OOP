#pragma once
#include <string>
#include <iostream>

class Person
{
public:
	std::string name_Person{};
	int age_Person{};
	int weight_Person{};
	bool gender_Person{};//мужской -true ; женский -false;
	
	Person(std::string, int, int, bool);
	Person(){}
	
	void changeName(std::string);
	void changeAge(int);
	void changeWeight(int);
	void print() const;
};

