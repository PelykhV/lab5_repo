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
	int t1=0, t2=0, t3=0, t4=0, t5=0, all = 0;
	if (sizeItem != 0)
	{
		for (int i = 0; i < sizeItem; i++)
		{
			switch ((int)cs[i].getType())
			{
			case 1:t1++; if (t1 > 1)t1 = 1; break;
			case 2:t2++; if (t2 > 1)t2 = 1; break;
			case 3:t3++; if (t3 > 1)t3 = 1; break;
			case 4:t4++; if (t4 > 1)t4 = 1; break;
			case 5:t5++; if (t5 > 1)t5 = 1; break;
			default:break;
			}
		}
		all = t1 + t2 + t3 + t4 + t5;
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
