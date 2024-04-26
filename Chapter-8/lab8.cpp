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
#include <fstream>

using namespace std;

//declares main function of the program
int main() {
    
    int menu = 0, totalGoals = 0;

    string inputFileName;

    struct Player {
        string name;
        int number;
        int goal;
    };

    cout << "Soccer Team Goals ..." << endl << endl;

    cout << "Choose one of the following options" << endl;
    cout << setw(15) << right << "1. Load team's information." << endl;
    cout << setw(15) << right << "2. Display team's roster." << endl;
    cout << setw(15) << right << "3. Display team's goals." << endl;
    cout << setw(15) << right << "4. Display tema's star(s)." << endl;
    cout << setw(15) << right << "Quit" << endl;
    cout << "Option: ";
    getline(cin, menu);

    switch (menu) {
        case 1:
            cout << "Enter File Name: ";
            getline(cin, inputFileName);
        break;

        case 2:
            cout << endl << "Player Name" << setw(20) << left << "Number" << setw(10) << left << "Goals" << endl;
            cout << "-----------------------------------------" << endl;

        break;

        case 3:
            cout << "Total goals scored: " << totalGoals << endl;
        break;

        case 4:
            cout << "Top team player(s)"
        break;

        case 5:
        break;

        default:
        cout << "ERROR."
        break;
    }

    if (menu == 5) {
        cout << "Goodbye ... ";
        break;
    }
    

    return 0;
}