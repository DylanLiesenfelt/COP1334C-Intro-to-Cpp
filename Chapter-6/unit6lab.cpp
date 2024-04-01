/*
    Author: Dylan Liesenfelt
    Date:  , 2024
    Program: 
    File: .cpp
    This program prompts thereturns user for the length of a square and  the width
*/
#include <iostream>
#include <iomanip>

using namespace std;

//declares main function of the program
int main() {
    
    double getPricePerGallon();
    int getRooms();
    int calcWallSpace(int rooms);
    void calcPaint(int sqrFeet, double pricePaint, int& gallons, double& cost);
    void calcLabor(int sqrFeet, double& hours, double& cost);

    cout << "Paint Job Estimator ..." << endl << endl;
    
    cout << "Price per gallon of paint (>=0): ";
    getline(cin, pricePaint);
    if (pricePaint < 0) {
        cout << "Error ... Invalid price per gallon of paint. Try Agian." << endl << endl;
        cout << "Price per gallon of paint (>=0): ";
        getline(cin, pricePaint);
    } 

    cout << endl << endl << "Number of rooms to be painted (>=1): " ;
    getline(cin, rooms);
    if (rooms < 1) {
        cout << "Error ... Invalid number of rooms. Try Again.";
        cout << endl << endl << "Number of rooms to be painted (>=1): " ;
        getline(cin, rooms);
    }

    cout << "Square feet of wall space (>=25)" << endl;
    int count = 0;
    while (count != rooms) {
        cout << "Room " << count << ": ";
        cin >> temp;
        if (temp < 25)
        {
            cout << "Error ... Incorrect wall space for the room. Try again";
            cin.ignore();
            cout << "Room " << count << ": ";
            cin >> temp;
        }
        
        sqrFeet += temp;
        cin.ignore();
        count += 1;
    }

    cout << endl << endl << "Paint Job Estimate" << endl;
    
    cout << "Paint ..." << endl;
    cout << "Gallons of Paint: " << setw(15) << paint << endl;
    cout << "Cost of Paint:" << setw(15) << "$ " << setprecision(2) << costPaint << endl << endl; 

    cout << "Labor ..." << endl;
    cout << "Hours of Labor:" << setw(15) << laborHours << endl;
    cout << "Cost of Labor:" << setw(15) << "$ " << setprecision(2) << laborCost << endl;
    cout << setw(30) << "----------" << endl;
    cout << "Total Cost:" << setw(30) << "$ " << setprecision(2) << totalCost;

    return 0;
}