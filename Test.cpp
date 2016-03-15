#include "Card.h"
#include <iostream>

using namespace std;

int main(){
	Card card1(1, "Red");  //initialise our object with the number and colour
	card1.print();   //display colour number on the screen
	cin.get();
}