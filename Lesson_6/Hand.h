#pragma once
#include "Card.h"
#include <vector>
#include <set>

class Hand
{
	
public:
	std::vector<Card*> Cards{};
	Hand() {}
	void Add(Card* card_);
	void Clear();
	int GetValue() const;

};

