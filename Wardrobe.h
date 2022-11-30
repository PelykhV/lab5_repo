#pragma once
#include "Clothing.h"
#include <iostream>
#include <string>

using namespace std;

class Wardrobe
{
private:
	Clothing* clothings;
	int sizeItem;

public:
	Wardrobe();
	Wardrobe(int);
	
	int goOut(Clothing*);
	TypeCloth SetType();

	~Wardrobe();
};
