// Specification file for the Time class
#ifndef TIME_H
#define TIME_H

class Time
{

protected:
   int hour;
   int minutes;
   int sec;

public:

    //**********************************************
    //               Constructor                   *
    //**********************************************
   Time() 
      { hour = 0; minutes = 0; sec = 0; }
   
   // Constructor
   //precondition: hour >0, minute >=0, second >= 0
   //postcondition: set value for hour minute seconds
   Time(int h, int m, int s) 
      { hour = h; minutes = m; sec = s; }


//**********************************************
//                  Accessor                   *
//**********************************************
   int getHour() const
      { return hour; }

   int getMin() const
      { return minutes; }

   int getSec() const
      { return sec; }
};


#endif