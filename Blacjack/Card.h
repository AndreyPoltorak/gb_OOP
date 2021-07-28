#pragma once

enum Suit
{
	HEARTS, //черви
	SPADES, //пики
	DIAMONDS, //буби
	CLUDS // крести
};
enum VauleCard
{
	ACE = 1,
	KING = 10,
	QUEEN = 10,
	JACK = 10,
	TEN = 10,
	NINE = 9,
	EIGHT = 8,
	SEVEN = 7,
	SIX = 6,
	FIVE = 5,
	FOUR = 4,
	THREE = 3,
	TWO = 2
};

class Card
{
	Suit Suit_Card{};
	VauleCard VauleCard_Card{};
	bool Flip_Card{};//true рубашка вниз карта открыта)
public:
	Card(Suit suit_, VauleCard value_card_, bool flip_) :Suit_Card(suit_), VauleCard_Card(value_card_), Flip_Card(flip_)
	{}
	void Flip();
	int GetValue();

};

