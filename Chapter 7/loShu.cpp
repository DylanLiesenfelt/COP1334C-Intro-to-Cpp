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

void makeSquare(int arr[]) {
    string line = "-------------" ;
    int count = 0;
    int r1 = 0, r2 = 0, r3 = 0, c1 = 0, c2 = 0, c3 = 0, d1 = 0, d2 = 0;

    cout << line << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            cout << "|" << " " << arr[count] << " ";

            while (count == 0 || count == 3 || count == 6) {
                c1 += arr[count];
                break;
            }

            while (count == 1 || count == 4 || count == 7) {
                c2 += arr[count];            break;
            }

            while (count == 2 || count == 5 || count == 8) {
                c3 += arr[count];
                break;
            }

            while (count == 0 || count == 1 || count == 2) {
                r1 += arr[count];
                break;
            }

            while (count == 3 || count == 4 || count == 5) {
                r2 += arr[count];
                break;
            }

            while (count == 6 || count == 7 || count == 8) {
                r3 += arr[count];
                break;
            }

            while (count == 0 || count == 4 || count == 8) {
                d1 += arr[count];
                break;
            }

            while (count == 2 || count == 4 || count == 6) {
                d2 += arr[count];
                break;
            }
            
            while (count == 2 || count == 5 || count == 8) {
                cout << "|";
                break;
            }
            
            count++;
        }
        cout << endl << line << endl; 
    }
    
    if (r1 == 15 && r2 == 15 && r3 == 15 && c1 == 15 && c2 == 15 && c3 == 15) {
        cout << endl << "This is a Lo Sho Square!!!" << endl << endl;
    }

    else {
        cout << endl << " Sorry ... this is not a Lo Sho Square" << endl << endl;
    }
} 


//declares main function of the program
int main() {

    cout << "Creating Lo Shu Square ..." << endl << endl;

    cout << "Enter Nine Numbers (1-9)" << endl;
    for (int i = 0; i < 9; i++){
        cout << setw(15) << right << "Number " << (i+1) << ": ";
        cin >> inputNumber;

        while (inputNumber < 1 || inputNumber > 9) {
            cout << setw(43) << right << "Error ... Invalid number. Try again" << endl << endl;
            cin.ignore();
            cout << setw(15) << right << "Number " << (i+1) << ": ";
            cin >> inputNumber;
        }

        inArray = arrayCheck(inputNumber, numberArray, i);
        while (inArray == true)
        {
            cout << setw(18) << right << "Error ... " << inputNumber << " is already in the Lo Shu Square. Try Again" << endl << endl;
            cin.ignore();
            cout << setw(15) << right << "Number " << (i+1) << ": ";
            cin >> inputNumber;
            inArray = arrayCheck(inputNumber, numberArray, i);
        }
        
        numberArray[i] = inputNumber;
        cin.ignore();
    }

    //OUTPUTS

    cout << endl;

    makeSquare(numberArray);



    return 0;
}