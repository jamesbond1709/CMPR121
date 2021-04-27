#ifndef MILTIME_H_
#define MILTIME_H_

#include "Time.h"
#include "string"

using namespace std;

class MilTime : public Time
{

private:

    //Validate input Military hour <=24 , minute <= 59
    //precondition: N/A
    //PostCondition: returns an integer value within range (startRannge and endRange)
    static int inputHourMinuteMilTime(istream& ins, string prompt, int startRange, int endRange);

    //Validate input Second, Second <= 60
    //precondition: N/A
    //PostCondition: returns an integer value within range (startRannge and endRange)
    static int inputSecond(istream& ins, string prompt, int startRange, int endRange);

protected:

    int milHours;            // Military hours (0 - 2359)
    int milSeconds;        // Military seconds (0 - 59)

public:

 //**********************************************
 //               Constructor                   *
 //**********************************************

    //precondition: N/A
    //PostCondition: initial value for milHours = 0, milSeconds = 0
    MilTime() : Time()
    {
        milHours = 0;
        milSeconds = 0;
    }

    // Parameterized Constructor
    //precondition: hour in range 0..24 , mSec in range 0..60
    //PostCondition: initial value for milHours = 0, milSeconds = 0
    MilTime(int mHrs, int mSec) : Time(0, 0, 0)
    {
        setTime(mHrs, mSec);
    }


//**********************************************
//                  Mutator                    *
//**********************************************

   //precondition: const int, const int
    //PostCondition:  This function evaluates the attributes to check whether it
    //                is a valid military time.
    bool isMilTime(const int, const int);

    //precondition: const int, const int
    //PostCondition: If the values passed to this function are valid, converted to standard time.
    void setTime(const int, const int);

 //**********************************************
 //                  Mutator                    *
 //**********************************************


    //precondition: N/A
    //PostCondition: formats and returns the hour in military format.
    string getHour() const;

    //precondition: const int, const int
    //PostCondition: formats and returns the hour in standard format.
    string getStandHr() const;


    //precondition: N/A
    //PostCondition: This function converts a military time to standard time,
    //               and stored in the hour, minand sec variables of the Time class.
    void convertMilTime();

    //**** overwrite operator >> **** 
    friend istream& operator >> (istream& ins, MilTime& obj);
};

#endif