#include "Card.h"

void Card::Flip()
{
	if (Flip_Card)
	{
		Flip_Card = false;
	}
	else
	{
		Flip_Card = true;
	}
}

int Card::GetValue()
{
	return VauleCard_Card;
}
