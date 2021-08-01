#include "Person.h"

Person::Person(std::string name, int age, int weight, bool gender)
{
	name_Person = name;
	age_Person = age;
	weight_Person = weight;
	gender_Person = gender;
}

void Person::changeName(std::string new_name)
{
	name_Person = new_name;
}

void Person::changeAge(int new_age)
{
	age_Person = new_age;
}

void Person::changeWeight(int new_weight)
{
	weight_Person = new_weight;
}

void Person::print() const
{
	std::string gender;
	if (gender_Person)
	{
		gender = "мужской";
	}
	else
	{
		gender = "женский";
	}
	std::cout << "Имя : " << name_Person <<", возраст : "<<age_Person<< ", вес : "<<weight_Person<<", пол :"<<gender<< std::endl;

}
