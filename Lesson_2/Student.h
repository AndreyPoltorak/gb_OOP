#pragma once
#include "Person.h"
class Student :
    public Person
{
    static int count;
public:
    //static int count;
    int yearsStudy_Student{};//������ ���������� ���������� ���������� ��� ��������? ��� ��� ������ ���� ���� ������ "2010-2015" ? 
    Student(std::string , int , int , bool ,int );
    void changeYearsStudy(int);
    void summYearsStudy(int);
    void printCount() const;
    ~Student();
};


