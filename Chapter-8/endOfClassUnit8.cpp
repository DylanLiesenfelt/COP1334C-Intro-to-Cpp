/*
    Author: Dylan Liesenfelt
    Date:  , 2024
    Program: 
    File: .cpp
    This program prompts thereturns user for the length of a square and  the width
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

//declares main function of the program
int main() {

    int numberOfVehicles;

    struct Vehicle{
        string brand;
        string model;
        int year;
    };

    

    cout << "How many vehicles do you have";
    cin << numberOfVehicles;

    Vehicle cars[numberOfVehicles];
    
    for (int i = 0; i < cars[numberOfVehicles]; i++ ) {
        cout << endl << "What is the brand of the vehicle?";
        getline(cin, cars[i].brand);
        cout << endl << "What is the model of the vehicle?";
        getline(cin, cars[i].make);
        cout << endl << "What year is the year of the vehicle?";
        getline(cin, cars[i].year)
    }

    cout << endl << endl << "Inventory consist of the following vehicles.";
    cout << setw(5) << right << "Brand" << setw(5) << right << "Make" << setw(5) << right << "Year";
    for (int j = 0; i < cars[numberOfVehicles]; i++ ) {
        cout << setw(5) << right << cars[i].brand << setw(5) << right << cars.setw(5) <<  
    }

    


    return 0;
}