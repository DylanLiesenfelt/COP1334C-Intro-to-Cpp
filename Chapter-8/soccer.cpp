/*
    Author: Dylan Liesenfelt
    Date:  April 28, 2024
    Program: Soccer Team Goals
    File: soccer.cpp
    This progfram prompts the user for a file, then the program reads that files data,
    stores the data in  array, displays the data, processes the teams total goals, and who the top player is.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

//declares main function of the program
int main() {
    
    //------------------- Global Variables -----------------
    int menu = 0, totalGoals = 0, playerNumber = 0, playerGoals = 0, highestGoal = 0, fileCount = 0; 
    string inputFileName, firstName, lastName, topPlayer;
    ifstream infile;
    bool run = true;
            
    struct Player { // Creates a struct of player with members of name, jersey number, and goals they scored
        string name;
        int number;
        int goal;
    };

    Player teamArray[11]; // Declares the array that will store the players

    cout << "Soccer Team Goals ..." << endl;

    while (run = true) { // Run state of the program

        // Display menu options
        cout << endl << "Choose one of the following options" << endl;
        cout << left << setw(8) << " " << "1. Load team's information." << endl;
        cout << left << setw(8) << " " << "2. Display team's roster." << endl;
        cout << left << setw(8) << " " << "3. Display team's goals." << endl;
        cout << left << setw(8) << " " << "4. Display team's star(s)." << endl;
        cout << left << setw(8) << " " << "5. Quit" << endl;
        cout << "Option: "; // User input to select menu option
        cin >> menu;
        cin.ignore();

        switch (menu) { // Switch statment to control the menu based off user input
            
            case 1: // Case 1 takes the user input for file to read, reads and process that data            
                cout << endl << "Enter File Name: "; // Prompting user for file to read
                getline(cin, inputFileName);
                infile.open(inputFileName); // Opens file that user input

                if (!infile) { //Input validation, if user input file does not exist displays error, breaks out of switch statment returns user to main menu.
                        cout << endl << "Error ... Cannot open " << inputFileName << endl;
                        break;
                };
                
                while (infile >> firstName >> lastName >> playerNumber >> playerGoals) { // Reading data in file until there is no data left to read
                    teamArray[fileCount].name = firstName + " " + lastName; //assigns data for name from file to our array and struct
                    teamArray[fileCount].number = playerNumber; // Players jersery number
                    teamArray[fileCount].goal = playerGoals; // and goals they scored
                    totalGoals += playerGoals; // Sums total goals team has
                    
                    if (teamArray[fileCount].goal > highestGoal) { // Keeps track of top player based on goals scored
                        topPlayer = teamArray[fileCount].name;
                        highestGoal =  teamArray[fileCount].goal;
                    };

                    fileCount++; // Itterates the count to move array index

                };

                infile.close(); // Close the file, no more data is need, file is no longer needed

            break;

            case 2: // Case 2 displays the team roster along with jersey number and goals
                cout << endl << left << setw(20) << "Player Name" << left << setw(10) << "Number" << left << setw(10) << "Goals" << endl; 
                cout << "-----------------------------------------" << endl;
                for (int i = 0; i < 11; i++) { // Itterates throught the array pulls the data from it to display
                    cout << left << setw(20) << teamArray[i].name << left << setw(10) << teamArray[i].number << left << setw(10) << teamArray[i].goal << endl;
                };
            break;

            case 3: // Case 3 displays the teams goal total
                cout << endl << "Total goals scored: " << totalGoals << endl;
            break;

            case 4: // Case 4 displays the top player
                cout << endl << "Top team player(s): " << topPlayer << "  ( " << highestGoal << " goals )" << endl;
            break;

            case 5: // Case 5 displays, updates the run state
                cout << endl << "Goodbye ... ";
                run = false;
            break;

            default: // Error handling due to user input of case that does not exist
            cout << endl << "ERROR. Input outside of menu parameters." << endl;
            break;
        }

        if (run == false) { // Case 5 is selected and run state condtion is updated, run loop breaks
            break;
        }
    }
   
    return 0; // Program has ran it course, main function is complete, program quits
}