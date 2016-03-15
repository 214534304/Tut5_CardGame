#include "DeckofCards.h"
#include "Card.h"

void DeckofCards::reset(){
	//Remove the old deck
	delete C;
   
	//creat a new deck
	C = new Card*[20];
	for (int i = 0; i < 10; i++){
		C[i] = new Card(i, "Red");
		C[i + 10] = new Card(i + 10, "Black");
	}
}

void DeckofCards::shuffle(){
	int num1, num2;
	for (int i = 0; i < 50; i++){


	}
}

DeckofCards::DeckofCards()
{
	C = new Card* [20];
	for (int i = 0; i < 10;i++){						
		C[i] = new Card(i, "Red");
		C[i + 10] = new Card(i + 10, "Black");
	}

}


DeckofCards::~DeckofCards()
{
}
