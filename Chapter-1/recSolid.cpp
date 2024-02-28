/*
    Author: Dylan Liesenfelt
    Date:  January 21, 2024
    Program: Rectangular Solid Geometry App
    File: recSolid.cpp
    This program prompts a user for length, width, and height of a rectangle and then
    calculates a volume and a surface area of a rectange and displays results.
*/

#include <iostream>

using namespace std;

//declares main function of the program
int main() {
    
    //declares varriables
    double length, width, height;

    //Program title output
    cout << "Rectangular Solid Geometry App ...";
    
    //Gets users input for length width and height vars
    cout << "Please enter rectangle's height: ";
    cin >> height;

    cout << "                         length: ";
    cin >> length;

    cout << "                          width: ";
    cin >> width;

    //Calcs for Volume and Surface Area
    double volume = length * width * height;
    double sa = 2 * (length * height + width * height + width * length);

    //Outputs the calculated values
    cout << "The volume of the rectangle is " << volume << " units" <<endl;
    cout << "The surface area of the rectangle is " << sa << "units" << endl;

    return 0;
}