#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{

private:
    string employeeName;
    int employeeNumber;
    string hireDate;

public:

//**********************************************
//               Constructor                   *
//**********************************************

    //precondition: NA
    //postcondition: set initial value for name, employeeNumber, and Hired date
    Employee() : employeeName("unknown"), employeeNumber(0), hireDate("unknown")
    {}

//**********************************************
//                  Mutator                    *
//**********************************************

    //precondition: employee Name is NOT NULL
    //postcondition: set initial value for employeeName
    void setName(string n)
    {
        employeeName = n;
    }

    //precondition: hireDate Name is NOT NULL
    //postcondition: set initial value for hireDate
    void setHireDate(string n)
    {
        hireDate = n;
    }

    //precondition: N/A
    //postcondition: set employeeNumber
    void setEmployeeNumber(int n)
    {
        employeeNumber = n;
    }

//**********************************************
//                  Accessor                   *
//**********************************************

    //precondition: N/A
    //postcondition: get employeeName
    string getName() const
    {
        return employeeName;
    }



    //precondition: N/A
    //postcondition: get employeeNumber
    int getEmployeeNumber() const
    {
        return employeeNumber;
    }

    //precondition: N/A
    //postcondition: get hireDate
    string getHireDate() const
    {
        return hireDate;
    }
};


#endif