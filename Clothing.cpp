#include "Clothing.h"


Clothing::Clothing()
{
    this->colour = this->description = this->location = this->size = this->name = "";
}

Clothing::Clothing(TypeCloth type, string name, string colour, string size, string location, string description)
{
    clothType = type;
    this->colour = colour;
    this->description = description;
    this->location = location;
    this->size = size;
    this->name = name;
}

void Clothing::setType(TypeCloth type)
{
    clothType = type;
}

void Clothing::setColour(string colour)
{
    this->colour = colour;
}

void Clothing::setDescription(string description)
{
    this->description = description;
}

void Clothing::setLocation(string location)
{
    this->location = location;
}

void Clothing::setName(string name)
{
    this->name = name;
}

void Clothing::setSize(string size)
{
    this->size = size;
}

void Clothing::print()
{
    string type = GetTypeStr(clothType);
    cout << "Name: " << name << "\nType: " << type << "\nColour: " << colour << "\nDescription: " << description <<
        "\nLocation: " << location << "\nSize: " << size << endl << endl;
}

string Clothing::GetTypeStr(int t)
{
    switch (t)
    {
    case 1: return "SHIRT";
    case 2: return "JEANS";
    case 3: return "JACKET";
    case 4: return "PANTH";
    case 5: return "SHOOES";
    default:return "NaN";
    }
}

TypeCloth Clothing::getType()
{
    return this->clothType;
}

string Clothing::getColour()
{
    return this->colour;
}

string Clothing::getDescription()
{
    return this->description;
}

string Clothing::getLocation()
{
    return this->location;
}

string Clothing::getName()
{
    return this->name;
}

string Clothing::getSize()
{
    return this->size;
}