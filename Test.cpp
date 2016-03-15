#include "Card.h"
#include "DeckofCards.h"
#include <iostream>

using namespace std;

int main(){
	
	DeckofCards deck1;
	
	deck1.reset();
	Card card1(1, "Red");  //initialise our object with the number and colour
	card1.print();   //display colour number on the screen
	
	cin.get();
}