#pragma once
#include "Card.h"
class DeckofCards
{

public:
	void reset();
	void shuffle();
	Card** C;


	DeckofCards();
	~DeckofCards();
};

