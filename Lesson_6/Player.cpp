#include "Player.h"

bool Player::IsHitting() const
{
    setlocale(LC_ALL, "Russian");
    std::cout << name << ", �������� �����? (Y/N): ";
    char response;
    std::cin >> response;
    return (response == 'y' || response == 'Y');

}

void Player::Win() const
{
    setlocale(LC_ALL, "Russian");
    std::cout << name << " �������!!!";
}

void Player::Lose() const
{
    setlocale(LC_ALL, "Russian");
    std::cout << name << " ��������!";
}

void Player::Push() const
{
    setlocale(LC_ALL, "Russian");
    std::cout << name << " �����!";
}
