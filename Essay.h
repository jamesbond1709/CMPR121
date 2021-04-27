#ifndef Essay_H_
#define Essay_H_

#include "GradedActivity.h"

class Essay : public GradedActivity
{

private:

	double grammar = 0.0;
	double spelling = 0.0;
	double length = 0.0;
	double content = 0.0;
	
public:

 //**********************************************
 //               Constructor                   *
 //**********************************************

   //precondition: NA
   //postcondition: set initial value
    Essay() : GradedActivity() {
        //set all member variables to 0
        grammar = 0;
        spelling = 0;
        length = 0;
        content = 0;
    }

    //precondition: all value MUST > 0
    //postcondition: set initial value
    //                GradedActivity equal = grammar + spelling + length + content
    Essay(int gr, int sp, int lgth, int co) :
        GradedActivity(gr + sp + lgth + co) {
        //set member variables
        grammar = gr;
        spelling = sp;
        length = lgth;
        content = co;
    }

    //**********************************************
    //                  Accessor                   *
    //**********************************************

    //precondition: NA
    //postcondition: get  grammar
    int getGrammar() const {
        return grammar;
    }

    //precondition: NA
    //postcondition: get  spelling
    int getSpelling() const {
        return spelling;
    }

    //precondition: NA
    //postcondition: get  length
    int getLength() const {
        return length;
    }

    //precondition: NA
    //postcondition: get  content
    int getContent() const {
        return content;
    }

    //precondition: NA
    //postcondition: get  score = grammar + spelling + length + content;
    int getTotalScore() {
        score = grammar + spelling + length + content;
        return score;
    }

};

#endif

