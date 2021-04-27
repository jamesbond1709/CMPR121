#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H

#include <iostream>
#include "CustomerData.h"

using namespace std; 

class PreferredCustomer : public CustomerData
{
private:

    double purchasesAmount = 0.0;
    double discountLevel = 0.0;

    //function to get discountLevel
    //precondition: purchasesAmount > 0
    //postcondition: calculate discount percentage based on total purchasesAmount
    double getDiscount(double p);

public:

    //**********************************************
    //               Constructor                   *
    //**********************************************

    //precondition: default Constructor
    //postcondition: set initial value purchasesAmount, discountLevel
    PreferredCustomer() : CustomerData() {
        purchasesAmount = 0.0;
        discountLevel = 0.0;
    }

    //precondition: purchasesAmount > 0
    //postcondition: calculate discount level
    PreferredCustomer(double amt) : CustomerData() {
        purchasesAmount = amt;
        discountLevel = getDiscount(purchasesAmount);
    }

    //**********************************************
    //                  Accessor                   *
    //**********************************************

    //precondition: N/A
    //postcondition: get purchasesAmount
    double getPurchasesAmount() const {
        return purchasesAmount;
    }

    //precondition: N/A
    //postcondition: get discountLevel
    double getDiscountLevel() const {
        return discountLevel;
    }

    //**********************************************
    //                  Mutator                    *
    //**********************************************
    
    //precondition: N/A
    //postcondition:set the purchases amount and calculate discount
    void setPurchasesAmount(double pAmount) {
        purchasesAmount = pAmount;
        discountLevel = getDiscount(purchasesAmount);
    }

    

};


#endif
