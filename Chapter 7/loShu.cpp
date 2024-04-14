/*
    Author: Dylan Liesenfelt
    Date: 14 April, 2024
    Program: LoShu.cpp
    This program prompts the user for numbers to put into a LoShu Square. 
    All rows, collums, and diagonals must equal 15 in order to be a succesfull square.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Constants for rows and collums for 2d array
const int ROWS = 3;
const int COLS = 3;

/*Function that checks the array to make sure that a new value is not same as a 
value already in the array*/
bool arrayCheck(int num, int arr[ROWS][COLS], int currentRow, int currentCol) {
    for (int i = 0; i < ROWS; i++) { // Itterates throught the rows
        for (int j = 0; j < COLS; j++) { //Then the collums
            if (i != currentRow || j != currentCol) {  //Skips the current element to avoid false positive
                if (num == arr[i][j]) { //If value is in array reuturn true
                    return true;
                }
            }
        }
    }
    return false;//If not return false
}

/*Function that makes and validates the square*/
void makeSquare(int arr[ROWS][COLS]) {
    string line = "-------------";
    int r1 = 0, r2 = 0, r3 = 0, c1 = 0, c2 = 0, c3 = 0, d1 = 0, d2 = 0;

    cout << line << endl;
    for (int i = 0; i < ROWS; i++) { //Itterates Rows 
        for (int j = 0; j < COLS; j++) { //Collums
            cout << "|" << " " << arr[i][j] << " "; // Prints sturcture of square along with the assigned value ofthat postion input int the array

            if (i == 0) { //Totaling the values of the collums to be checked later
                c1 += arr[i][j];
            } else if (i == 1) {
                c2 += arr[i][j];
            } else if (i == 2) {
                c3 += arr[i][j];
            }

            if (j == 0) { //Totaling the values of the rows to be checked later
                r1 += arr[i][j];
            } else if (j == 1) {
                r2 += arr[i][j];
            } else if (j == 2) {
                r3 += arr[i][j];
            }

            if (i == j) { //Totaling descending diagonal
                d1 += arr[i][j];
            }

            if (i + j == ROWS - 1) { //Totaling accesending diagonal
                d2 += arr[i][j];
            }
        }
        cout << "|" << endl << line << endl; // Caps Square ends of rows with '|' symbol
    }

    if (r1 == 15 && r2 == 15 && r3 == 15 && c1 == 15 && c2 == 15 && c3 == 15 && d1 == 15 && d2 == 15) { // If all rows, collums, and diagonals total value equal 15
        cout << endl << "This is a Lo Sho Square!!!" << endl << endl; //Print succes message
    } else {
        cout << endl << "Sorry ... this is not a Lo Sho Square" << endl << endl; //If not print fail message
    }
}

int main() { // Main function of the program

    char playAgain = 'y'; // Defines playAgain var as y so initnial state of program is in play

    while (playAgain == 'y' || playAgain == 'Y') { //Input validation for playAgain

        cout << "Creating Lo Shu Square ..." << endl << endl;

        int numberArray[ROWS][COLS] = {0}; // Declares 2d Array

        // ---------------- INPUT SECTION -------------------

        cout << "Enter Nine Numbers (1-9)" << endl;
        //Itterates rows and collums as inputs for numbers are taken in from the user
        for (int i = 0; i < ROWS; i++) { 
            for (int j = 0; j < COLS; j++) {
                cout << setw(15) << right << "Number " << (i * COLS + j + 1) << ": ";
                cin >> numberArray[i][j];

                // Input validation checks if numbers are in the range of 1-9
                while (numberArray[i][j] < 1 || numberArray[i][j] > 9) {
                    cout << setw(43) << right << "Error ... Invalid number. Try again" << endl << endl;
                    cin.ignore();
                    cout << setw(15) << right << "Number " << (i * COLS + j + 1) << ": ";
                    cin >> numberArray[i][j];
                }

                //Input validation that calls arrayCheck to verify no same values are in the array
                while (arrayCheck(numberArray[i][j], numberArray, i, j)) {
                    cout << setw(18) << right << "Error ... " << numberArray[i][j] << " is already in the Lo Shu Square. Try again" << endl << endl;
                    cin.ignore();
                    cout << setw(15) << right << "Number " << (i * COLS + j + 1) << ": ";
                    cin >> numberArray[i][j];
                }
            }
        }


        //---------------------- OUTPUT SECTION ------------------------
        cout << endl;
        makeSquare(numberArray); // Calls the makeSquare function, prints square and validates square for pass/fail

        cout << "Would you like to try again (y/n)? "; //Prompts user if they would like to play again, if input is not 'y' or 'Y', program exits
        cin >> playAgain;
    }

    return 0;
}