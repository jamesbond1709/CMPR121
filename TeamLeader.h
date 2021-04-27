#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"
using namespace std;

class TeamLeader : public ProductionWorker
{
private:

    double bonusAmount;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    
    //constructor
    TeamLeader();


    void setBonusAmount(double a);
    double getBonusAmount() const;
    void setRequiredTrainingHours(int h);
    int getRequiredTrainingHours() const;
    void setAttendedTrainingHours(int h);
    int getAttendedTrainingHours() const;

    friend ostream& operator << (ostream& outs, const TeamLeader& obj);
};

#endif

TeamLeader::TeamLeader() : ProductionWorker(), bonusAmount(0.0), requiredTrainingHours(0), attendedTrainingHours(0)
{}


//**********************************************
//                  Mutator                    *
//**********************************************

//precondition: NA
//postcondition: set initial bonusAmount
void TeamLeader::setBonusAmount(double bonus)
{
    //validate bonus, bonus must > 0
    if (bonus < 0)
        bonusAmount = 0.0;
    //else the value is valid
    else
        bonusAmount = bonus;
}


//precondition: NA
//postcondition: set initial bonusAmount
void TeamLeader::setRequiredTrainingHours(int h)
{
    //validate training hours,  must >= 0
    if (h < 0)
        requiredTrainingHours = 0;
    //else the value is valid
    else
        requiredTrainingHours = h;
}


//precondition: NA
//postcondition: set attendedTrainingHours
void TeamLeader::setAttendedTrainingHours(int h)
{
    //validate hour, hour must >= 0
    if (h < 0)
        attendedTrainingHours = 0;
    else
        attendedTrainingHours = h;
}

//**********************************************
//                  Accessor                   *
//**********************************************


//precondition: NA
//postcondition: get bonusAmount
double TeamLeader::getBonusAmount() const
{
    return bonusAmount;
}

//precondition: NA
//postcondition: get requiredTrainingHours
int TeamLeader::getRequiredTrainingHours() const
{
    return requiredTrainingHours;
}


//precondition: NA
//postcondition: get attendedTrainingHours
int TeamLeader::getAttendedTrainingHours() const
{
    return attendedTrainingHours;
}

//**** overwrite operator << **** 
ostream& operator<< (ostream& outs, const TeamLeader& obj)
{
    outs << "Team Leader\n";
    outs << "\tName                   : " << obj.getName() << '\n';
    outs << "\tNumber                 : " << obj.getEmployeeNumber() << '\n';
    outs << "\tHire date              : " << obj.getHireDate() << '\n';
    outs << "\tShift                  : " << (obj.getShift() == 1 ? "day" : "night") << '\n';
    outs << "\tHourly pay rate        : $" << obj.getHourlyPayRate() << '\n';
    outs << "\tMonthly bonus amount   : $" << obj.getBonusAmount() << '\n';
    outs << "\tRequired training hours: " << obj.getRequiredTrainingHours() << '\n';
    outs << "\tAttended training hours: " << obj.getAttendedTrainingHours();
    return outs;
}





