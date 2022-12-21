#include "Wardrobe.h"
#include<iostream>

using namespace std;

int length;
Wardrobe wardrobe;
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
	wardrobe = Wardrobe(length);
	clothings = new Clothing[length];
	for (int i = 0; i < length; i++)
	{
		cout << i + 1 << " item:" << endl;
		cout << "Input Type of clothing: ";
		clothings[i].SetType(wardrobe.SetType());
		cout << "Input Name of clothing: ";
		cin >> name;
		clothings[i].SetName(name);
		cout << "Input Size of clothing: ";
		cin >> size;
		clothings[i].SetSize(size);
		cout << "Input Description of clothing: ";
		cin >> desc;
		clothings[i].SetDescription(desc);
		cout << "Input Located of clothing: ";
		cin >> locate;
		clothings[i].SetLocation(locate);
		cout << "Input Color of clothing: ";
		cin >> color;
		clothings[i].SetColour(color);
	}
	cout << "Success! Array of Clothing was Filled." << endl << endl;
	system("pause");
}

void FillArrayClothingsDefault()
{
	system("cls");
	length = 4;
	wardrobe = Wardrobe(length);
	TypeCloth type;
	clothings = new Clothing[length];
	
	clothings[0].SetName("Panth");
	clothings[0].SetDescription("This is classic panth");
	clothings[0].SetLocation("Lviv");
	clothings[0].SetSize("L");
	clothings[0].SetType(type = PANTH);
	clothings[0].SetColour("Black");

	clothings[1].SetName("Shirt");
	clothings[1].SetDescription("This is lassic shirt");
	clothings[1].SetLocation("Lviv");
	clothings[1].SetSize("L");
	clothings[1].SetType(type = SHIRT);
	clothings[1].SetColour("White");

	clothings[2].SetName("Jacket");
	clothings[2].SetDescription("This is sport jacket");
	clothings[2].SetLocation("Lviv");
	clothings[2].SetSize("M");
	clothings[2].SetType(type = JACKET);
	clothings[2].SetColour("Red");

	clothings[3].SetName("Sneakers");
	clothings[3].SetDescription("This is sneakers for training");
	clothings[3].SetLocation("Lviv");
	clothings[3].SetSize("42");
	clothings[3].SetType(type = SHOOES);
	clothings[3].SetColour("Blue");
	cout << "Success! Array of Clothing was Filled." << endl << endl;
	system("pause");
}

void CallGoOut()
{
	system("cls");
	int typeQty = wardrobe.GoOut(clothings);
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
