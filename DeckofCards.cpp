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
  
//Picking two random cards from the deck and swap this 50 times to shuffle the cards

void DeckofCards::shuffle(){
	int num1, num2,temp;
	for (int i = 0; i < 50; i++){
		if (num1 = num2)
			break;
		else{
			temp = num1;
			num1 = num2;
			num2 = temp;
		}

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
