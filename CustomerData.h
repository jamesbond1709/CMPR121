#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include <string>
#include "PersonData.h"


using namespace std;

class CustomerData : public PersonData
{

private:

	int customerNumber;
	bool mailingList;

public:

//**********************************************
//               Constructor                   *
//**********************************************

	//precondition: NA
	//postcondition: set initial value for CustomerData
	CustomerData(): PersonData(), customerNumber(0), mailingList(false)
	{}

//**********************************************
//                  Mutator                    *
//**********************************************

	//precondition: customerNumber > 0
	//postcondition: set value for customerNumber
	void setCustomerNumber(int s)
	{
		customerNumber = s;
	}

	//precondition: mailingList is 1 or 0
	//postcondition: set value for mailingList
	void setMailingList(bool s)
	{
		mailingList = s;
	}

//**********************************************
//                  Accessor                   *
//**********************************************

	//precondition: N/A
	//postcondition: get value customerNumber
	int getCustomerNumber() const
	{
		return customerNumber;
	}

	//precondition: N/A
	//postcondition: get value mailingList
	bool getMailingList() const
	{
		return mailingList;
	}

	//precondition: N/A
	//postcondition: operator<<
	friend ostream& operator<<(ostream& outs, const CustomerData& obj);
};




#endif

