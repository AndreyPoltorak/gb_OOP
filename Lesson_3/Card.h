#pragma once

enum Suit
{
	HEARTS, //�����
	SPADES, //����
	DIAMONDS, //����
	CLUDS // ������
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
	bool Flip_Card{};//true ������� ���� ����� �������)

	void Flip();
	int GetValue();

};

