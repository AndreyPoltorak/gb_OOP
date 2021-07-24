

#include <iostream>
#include <vector>
#include <set>
#include "ArrayInt.h"
#include "Card.h"
#include "Hand.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    //Задание №1
    ArrayInt A(5);
    A[0] = 3;
    A[1] = 5;
    A[2] = 2;
    A[3] = 7;
    A[4] = 4;
    
    A.print();
    A.sortАscending();
    A.print();
    A.sortDescending();
    A.print();
    A.pop_back();
    A.print();
    A.pop_front();
    A.print();
    //Задание №2
    //Вариант 1
    std::vector<int> V{ 1,2,4,5,3,1,2,1,4 };
    std::set<int> S(V.begin(),V.end());
    std::cout << "Число различных чисел = " << S.size() << std::endl;
    //Вариант 2
    std::vector<int> V_1;
    V_1.push_back(V[0]);
    bool check;
    for (int i = 1; i < V.size(); i++)
    {
        check = false;
        for (int j = 0; j < V_1.size(); j++)
        {
            if (V[i] == V_1[j])
            {
                check = true;
                break;
            }
        }
        if (!check)
        {
            V_1.push_back(V[i]);
        }
    }
    std::cout << "Число различных чисел = " << V_1.size() << std::endl;

    //Задание №3
    Hand H;
    Card* c = new Card(HEARTS, ACE, false);
    Card* c1 = new Card(HEARTS, ACE, false);
    Card* c2 = new Card(HEARTS, ACE, false);
    Card* c3 = new Card(HEARTS, ACE, false);
    H.Add(c);
    H.Add(c1);
    H.Add(c2);
    H.Add(c3);
    std::cout << H.GetValue() << std::endl;
    
}

