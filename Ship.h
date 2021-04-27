#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


class Ship
{

protected:
    string shipName;
    string shipYear;

public:
    
//**********************************************
//               Constructor                   *
//**********************************************

   //precondition: NA
   //postcondition: set initial value for ship name and year
    Ship() {
        shipName = "unknown";
        shipYear = "1900";
    }

    //precondition: shipName is NOT NULL, year >= 1900
    //postcondition: set initial value for ship name and year
    Ship(string n, string y);



//**********************************************
//                  Accessor                   *
//**********************************************

   //precondition: NA
   //postcondition: get  shipName
    string getName() const {
        return shipName;
    }

    //precondition: NA
    //postcondition: get  shipYear
    string getYear() const {
        return shipYear;
    }


//**********************************************
//                  Mutator                    *
//**********************************************

    //precondition: Name is NOT NULL
    //postcondition: set  shipName
    void setName(string n) {
        shipName = n;
    }

    //precondition: year >= 1900
    //postcondition: set  shipYear
    void setYear(string y) {
        shipYear = y;
    }

    //precondition: N/A
    //postcondition: display  Ship information
    virtual void print() const;

};

#endif
