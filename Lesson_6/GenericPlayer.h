#pragma once
#include "Hand.h"
#include "string"
#include "iostream"

class GenericPlayer :
    public Hand
{
   

public:
    std::string name{};
    GenericPlayer(std::string new_name);
    virtual bool IsHitting() = 0;
    bool IsBoosted() const;
    void Bust() const;
};

