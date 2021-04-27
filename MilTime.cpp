#include "MilTime.h"

#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

void MilTime::setTime(const int mHrs, const int mSec)
{
    //validate military time
    if (isMilTime(mHrs, mSec) == true)
    {
        milHours = mHrs;
        milSeconds = mSec;

        convertMilTime();
    }
    //if the input is not valid, display error
    else
    {
        cout << "Input Error:\n";
        cout << mHrs << ':' << mSec << " is no military time!\n";
        cout << "This program will now exit.\n";
        exit(0);
    }
}


bool MilTime::isMilTime(const int mHrs, const int mSec)
{
    bool isValidMilTime = true;

    //validate hour is correct
    if (mHrs < 0 || mHrs > 2359 || mHrs % 100 >= 60)
    {
        isValidMilTime = false;
    }

    //validate second is correct
    else if (mSec < 0 || mSec > 59)
    {
        isValidMilTime = false;
    }

    return isValidMilTime;
}


void MilTime::convertMilTime()
{
    //validate military hour
    if (milHours > 1259)
    {
        hour = (milHours - 1200) / 100;
    }
    //validate second 
    else if (milHours <= 59)
    {
        hour = 12;
    }
    //validate hour 
    else
    {
        hour = (milHours / 100);
    }

    minutes = milHours % 100;
    sec = milSeconds;
}


string MilTime::getHour() const
{
    stringstream ss;
    ss.str("");
    ss.clear(stringstream::goodbit);

    milHours < 10 ? ss << "000" << milHours << ':' :
        milHours < 100 ? ss << "00" << milHours << " hours and " :
        milHours < 1000 ? ss << '0' << milHours << " hours and " : ss << milHours << " hours and ";

    milSeconds < 10 ? ss << '0' << milSeconds << " seconds " : ss << milSeconds << " seconds";

    return ss.str();
}

string MilTime::getStandHr() const
{
    stringstream ss;
    ss.str("");
    ss.clear(stringstream::goodbit);

    hour < 10 ? ss << '0' << hour << ':' : ss << hour << ':';
    minutes < 10 ? ss << '0' << minutes << ':' : ss << minutes << ':';
    sec < 10 ? ss << '0' << sec : ss << sec;

    milHours >= 1200 ? ss << " P.M." : ss << " A.M";

    return ss.str();
}

istream& operator >> (istream& ins, MilTime& obj)
{
    int hour, second;
    //cout << "Enter the month(1...12): ";
    //ins >> m; //validation


    //validate input for month
    hour = MilTime::inputHourMinuteMilTime(ins, "Enter the military hours(0..2400): ", 0, 2400);

    //validate input for day
    second = MilTime::inputSecond(ins, "Enter the military seconds(0..59):", 0, 59);

    //milHours = mHrs;
   // milSeconds = mSec;
    obj.setTime(hour, second);
    //MilTime::convertMilTime();

    return ins;
}


//PreCondition: input hour 0..2400
//              startRange (integer) and endRange (integer)
//PostCondition:  validate hour 0..2400
//                returns an integer value within range (ins, prompt, prostartRannge and endRange)
int MilTime::inputHourMinuteMilTime(istream& ins, string prompt, int startRange, int endRange)
{

    int input;

    //loop until the input is valid
    do
    {
        cout << prompt;

        //if input is invalid
        if (!(ins >> input))
        {
            cout << "ERROR: Invalid input. Must be an integer type.\n";
            ins.clear();
            ins.ignore(999, '\n');
        }
        //else if input is out of range
        else if (!(input >= min(startRange, endRange) && input <= max(startRange, endRange)))
            cout << "ERROR: Invalid input. Must be from " << startRange << ".." << endRange << ".\n";
        //break if valid
        else if (input < 0 || input > 2359 || input % 100 >= 60)
        {
            cout << "ERROR: Invalid input format military time"<< "\n\n";
        }
        else
            break;
    } while (true);
    ins.clear();
    ins.ignore(999, '\n');
    return input;
}



//PreCondition: input second 0..59
//              startRange (integer) and endRange (integer)
//PostCondition:  validate second 0..59
//                returns an integer value within range (ins, prompt, prostartRannge and endRange)
int MilTime::inputSecond(istream& ins, string prompt, int startRange, int endRange)
{

    int input;

    //loop until the input is valid
    do
    {
        cout << prompt;

        //if input is invalid
        if (!(ins >> input))
        {
            cout << "ERROR: Invalid Second input. Must be an integer type.\n\n";
            ins.clear();
            ins.ignore(999, '\n');
        }
        //else if input is out of range
        else if (!(input >= min(startRange, endRange) && input <= max(startRange, endRange)))
            cout << "ERROR: Invalid Second input. Must be from " << startRange << ".." << endRange << ".\n\n";
        //break if valid
        else
            break;
    } while (true);
    ins.clear();
    ins.ignore(999, '\n');
    return input;
}
