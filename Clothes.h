#pragma once
#include <string>;
#include "ClothesWeight.h";
class Clothes
{
	static int counter;
	bool man;
	ClothesWeight* cl;
	std::string top;
	std::string bottom;
	std::string outerwear;
public:
	Clothes(bool man) { this->man = man; }
	void createDress();
	void createTrousers();
	Clothes* generate(); //generates and push to cl, if combination already exists, return from cl, else return our combination from cl
};

