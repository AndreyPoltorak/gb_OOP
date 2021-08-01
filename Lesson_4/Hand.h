#pragma once
#include "Card.h"
#include <vector>
#include <set>

class Hand
{
	std::vector<Card*> Cards{};
public:
	Hand() {}
	void Add(Card* card_);
	void Clear();
	int GetValue() const;

};

