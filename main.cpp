
// Date: 04-23-2021
// Description: Chapter 15 Assignment

#include <ctime>
#include <iostream>
#include <stdio.h>
#include "string.h"
#include "input.h"
#include "cctype"
#include <iomanip>
#include "Employee.h"          // Challenge 3
#include "ProductionWorker.h"  // Challenge 3
#include "TeamLeader.h"        // Challenge 3
#include "Time.h"              // Challenge 4
#include "MilTime.h"              // Challenge 4
#include "GradedActivity.h"    // Challenge 6
#include "Essay.h"    // Challenge 6
#include "PersonData.h"        // Challenge 7, 8
#include "CustomerData.h"      // Challenge 7, 8
#include "PreferredCustomer.h" // Challenge    8
#include "CruiseShip.h"
#include "Ship.h"
#include "CargoShip.h"

using namespace std;


int menuOption();


void Challenge3();
void Challenge4();
void Challenge6();
void Challenge7();
void Challenge8();
void Challenge12();


//**********************************************
//             Main function                   *
//**********************************************
int main()
{
    do {
        switch (menuOption()) {
        case 0: exit(1); break;
        case 3: Challenge3(); break;
        case 4: Challenge4(); break;
        case 6: Challenge6(); break;
        case 7: Challenge7(); break;
        case 8: Challenge8(); break;
        case 12: Challenge12(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }        cout << "\n";
        system("pause");
    } while (true);
    return EXIT_SUCCESS;
}

//**********************************************
//             Menu option                     *
//**********************************************
int menuOption()
{
    system("cls");
    cout << "\n CMPR 121: Assignment 15 - Inheritance, Polymorphism, and Virtual Functions";
    cout << "\n" << string(50, '-');
    cout << "\n 0 . Exit";
    cout << "\n 3 . Challenge 3";
    cout << "\n 4 . Challenge 4";
    cout << "\n 6 . Challenge 6";
    cout << "\n 7 . Challenge 7";
    cout << "\n 8 . Challenge 8";
    cout << "\n 12. Challenge 12";
    cout << "\n" << string(50, '-') << '\n';
    return inputInteger("Option: ", 0, 12);
}

//Challenge 3: TeamLeader Class
void Challenge3()
{
    system("cls");
    cout << "\n=== Challenge 3: TeamLeader Class === \n\n";

    TeamLeader obj;

    obj.setName(inputString("Enter the employee's name: ", true));                   // from employee class
    obj.setEmployeeNumber(inputInteger("Enter the employee's number: ", true));      // from employee class
    obj.setHireDate(inputString("Enter the employee's hire date: ", true));          // from employee class
    obj.setShift(inputInteger("Enter the employee's shift (1-day or 2-night): ", 1, 2)); // from ProductionWorker class
    obj.setHourlyPayRate(inputDouble("Enter the employee's hourly pay rate: $", true));  // from ProductionWorker class
    obj.setBonusAmount(inputDouble("Enter the employee's monthly bonus amount: $", true)); // from TeamLeader class
    obj.setRequiredTrainingHours(inputInteger("Enter the employee's required training hours: ", true)); // from TeamLeader class
    obj.setAttendedTrainingHours(inputInteger("Enter the employee's attended training hours: ", true)); // from TeamLeader class

    cout << obj << '\n';
}

//Challenge 4: Time Format
void Challenge4()
{
    system("cls");
    cout << "\n=== Challenge 4: Time Format === \n";
    cout << "\n=== Military Time Fofrmat ===\n";
    int mHrs = 0;
    int mSecs = 0;

    // Create another MilTime object
    MilTime obj;

    cin >> obj;

    cout << "\n\nMilitary format:";
    cout << obj.getHour() << "\n\n";

    cout << "Standard format:";
    cout << obj.getStandHr() << "\n\n";

}


//Challenge 6: Essay Class
void Challenge6()
{
    system("cls");
    cout << "\n=== Challenge 6: Essay Class === \n\n";

    double gr = 0, sp = 0, lgth = 0, co = 0;
    gr = inputDouble("\tEnter the points(0..30) for grammar :", 0.0, 30.0);
    sp = inputDouble("\tEnter the points(0..20) for spelling:", 0.0, 20.0);
    lgth = inputDouble("\tEnter the points(0..20) for correct length:", 0.0, 20.0);
    co = inputDouble("\tEnter the points(0..30) for content:", 0.0, 30.0);

    Essay ess(gr,sp,lgth,co);

    cout << "\n-----------------------------------------" << endl;
    cout << "\nStudent's essay grade information" << endl;
    cout << "Grammar score         :" << ess.getGrammar() << endl;
    cout << "Spelling score        :" << ess.getSpelling() << endl;
    cout << "Correct length score  :" << ess.getLength() << endl;
    cout << "Content score         :" << ess.getContent() << endl;

    cout << "\n-----------------------------------------" << endl;
    cout << "Total score  :" << ess.getTotalScore() << endl;
    cout << "Letter grade :" << ess.getLetterGrade() << endl;
}

//Challenge 7: PersonData and CustomerData classe
void Challenge7()
{
    system("cls");
    cout << "\n=== Challenge 7: PersonData and CustomerData classes === \n\n";

    CustomerData C1;
    cout << "Input customer's data...\n";
    C1.setCustomerNumber(inputInteger("\tEnter an unique ID number: ", true));
    C1.setLastName(inputString("\tEnter the last name: ", true));
    C1.setFirstName(inputString("\tEnter the first name: ", true));
    C1.setAddress(inputString("\tEnter the address: ", true));
    C1.setCity(inputString("\tEnter the city: ", true));
    C1.setState(inputString("\tEnter the state: ", true));
    C1.setZip(inputString("\tEnter the zipcode: ", true));
    C1.setPhone(inputString("\tEnter the phone number: ", true));
    C1.setMailingList(inputInteger("\tBe on mailing list (0-no or 1-yes): ", 0, 1));

    cout << "\n===== Customer's Information =====\n";
    cout << C1 << '\n';
}


//Challenge 8: PreferredCustomer Class
void Challenge8()
{
    system("cls");
    cout << "\n=== Challenge 8: PreferredCustomer Class === \n\n";

    //create a default PreferredCustomer object
    PreferredCustomer customer1;


    //initial purchase amount=0
    double amount = 0.0;

    //All input data require NOT NULL and POSITIVE
    customer1.setCustomerNumber(inputInteger("ID number  :",true));
    customer1.setLastName(inputString       ("Last name  :", true));
    customer1.setFirstName(inputString      ("First name :", true));
    customer1.setAddress(inputString        ("Address    :", true));
    customer1.setCity(inputString           ("City       :", true));
    customer1.setState(inputString          ("State      :", true));
    customer1.setZip(inputString            ("Zip code   :", true));
    customer1.setPhone(inputString          ("Phone#     :", true));
    customer1.setMailingList(inputInteger("Be on mailing list (0-no or 1-yes) :", 0, 1));

    amount = inputDouble("The purchased amount: ", true);
    customer1.setPurchasesAmount(amount);

    char choice;
    do {
        choice = inputChar("\n\nContinue (Y-yes or N-no)? ", static_cast<string>("YN"));

        //If user select Yes
        if (choice == 'Y')
        {
            amount += inputDouble("The purchased amount: ", true);
            customer1.setPurchasesAmount(amount);
        }
        //If user select No
        else
        {
            break;
        }
    } while (choice != 'N');

    //print data

    cout << "\n-----------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "\n===== Customer information =====";
    cout << "\nLast Name: " << customer1.getLastName();
    cout << "\nFirst Name: " << customer1.getFirstName();
    cout << "\nAddress: " << customer1.getAddress();
    cout << "\nCity: " << customer1.getCity();
    cout << "\nState: " << customer1.getState();
    cout << "\nZIP Code: " << customer1.getZip();
    cout << "\nPhone Number: " << customer1.getPhone();
    cout << "\nCustomer Number: " << customer1.getCustomerNumber();
    cout << "\nMailing List Status: ";
    if (customer1.getMailingList())
        cout << "Yes";
    else
        cout << "No";
    cout << "\nTotal purchases: $" << customer1.getPurchasesAmount();
    cout << "\nDiscount Level: " << customer1.getDiscountLevel();

    cout << endl;
}


//Challenge 12: Ship , CruiseShip , and CargoShip Classes
void Challenge12()
{
    system("cls");
    cout << "\n=== Challenge 12: Ship , CruiseShip , and CargoShip Classes === \n\n";

    //use initialization list, dynamically allocating
    //each pointer to objects with default values
    Ship* ships[3] = {
                      new Ship(),
                      new CruiseShip(),
                      new CargoShip()
    };

    //Ship objects pointer
    ships[0]->setName("Queen Marry");
    ships[0]->setYear("1930");
    cout << "\n\n\n";


    //CruiseShip objects pointer
    CruiseShip* cruiseShip = static_cast<CruiseShip*>(ships[1]);
    cruiseShip->setName("Princess Cruise");
    cruiseShip->setMaxPassengers(50000);
    cout << "\n\n\n";



    //CargoShip objects pointer
    CargoShip* cgPoint = static_cast<CargoShip*>(ships[2]);
    cgPoint->setName("SS John W. Brown");
    cgPoint->setMaxCapacity(23820);
    cout << "\n\n\n"; 


    cout << "\n-----------------------------------------" << endl;
    //display data again
    //now using the base class pointers
    cout << "\n===== List of Ships =====\n";
    for (int i = 0; i < 3; i++) {
        ships[i]->print();
        cout << endl;
    }
}
