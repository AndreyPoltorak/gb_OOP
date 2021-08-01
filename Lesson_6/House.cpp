#include "House.h"

bool House::IsHitting() const
{
    return (GetValue() <= 16);

}

void House::FlipFirstCard()
{
    setlocale(LC_ALL, "Russian");
    if (!(Cards.empty()))
    {
        Cards[0]->Flip();
    }
    else
    {
        std::cout << "Ќет карты, которую можно перевернуть!\n";
    }

}
