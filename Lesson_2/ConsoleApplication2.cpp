

#include <iostream>
#include "Person.h"
#include "Student.h"

//лень было каждый класс создавать отдельно
class Fruit
{
public:
    std::string name{};
    std::string color{};
    std::string getName()
    {
        return name;
    }
    std::string getColor()
    {
        return color;
    }
};

class Apple : public Fruit
{
public:
    Apple(std::string color_Apple) {
        name = "Apple";
        color = color_Apple;
    }
    Apple() {}
};

class Banana : public Fruit
{
public:
    Banana() {
        name = "Banana";
        color = "yellow";
    }
};


class GrannySmith : public Apple
{
public:
    GrannySmith() {
        name = "Granny Smith apple";
        color = "green";
    }
};






int Student::count = 0;

int main()
{
    // немного не понял первое задание(
    setlocale(LC_ALL, "Russian");
    Student student1("Андрей",23,75,true,5);
    Student student2("Маша", 25, 56, false, 7);
    Student student3("Андрей", 19, 90, true, 1);
    student1.printCount();
    Person person1("Андрей", 23, 75, true);
    person1.print();



    //2
    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";


    system("pause");
}

//3
class Blackjack
{
   //-здесь будет описан процесс самой игры и правила 
};

class playing_cards : virtual public Blackjack
{
    // - здесь описываем игральные колоды карт и дейсвтия с ними
};

class table : virtual public Blackjack, virtual public playing_cards
{
    //- здесь будет описан стол
};

class bet : virtual public Blackjack
{
    //- здесь описан процесс ставок и  рассчет коэфициентов  и дейсвтия с ними
};


class players : virtual public Blackjack, virtual public playing_cards, virtual public table
{
    //- здесь будет описан клаас игроков и их дейсвия
};

class dealer : virtual public Blackjack, virtual public playing_cards, virtual public table
{
    //- здесь будет описан клаас дилера и его дейсвия
};