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
        sqrFeet += temp;
        cin.ignore();
        count += 1;
    }
    

    return 0;
}