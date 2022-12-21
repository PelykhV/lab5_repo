#include "Wardrobe.h"
#include "Clothing.h"

Wardrobe::Wardrobe()
{
	sizeItem = 0;
	this->clothings = new Clothing[sizeItem];
}

Wardrobe::Wardrobe(int size)
{
	this->sizeItem = size;
	if (sizeItem > 0)
	{
		this->clothings = new Clothing[sizeItem];
	}
	else this->clothings = new Clothing[0];
}

int Wardrobe::GoOut(Clothing* cs)
{
	int type1=0, type2=0, type3=0, type4=0, type5=0, all = 0;
	if (sizeItem != 0)
	{
		for (int i = 0; i < sizeItem; i++)
		{
			switch ((int)cs[i].getType())
			{
			case 1:type1++; if (type1 > 1)type1 = 1; break;
			case 2:type2++; if (type2 > 1)type2 = 1; break;
			case 3:type3++; if (type3 > 1)type3 = 1; break;
			case 4:type4++; if (type4 > 1)type4 = 1; break;
			case 5:type5++; if (type5 > 1)type5 = 1; break;
			default:break;
			}
		}
		all = type1 + type2 + type3 + type4 + type5;
		return all;
	}
	else return 0;
}

TypeCloth Wardrobe::SetType()
{
	TypeCloth type;
	int t;
	do
	{
		cout << "\n\n1 - SHIRT" << endl;
		cout << "2 - JEANS" << endl;
		cout << "3 - JACKET" << endl;
		cout << "4 - PANTH" << endl;
		cout << "5 - SHOOES" << endl;
		cout << "Make your choice...";
		cin >> t;
		switch ((int)t)
		{
		case 1: return type = SHIRT;
		case 2: return type = JEANS;
		case 3: return type = JACKET;
		case 4: return type = PANTH;
		case 5: return type = SHOOES;
		default:return type = NaN;
		}
	} while (t != 0);
}

Wardrobe::~Wardrobe()
{
	delete[] clothings;
}
