#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H

#include "Employee.h"

class ProductionWorker : public Employee
{

private:

	int shift;
	double hourlyPayRate;

public:

//**********************************************
//               Constructor                   *
//**********************************************

	//precondition: derived from  Employee class
	//postcondition: initial value
	ProductionWorker() : Employee(), shift(1), hourlyPayRate(0.0)
	{}


//**********************************************
//                  Accessor                   *
//**********************************************

	//precondition: N/A
	//postcondition: get  shift
	int getShift() const
	{
		return shift;
	}

	//precondition: N/A
	//postcondition: get  hourlyPayRate
	double getHourlyPayRate() const
	{
		return hourlyPayRate;
	}

//**********************************************
//                  Mutator                    *
//**********************************************

	//precondition: hourlyPayRate > 0
    //postcondition: set  MaxPassengers
	void setHourlyPayRate(double h = 0.0)
	{
		hourlyPayRate = h;
	}

	//precondition: shift = 1
	//postcondition: set  shift
	void setShift(int s = 1)
	{
		shift = s;
	}


	//**** overwrite operator >> **** 
	friend ostream& operator << (ostream& strm, const ProductionWorker& obj);
};


ostream& operator<< (ostream& strm, const ProductionWorker& obj)
{
	strm << "Employee\n";
	strm << "\tName           : " << obj.getName() << '\n';
	strm << "\tNumber         : " << obj.getEmployeeNumber() << '\n';
	strm << "\tHire date      : " << obj.getHireDate() << '\n';
	strm << "\tShift          : " << (obj.getShift() == 1 ? "day":"night") << '\n';
	strm << "\tHourly pay rate: $" << obj.getHourlyPayRate();
	return strm;
}



#endif