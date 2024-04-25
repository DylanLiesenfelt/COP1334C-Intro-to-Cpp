/*
    Author: Dylan Liesenfelt
    Date:  April 24, 2024
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//declares main function of the program
int main() {

    int numberOfVehicles;

    struct Vehicle{
        string brand;
        string model;
        int year;
    };

    cout << "How many vehicles do you have? ";
    cin >> numberOfVehicles;
    cin.ignore();

    Vehicle cars[numberOfVehicles];

    for (int i = 0; i < numberOfVehicles; i++ ) {
        cout << endl << "What is the brand of the vehicle? ";
        getline(cin, cars[i].brand);
        cout << "What is the model of the vehicle? ";
        getline(cin, cars[i].model);
        cout << "What year is the year of the vehicle? ";
        cin >> cars[i].year;
        cin.ignore();
    }

    cout << endl << endl << "Inventory consist of the following vehicles." << endl;
    cout << setw(15) << right << "Brand" << setw(15) << right << "Make" << setw(15) << right << "Year" << endl;
    for (int j = 0; j < numberOfVehicles; j++ ) {
        cout << setw(15) << right << cars[j].brand << setw(15) << right << cars[j].model << setw(15) << right << cars[j].year << endl;  
    }

    return 0;
}