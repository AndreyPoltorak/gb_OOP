#pragma once
#include "GenericPlayer.h"

class Player :
    public GenericPlayer
{
public:
    Player(const std::string& name = "") :GenericPlayer(name)
    {}

    virtual ~Player();

    // ����������, ����� �� ����� ���������� ����� �����
    virtual bool IsHitting() const;

    // ���������, ��� ����� �������
    void Win() const;

    // ���������, ��� ����� ��������
    void Lose() const;

    // ��������� �����
    void Push() const;

};

