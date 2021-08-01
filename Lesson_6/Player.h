#pragma once
#include "GenericPlayer.h"

class Player :
    public GenericPlayer
{
public:
    Player(const std::string& name = "") :GenericPlayer(name)
    {}

    virtual ~Player();

    // показывает, хочет ли игрок продолжать брать карты
    virtual bool IsHitting() const;

    // объ€вл€ет, что игрок победил
    void Win() const;

    // объ€вл€ет, что игрок проиграл
    void Lose() const;

    // объ€вл€ет ничью
    void Push() const;

};

