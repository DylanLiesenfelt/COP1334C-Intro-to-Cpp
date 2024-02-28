/*
    Author: Dylan Liesenfelt
    Date: Febuary 14th, 2024
    Program: iMobile bill calculator
    File: iMobile.cpp

    This program prompts the user to input thier package and how much data they used during the billing cycle.
    It checks to make sure that those inputs are valid, if they are not valid displays error message.
    After this based on the user input calculates the total amount for thier bill during that billing cycle.

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

//declares main function of the program
int main() {

    //------------ VARIABLES ----------
    //declares constants doubles for the different packages: base package cost, additional cost per GB for packages A & B
    const double PLAN_A_COST = 39.99, PLAN_B_COST = 59.99, PLAN_C_COST = 69.99,
    PLAN_A_ADDITONAL_COST = 10.00, PLAN_B_ADDITONAL_COST = 5.00;
    //declares constant integers variables for the data cap for package A & B
    const int PLAN_A_DATA_CAP = 4, PLAN_B_DATA_CAP = 8;
    //declares integer for packageCHoice variable: used for menu selection
    int packageChoice = 0;
    //declares doubles for total and dataUsage: total is used for total amount for bill, dataUsage is used for user input for data used in billing cycle
    double total = 0, dataUsage = 0;
    //declares string for phrase used to display the total amount 
    string totalPrint = "The total amount due is $";

    //------------ INPUT ------------
    //title for program
    cout << "iMobile Bill Calculator ..." << endl << endl;
    //menu display with directory options
    cout << "Select a subscription package:";
    cout << endl << setw(20) << "1. Package A" << endl;
    cout << setw(20) << "2. Package B" << endl;
    cout << setw(20) << "3. Package C" << endl;
    cout << "Package: ";
    //updates packageChoice to user input 
    cin >> packageChoice;

    //input validation for packageChoice: checks if 1,2,3 is not user input display error message
    if (packageChoice != 1 && packageChoice != 2 && packageChoice != 3) {
        cout << "Error ... Invalid package. Try again.";
    }

    //input is valid continues here
    else {
        //updates dataUsage to user input
        cout << endl << "How many gigabytes of data were used? ";
        cin >> dataUsage;

        //----------- OUTPUT ------------
        //input validation: checks if data usage is greater than or equal to 0
        if (dataUsage >= 0) {
            
            //switch for menu options based off packageChoice variable
            switch (packageChoice) {

                //package A
                case 1:
                    //checks if dataUsage surpasses package data cap
                    if (PLAN_A_DATA_CAP < dataUsage) {
                        //calculates bill total: base plan cost + (data used over the cap * the cost per GBs over data cap)
                        total = PLAN_A_COST + ((dataUsage - PLAN_A_DATA_CAP) * PLAN_A_ADDITONAL_COST);
                        //displays total bill amount
                        cout << endl << totalPrint << fixed << setprecision(2) << total;
                        break;
                    }
                    //if not over the packages data cap
                    else {
                        //updates total to base package cost
                        total = PLAN_A_COST;
                        //displays total bill amount
                        cout << endl << totalPrint << fixed << setprecision(2) << total;
                        break;
                    }

                //package B
                case 2:
                    //checks if dataUsage surpasses package data cap
                    if (PLAN_B_DATA_CAP < dataUsage) {
                        //calculates bill total: base plan cost + (data used over the cap * the cost per GBs over data cap)
                        total = PLAN_B_COST + ((dataUsage - PLAN_B_DATA_CAP) * PLAN_B_ADDITONAL_COST);
                        //displays total bill amount
                        cout << endl << totalPrint << fixed << setprecision(2) << total;
                        break;
                    }

                    else {
                        //updates total to base package cost
                        total = PLAN_B_COST;
                        //displays total bill amount
                        cout << endl << totalPrint << fixed << setprecision(2) << total;
                        break;
                    }

                //package C
                case 3: 
                    //package C has unlimited data, no additional cost total updates to base plan cost
                    total = PLAN_C_COST;
                    //displays total bill amount
                    cout << endl << totalPrint << fixed << setprecision(2) << total;
                    break;
            }
        }

        //if dataUsage is invalid continues here, displays error message
        else {
            cout << "Error ... Invalid gigabytes entered. Try Again.";
        }
    }

    //program complete returns 0 to main function
    return 0;
}