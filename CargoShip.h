#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include <iostream>
#include <string>
#include "Ship.h"

using namespace std;


class CargoShip : public Ship {

private:
    int maxTonne;

public:

    
    //**********************************************
    //               Constructor                   *
    //**********************************************

   //precondition: NA
   //postcondition: set initial value for maxTonne
    CargoShip() : Ship() {
        maxTonne = 0;
    }

   //overloaded constructor
   //precondition: MaxCapacity > 0
   //postcondition: get  MaxCapacity
    CargoShip(int maxCap, string n, string y) :
        Ship(n, y) {
        maxTonne = maxCap;
    }


   //**********************************************
   //                  Accessor                   *
   //**********************************************
   //precondition: NA
   //postcondition: get  MaxCapacity
    int getMaxCapacity() const {
        return maxTonne;
    }

    
    //**********************************************
    //                   Mutator                   *
    //**********************************************

    //precondition: maxCap > 0
    //postcondition: set value for MaxCapacity
    void setMaxCapacity(int maxCap) {
        maxTonne = maxCap;
    }

    //precondition: N/A
    //postcondition: display name of Cargo Ship and MaxCapacity
    //overridden print() function
    virtual void print() const;

};

#endif
