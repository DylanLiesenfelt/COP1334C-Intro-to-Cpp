/*
    Author: Dylan Liesenfelt
    Date:  31 March 2024
    Program: Paint Estimator App
    File: paintEstimator.cpp
    This program prompts the user for paint price/gallon, 
    number of rooms to be painted, and the area of the walls int the rooms, 
    and returns a qoute estimate for the job based off of the companies pricing. 
*/

#include <iostream>
#include <iomanip>

using namespace std;


double getPricePerGallon();
int getRooms();
int calcWallSpace(int rooms);
void calcPaint(int sqrFeet, double pricePaint, int &gallons, double &costPaint);
void calcLabor(int sqrFeet, double &hours, double &costLabor);

int main() {
    cout << "Paint Job Estimator ..." << endl << endl;

    double pricePaint = getPricePerGallon();
    int rooms = getRooms();
    int sqrFeet = calcWallSpace(rooms);

    int gallons;
    double costPaint;
    calcPaint(sqrFeet, pricePaint, gallons, costPaint);

    double laborHours;
    double costLabor;
    calcLabor(sqrFeet, laborHours, costLabor);

    double totalCost = costPaint + costLabor;

    cout << endl << endl << setw(25) << "Paint Job Estimate" << endl;
    cout << endl << "Paint ..." << endl;
    cout << setw(15) << left << "Gallons of Paint:" << right << setw(12) << gallons << endl;
    cout << setw(15) << left << "Cost of Paint:" << right << setw(15) << "$ " << setprecision(2) << fixed << costPaint << endl << endl;

    cout << "Labor ..." << endl;
    cout << setw(15) << left << "Hours of Labor:" << right << setw(18) << laborHours << endl;
    cout << setw(15) << left << "Cost of Labor:" << right << setw(15) << "$ " << setprecision(2) << fixed << costLabor << endl;
    cout << setw(38) << "----------" << endl;
    cout << setw(15) << left << "Total Cost:" << right << setw(15) << "$ " << setprecision(2) << fixed << totalCost;

    return 0;
}

double getPricePerGallon() {
    double price;
    cout << "Price per gallon of paint (>=0): ";
    cin >> price;
    while (price < 0) {
        cout << endl << "Error ... Invalid price per gallon of paint. Try Again." << endl;
        cout << "Price per gallon of paint (>=0): ";
        cin >> price;
    }
    return price;
}

int getRooms() {
    int rooms;
    cout << endl << "Number of rooms to be painted (>=1): ";
    cin >> rooms;
    while (rooms < 1) {
        cout << endl << "Error ... Invalid number of rooms. Try Again." << endl;
        cout << "Number of rooms to be painted (>=1): ";
        cin >> rooms;
    }
    return rooms;
}

int calcWallSpace(int rooms) {
    int sqrFeet = 0;
    cout << endl << "Square feet of wall space (>=25)" << endl;
    for (int count = 1; count <= rooms; ++count) {
        int temp;
        cout << setw(15) << "Room " << count << ": ";
        cin >> temp;
        while (temp < 25) {
            cout << endl << "Error ... Incorrect wall space for the room. Try again." << endl;
            cout << "Square feet of wall space for room " << count << " (>=25): ";
            cin >> temp;
        }
        sqrFeet += temp;
    }
    return sqrFeet;
}

void calcPaint(int sqrFeet, double pricePaint, int &gallons, double &costPaint) {
    gallons = sqrFeet / 115 + (sqrFeet % 115 != 0);
    costPaint = gallons * pricePaint;
}

void calcLabor(int sqrFeet, double &hours, double &costLabor) {
    hours = (sqrFeet / 115.0) * 8.0;
    costLabor = hours * 25.0;
}