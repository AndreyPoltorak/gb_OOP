#include <iostream>
#include "Fraction.h"
#include "Card.h"
//Задание №1
class Figure
{
public:
    virtual void area() = 0;
};

class Parallelogram : public Figure
{

public:
    double a_Parallelogram{};//основание
    double h_Parallelogram{};//высота
    Parallelogram() {}
    Parallelogram(double a, double h)
    {
        a_Parallelogram = a;
        h_Parallelogram = h;
    }
    void area() override
    {
        std::cout << "area::Parallelogram = " << double(a_Parallelogram * h_Parallelogram) << std::endl;
    }
};

class Circle : public Figure
{
    double R_Circle{};
public:
    Circle(double R)
    {
        R_Circle = R;
    }
    void area() override
    {
        std::cout << "area::Circle = " << double(3.14 * R_Circle * R_Circle) << std::endl;
    }
};

class Rectangle : public Parallelogram
{
public:
    Rectangle(double a, double b):Parallelogram(a,b)
    {
        
    }

    void area() override
    {
        std::cout << "area::Rectangle = " << double(a_Parallelogram * h_Parallelogram) << std::endl;
    }
};

class Square : public Parallelogram
{
public:
    Square(double a) :Parallelogram(a, a)
    {
       
    }

    void area() override
    {
        std::cout << "area::Square = " << double(a_Parallelogram * h_Parallelogram) << std::endl;
    }
};

class Rhombus : public Parallelogram
{

public:
    Rhombus(double a, double h) :Parallelogram(a, h)
    {
     
    }

    void area() override
    {
        std::cout << "area::Rhombus = " << double(a_Parallelogram * h_Parallelogram) << std::endl;
    }
};

//-----------------------------------------------------------------------------------------------------------
 //Задание №2
class Car
{
public:
    std::string company{};
    std::string model{};
    Car(std::string comp, std::string mod) 
    {
        company = comp;
        model = mod;
        std::cout << "Car::Car()" << std::endl;
    }
    ~Car()
    {
        std::cout << "Car::~Car()" << std::endl;
    }
};

class PassengerCar :virtual public Car
{
public:
    PassengerCar(std::string comp, std::string mod):Car(comp,mod)
    {
        std::cout << "PassengerCar::PassengerCar()" << std::endl;
    }
    ~PassengerCar()
    {
        std::cout << "PassengerCar::~PassengerCar()" << std::endl;
    }

};

class Bus :virtual public Car
{
public:
    Bus(std::string comp, std::string mod) :Car(comp, mod)
    {
        std::cout << "Bus::Bus()" << std::endl;
    }
    ~Bus()
    {
        std::cout << "Bus::~Bus()" << std::endl;
    }

};

class Minivan :public PassengerCar, public Bus
{
public:
    Minivan(std::string comp, std::string mod) :Bus(comp, mod),PassengerCar(comp, mod),Car(comp, mod)
    {
        std::cout << "Minivan::Minivan()" << std::endl;
    }
    ~Minivan()
    {
        std::cout << "Minivan::~Minivan()" << std::endl;
    }
};

//-------------------------------------------------------------------------------------







int main()
{
    setlocale(LC_ALL, "Russian");
    //Задание №1
    Parallelogram P(2, 2);
    P.area();
    Circle C(2);
    C.area();
    Rectangle R(2, 3);
    R.area();
    Square S(3);
    S.area();
    Rhombus Rh(3, 4);
    Rh.area();
    //Задание №2
    {PassengerCar a_1("Лада", "Гранта"); }
    {Bus a_2("Yutong", "ZK6120H"); }
    {Minivan a_3("Volkswagen", "Routan 2008"); }
    //Задание №3

    Fraction d1(2, 3);
    Fraction d2(2, 7);
    Fraction d3 = d1 * d2;
    d3.print();
    d3 = d1 + d2;
    d3.print();
    d3 = d1 - d2;
    d3.print();
    d3 = d1 / d2;
    d3.print();
    d3 = -d3;
    d3.print();
    bool a = d1 == d2;
    a = d1 != d2;
    a = d1 > d2;
    a = d1 <= d2;
    a = d1 < d2;
    a = d1 >= d2;
   
    system("pause");
}

