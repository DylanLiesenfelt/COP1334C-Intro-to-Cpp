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

int inputNumber = 0;
int numberArray[8] = {};
bool inArray = false;

bool arrayCheck(int num, int arr[], int size) {
    for (int i = 0; i < size; i++){
        if (num == arr[i]) {
            return true;
        }
    }
    return false;
}


//declares main function of the program
int main() {
    
    cout << "Creating Lo Shu Square ..." << endl << endl;

    cout << "Enter Nine Numbers (1-9)" << endl;
    for (int i = 0; i < 9; i++){
        cout << setw(15) << left << "Number " << (i+1) << ": ";
        cin >> inputNumber;

        while (inputNumber < 1 || inputNumber > 9) {
            cout << "Error ... Invalid number. Try again" << endl << endl;
            cin.ignore();
            cout << setw(15) << left << "Number " << (i+1) << ": ";
            cin >> inputNumber;
        }

        inArray = arrayCheck(inputNumber, numberArray, i);
        while (inArray == true)
        {
            cout << "Error ... " << inputNumber << " is already in the Lo Shu Square. Try Again" << endl << endl;
            cin.ignore();
            cout << setw(15) << left << "Number " << (i+1) << ": ";
            cin >> inputNumber;
            inArray = arrayCheck(inputNumber, numberArray, i);
        }
        
        numberArray[i] = inputNumber;
        cin.ignore();
    }


    return 0;
}