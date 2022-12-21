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
	
	void SetType(TypeCloth);
	void SetName(string);
	void SetDescription(string);
	void SetLocation(string);
	void SetColour(string);
	void SetSize(string);

	TypeCloth GetType();
	string GetName();
	string GetDescription();
	string GetLocation();
	string GetColour();
	string GetSize();

	string GetTypeStr(int);

	void print();
};

