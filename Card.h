#pragma once
#include <iostream>
#include <string>      

using namespace std;

class Card
{

private:
	string code;                //colour variable
	int num;                    // number variable
public:
	//function prototype

	void setColour(string);
	string getColour();
	void  setNumber(int);
	int getNumber();              
	void print();
	Card(int,string);
	Card();
	~Card();
};

