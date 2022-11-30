#pragma once
#include <iostream>
#include <string>

using namespace std;

enum TypeCloth
{
	NaN = 0,
	SHIRT=1, 
	JEANS=2, 
	JACKET=3,
	PANTH=4,
	SHOOES=5
};

class Clothing
{
private:
	TypeCloth clothType;
	string name;
	string description;
	string location;
	string colour;
	string size;

public:
	Clothing();
	Clothing(TypeCloth, string, string, string, string, string);
	
	void setType(TypeCloth);
	void setName(string);
	void setDescription(string);
	void setLocation(string);
	void setColour(string);
	void setSize(string);

	TypeCloth getType();
	string getName();
	string getDescription();
	string getLocation();
	string getColour();
	string getSize();

	string GetTypeStr(int);

	void print();
};

