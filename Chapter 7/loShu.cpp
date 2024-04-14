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

using namespace std;

const int ROWS = 3;
const int COLS = 3;

bool arrayCheck(int num, int arr[ROWS][COLS], int currentRow, int currentCol) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i != currentRow || j != currentCol) { 
                if (num == arr[i][j]) {
                    return true;
                }
            }
        }
    }
    return false;
}


void makeSquare(int arr[ROWS][COLS]) {
    string line = "-------------";
    int r1 = 0, r2 = 0, r3 = 0, c1 = 0, c2 = 0, c3 = 0, d1 = 0, d2 = 0;

    cout << line << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "|" << " " << arr[i][j] << " ";

            if (i == 0) {
                c1 += arr[i][j];
            } else if (i == 1) {
                c2 += arr[i][j];
            } else if (i == 2) {
                c3 += arr[i][j];
            }

            if (j == 0) {
                r1 += arr[i][j];
            } else if (j == 1) {
                r2 += arr[i][j];
            } else if (j == 2) {
                r3 += arr[i][j];
            }

            if (i == j) {
                d1 += arr[i][j];
            }

            if (i + j == ROWS - 1) {
                d2 += arr[i][j];
            }
        }
        cout << "|" << endl << line << endl;
    }

    if (r1 == 15 && r2 == 15 && r3 == 15 && c1 == 15 && c2 == 15 && c3 == 15 && d1 == 15 && d2 == 15) {
        cout << endl << "This is a Lo Sho Square!!!" << endl << endl;
    } else {
        cout << endl << "Sorry ... this is not a Lo Sho Square" << endl << endl;
    }
}

int main() {
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {

        cout << "Creating Lo Shu Square ..." << endl << endl;

        int numberArray[ROWS][COLS] = {0}; 

        cout << "Enter Nine Numbers (1-9)" << endl;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                cout << setw(15) << right << "Number " << (i * COLS + j + 1) << ": ";
                cin >> numberArray[i][j];

                while (numberArray[i][j] < 1 || numberArray[i][j] > 9) {
                    cout << setw(43) << right << "Error ... Invalid number. Try again" << endl << endl;
                    cin.ignore();
                    cout << setw(15) << right << "Number " << (i * COLS + j + 1) << ": ";
                    cin >> numberArray[i][j];
                }

                while (arrayCheck(numberArray[i][j], numberArray, i, j)) {
                    cout << setw(18) << right << "Error ... " << numberArray[i][j] << " is already in the Lo Shu Square. Try again" << endl << endl;
                    cin.ignore();
                    cout << setw(15) << right << "Number " << (i * COLS + j + 1) << ": ";
                    cin >> numberArray[i][j];
                }
            }
        }

        cout << endl;
        makeSquare(numberArray);

        cout << "Would you like to try again (y/n)? ";
        cin >> playAgain;
    }

    return 0;
}