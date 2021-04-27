#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

// GradedActivity class declaration

class GradedActivity
{

protected:

   double score;   // To hold the numeric score

public:

 //**********************************************
 //               Constructor                   *
 //**********************************************
 
   //Default Constructor
   //precondition: NA
   //postcondition: set initial value
   GradedActivity()
      { score = 0.0; }

   // Constructor
   //precondition: NA
   //postcondition: set initial value score = 0
   GradedActivity(double s)
      { score = s; }

 
//**********************************************
//                  Mutator                    *
//**********************************************

   //precondition: score > 0
   //postcondition: set  value score
   void setScore(double s) 
      { score = s; }
   

 //**********************************************
 //                  Accessor                    *
 //**********************************************

   //precondition: N/A
   //postcondition: get  value score
   double getScore() const
      { return score; }
   
   //precondition: N/A
   //postcondition: calculate the grade based on Score A, B, C, D, F
   char getLetterGrade() const;
};

#endif 