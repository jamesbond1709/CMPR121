#include "CargoShip.h"
#include "Ship.h"

void CargoShip::print() const
{
    cout << "Name Cargo Ship: " << shipName << endl;
    cout << "Max Capacity: " << maxTonne << endl;
}