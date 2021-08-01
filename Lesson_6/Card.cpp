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

std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
    
        const std::string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
        const std::string SUITS[] = { "c", "d", "h", "s" };

        if (aCard.Flip_Card)
        {
            os << RANKS[aCard.VauleCard_Card] << SUITS[aCard.Suit_Card];
        }
        else
        {
            os << "XX";
        }

        return os;
    

}
