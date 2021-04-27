#include "PreferredCustomer.h"

using namespace std;



double PreferredCustomer::getDiscount(double p)
{
    //use if/else if statements to determine
  //which discount value to assign
    if (p >= 2000)
        return 0.1;
    else if (p >= 1500)
        return 0.07;
    else if (p >= 1000)
        return 0.06;
    else if (p >= 500)
        return 0.05;
    else
        return 0.0;
}

