#include "Student.h"

Student::Student(std::string name, int age, int weight, bool gender, int yearsStudy)
{
	yearsStudy_Student = yearsStudy;
	name_Person = name;
	age_Person = age;
	weight_Person = weight;
	gender_Person = gender;
	count++;
}

void Student::changeYearsStudy(int yearsStudy)
{
	yearsStudy_Student = yearsStudy;
}

void Student::summYearsStudy(int summ)
{
	yearsStudy_Student += summ;
}

Student::~Student()
{
	count--;
}

void Student::printCount() const
{
	std::cout <<"count = " << count << std::endl;
}
