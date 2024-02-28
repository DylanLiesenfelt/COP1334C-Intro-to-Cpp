/*
    Author: Dylan Liesenfelt
    Date: January 31, 2024
    Program: MPG calculator
    File: unit3endOfClass.cpp
    This program prompts the user for how many miles they have driven 
    and how many gallons of gas they have filled and returns thier MPG
*/

#include <iostream>
#include <iomanip>

using namespace std;

//declares main function of the program
int main() {

    //Assigns vars for user input
    double gallonsFilled = 0, milesDriven = 0;

    //Header
    cout << "Miles per Gallon Calculator ..." << endl << endl;

    //User input for gallons filled of gas and assigns that value to var gallonsFilled
    cout << "How many gallons of gas have been filled since your car last ran out of gas? ";
    cin >> gallonsFilled;

    //User input for miles driven and assigns that value to var gallonsFilled as a double
    cout << endl << "How many miles have you driven since adding gas? ";
    cin >> milesDriven;

    //calcs the MPG from milesDriven divded by gallons filled and outputs the data to 1 sig fig
    double mpg = milesDriven / gallonsFilled;
    cout << fixed << setprecision(1);
    cout << endl << "Your car can run " << mpg << " miles per gallon of gas";

    return 0;
}
