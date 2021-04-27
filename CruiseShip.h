#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include <iostream>
#include <string>
#include "Ship.h"

using namespace std;


class CruiseShip : public Ship {
private:
    int maxPassenger;

public:

    //**********************************************
    //               Constructor                   *
    //**********************************************

   //precondition: NA
   //postcondition: set initial value for maxPassenger = 0
    CruiseShip() : Ship() {
        maxPassenger = 0;
    }

    //precondition: maxPassenger > 0 ; name NOT NULL; and year > 1900 
    //postcondition: set initial value for ship Name, max passenger, year
    // derived from Ship class
    CruiseShip(int maxNum, string n, string y) : Ship(n, y) {
        maxPassenger = maxNum;
    }

   //**********************************************
   //                  Accessor                   *
   //**********************************************
   
   
   //precondition: NA
   //postcondition: get  MaxPassengers
    int getMaxPassengers() const {
        return maxPassenger;
    }

    
   //**********************************************
   //                  Mutator                    *
   //**********************************************

   //precondition: maxNum > 0
   //postcondition: set  MaxPassengers
    void setMaxPassengers(int maxNum) {
        maxPassenger = maxNum;
    }

   //precondition: N/A
   //postcondition: display  CruiseShip information
   //overridden print() function
    virtual void print() const;
};

#endif

