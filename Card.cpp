#include "Card.h"

void Card::setColour(string x){
	code = x;
}

string Card::getColour(){
	return code;
}

void  Card::setNumber(int y){
	num = y;
}

int Card::getNumber(){
	return num;               
}

void Card::print (){
	cout << code << num << endl;
}

Card::Card(int a, string b)
{
	num = a;
	code = b;
}


Card::~Card()
{
}
