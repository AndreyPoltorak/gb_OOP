// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>


template<typename T>
class Pair1
{
    T p1{};
    T p2{};
public:
    Pair1(T const &t1,T const &t2) 
    {
        p1 = t1;
        p2 = t2;
    }
   const T& first() const
    {
        return p1;
    }
   const T& second() const
    {
        return p2;
    }
};



template<typename T1,typename T2>
class Pair
{
    T1 p1{};
    T2 p2{};
public:
    Pair(T1 const &t1, T2 const&t2)
    {
        p1 = t1;
        p2 = t2;
    }
    const T1& first() const
    {
        return p1;
    }
    const T2& second() const
    {
        return p2;
    }
};


template<typename T>
class StringValuePair: public Pair<std::string,T>
{
public:
    StringValuePair(std::string const  &s, T const &t) :Pair<std::string , T>(s,t)
    {}
};

int main()
{
    setlocale(LC_ALL, "Russian");
   
    // Задание 1

        Pair1<int> p1(6, 9);
        std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

       const Pair1<double> p2(3.4, 7.8);
       std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    // Задание 2



       Pair<int, double> p11(6, 7.8);
       std::cout << "Pair: " << p11.first() << ' ' << p11.second() << '\n';

       const Pair<double, int> p22(3.4, 5);
       std::cout << "Pair: " << p22.first() << ' ' << p22.second() << '\n';

       // Задание 3
       StringValuePair<int> svp("Amazing", 7);
       std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
       return 0;

}

