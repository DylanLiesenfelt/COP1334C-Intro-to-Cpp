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
    
    int menu = 0, totalGoals = 0, playerNumber = 0, playerGoals = 0, highestGoal = 0, fileCount = 0; 
    string inputFileName, firstName, lastName, topPlayer;
    ifstream infile;
    bool run = true;
            

    struct Player {
        string name;
        int number;
        int goal;
    };

    Player teamArray[11];

    cout << "Soccer Team Goals ..." << endl;

   while (run = true) {

        cout << endl << "Choose one of the following options" << endl;
        cout << left << setw(8) << " " << "1. Load team's information." << endl;
        cout << left << setw(8) << " " << "2. Display team's roster." << endl;
        cout << left << setw(8) << " " << "3. Display team's goals." << endl;
        cout << left << setw(8) << " " << "4. Display team's star(s)." << endl;
        cout << left << setw(8) << " " << "5. Quit" << endl;
        cout << "Option: ";
        cin >> menu;
        cin.ignore();

        switch (menu) {
            case 1:
                cout << endl << "Enter File Name: ";
                getline(cin, inputFileName);
                infile.open(inputFileName);

                if (!infile) { //Input validation, if user input file does not exist displays error, breaks out of switch statment returns user to main menu.
                        cout << endl << "Error ... Cannot open " << inputFileName << endl;
                        break;
                };
                
                while (infile >> firstName >> lastName >> playerNumber >> playerGoals) {
                    teamArray[fileCount].name = firstName + " " + lastName;
                    teamArray[fileCount].number = playerNumber;
                    teamArray[fileCount].goal = playerGoals;
                    totalGoals += playerGoals;
                    
                    if (teamArray[fileCount].goal > highestGoal) {
                        topPlayer = teamArray[fileCount].name;
                        highestGoal =  teamArray[fileCount].goal;
                    };

                    fileCount++; 

                };

                infile.close();

            break;

            case 2:
                cout << endl << left << setw(20) << "Player Name" << left << setw(10) << "Number" << left << setw(10) << "Goals" << endl;
                cout << "-----------------------------------------" << endl;
                for (int i = 0; i < 11; i++) {
                    cout << left << setw(20) << teamArray[i].name << left << setw(10) << teamArray[i].number << left << setw(10) << teamArray[i].goal << endl;
                };
            break;

            case 3:
                cout << endl << "Total goals scored: " << totalGoals << endl;
            break;

            case 4:
                cout << endl << "Top team player(s): " << topPlayer << "  ( " << highestGoal << " goals )" << endl;
            break;

            case 5:
            break;

            default:
            cout << endl << "ERROR." << endl;
            break;
        }

        if (menu == 5) {
            cout << endl << "Goodbye ... ";
            run = false;
            break;
        }
    }
   
    

    return 0;
}