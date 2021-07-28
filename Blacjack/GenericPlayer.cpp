#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(std::string new_name)
{
	name = new_name;
}

bool GenericPlayer::IsBoosted() const
{
	return GetValue() > 21;;
}

void GenericPlayer::Bust() const
{
	setlocale(LC_ALL, "Russian");
	std::cout << "У игрока " << name << "перебор =(" << std::endl;
}


