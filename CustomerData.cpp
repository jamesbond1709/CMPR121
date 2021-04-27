#include "CustomerData.h"

#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

ostream& operator<<(ostream& outs, const CustomerData& obj)
{
	outs << "\n\tID number    : " << obj.getCustomerNumber();
	outs << "\n\tLast name    : " << obj.getLastName();
	outs << "\n\tFirst name   : " << obj.getFirstName();
	outs << "\n\tAddess       : " << obj.getAddress();
	outs << "\n\t               " << obj.getCity() << ", " << obj.getState() << " " << obj.getZip();
	outs << "\n\tPhone        : " << obj.getPhone();
	outs << "\n\tMailing list : " << obj.getMailingList() << "(" << (obj.getMailingList() ? "yes" : "no") << ")";
	return outs;
}
