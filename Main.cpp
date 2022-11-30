#include "Wardrobe.h"
#include<iostream>

using namespace std;

int length;
Wardrobe w;
Clothing* clothings;

int Menu();
void Start();
void CallGoOut();
void PrintClothings();
void FillArrayClothingsCustom();
void FillArrayClothingsDefault();

int main()
{
	Start();
}

void Start()
{
	int choice;
	do
	{
		choice = Menu();
		switch (choice)
		{
		case 1: FillArrayClothingsDefault(); break;
		case 2: FillArrayClothingsCustom(); break;
		case 3: CallGoOut(); break;
		case 4: PrintClothings(); break;
		case 0: break;
		default:break;
		}
	} while (choice != 0);
}

int Menu()
{
	system("cls");
	int ch;
	cout << "1 - Fill out of an array of Clothings (by default)" << endl;
	cout << "2 - Fill out of an array of Clothings (Custom)" << endl;
	cout << "3 - Call method GoOut(Clothings*)" << endl;
	cout << "4 - Print Wardrobe" << endl;
	cout << "0 - Exit" << endl;
	cout << "Make your choice...";
	cin >> ch;
	return ch;
}

void FillArrayClothingsCustom()
{
	system("cls");
	string name, color, desc, locate, size;
	cout << "Input clothings size: ";
	cin >> length;
	w = Wardrobe(length);
	clothings = new Clothing[length];
	for (int i = 0; i < length; i++)
	{
		cout << i + 1 << " item:" << endl;
		cout << "Input Type of clothing: ";
		clothings[i].setType(w.SetType());
		cout << "Input Name of clothing: ";
		cin >> name;
		clothings[i].setName(name);
		cout << "Input Size of clothing: ";
		cin >> size;
		clothings[i].setSize(size);
		cout << "Input Description of clothing: ";
		cin >> desc;
		clothings[i].setDescription(desc);
		cout << "Input Located of clothing: ";
		cin >> locate;
		clothings[i].setLocation(locate);
		cout << "Input Color of clothing: ";
		cin >> color;
		clothings[i].setColour(color);
	}
	cout << "Success! Array of Clothing was Filled." << endl << endl;
	system("pause");
}

void FillArrayClothingsDefault()
{
	system("cls");
	length = 4;
	w = Wardrobe(length);
	TypeCloth type;
	clothings = new Clothing[length];
	
	clothings[0].setName("Panth");
	clothings[0].setDescription("This is classic panth");
	clothings[0].setLocation("Lviv");
	clothings[0].setSize("L");
	clothings[0].setType(type = PANTH);
	clothings[0].setColour("Black");

	clothings[1].setName("Shirt");
	clothings[1].setDescription("This is lassic shirt");
	clothings[1].setLocation("Lviv");
	clothings[1].setSize("L");
	clothings[1].setType(type = SHIRT);
	clothings[1].setColour("White");

	clothings[2].setName("Jacket");
	clothings[2].setDescription("This is sport jacket");
	clothings[2].setLocation("Lviv");
	clothings[2].setSize("M");
	clothings[2].setType(type = JACKET);
	clothings[2].setColour("Red");

	clothings[3].setName("Sneakers");
	clothings[3].setDescription("This is sneakers for training");
	clothings[3].setLocation("Lviv");
	clothings[3].setSize("42");
	clothings[3].setType(type = SHOOES);
	clothings[3].setColour("Blue");
	cout << "Success! Array of Clothing was Filled." << endl << endl;
	system("pause");
}

void CallGoOut()
{
	system("cls");
	int typeQty = w.goOut(clothings);
	if (typeQty > 3)
	{
		cout << "The person can go outside!!!" << "\nNumber Type of Clothings is: " << typeQty << endl << endl;
	}
	else
	{
		cout << "The person can NOT go outside..." << "\nNumber Type of Clothings is: " << typeQty << endl << endl;
	}
	system("pause");
}

void PrintClothings()
{
	system("cls");
	if (length != 0)
	{
		for (int i = 0; i < length; i++)
		{
			cout << i + 1 << " Item:" << endl;
			clothings[i].print();
		}
	}
	else cout << "Array of Clothings are EMPTY... Try to fill it in!" << endl;
	system("pause");
}