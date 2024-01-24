/*
    Author: Dylan Liesenfelt
    Date:  January 21, 2024
    Program: Square Area Calculator
    File: squareAreaCalculatorApp.cpp
    This program prompts the user for the length of a square and returns the width
*/

#include <iostream>

using namespace std;

//declares main function of the program
int main() {

    double area = 0, width = 0;

    cout << "Square Area Calculator App ..." << endl << endl;

    cout << "Please enter a width of the square: ";
    cin >> width;

    area = width * width;

    cout << "The area of the square is " << area << " units." << endl;

    return 0;
}