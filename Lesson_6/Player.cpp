#include "Player.h"

bool Player::IsHitting() const
{
    setlocale(LC_ALL, "Russian");
    std::cout << name << ", возьмете карту? (Y/N): ";
    char response;
    std::cin >> response;
    return (response == 'y' || response == 'Y');

}

void Player::Win() const
{
    setlocale(LC_ALL, "Russian");
    std::cout << name << " победил!!!";
}

void Player::Lose() const
{
    setlocale(LC_ALL, "Russian");
    std::cout << name << " проиграл!";
}

void Player::Push() const
{
    setlocale(LC_ALL, "Russian");
    std::cout << name << " ничья!";
}
