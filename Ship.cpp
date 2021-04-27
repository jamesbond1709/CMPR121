#include "Ship.h"

Ship::Ship(string n, string y)
{
    shipName = n;
    int yr = atoi(y.c_str());
    shipYear = y;
}

void Ship::print() const
{
    cout << "Name of Ship: " << shipName << endl;
    cout << "Year Built: " << shipYear << endl;
}
