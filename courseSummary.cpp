#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

//declares main function of the program
int main() {

    /*---------- VARIABLES -------------*/
    int option = 0;
    string file = "", headerLine = "----------------------------------------";
    
    /*----------- INPUT SECTION -----------*/
    cout << endl << "Course Summary App ..." << endl << endl;

    //NEED LOOP
    cout << "Choose one of the following options" << endl 
    << setw(20) << "1. Process Grades Summary report." << endl 
    << setw(20) << "2. Quit" << endl 
    << "Option: ";
    cin >> option;
    //NEED INPUT VAL
    
    /*------------ OUTPUT SECTION ------------*/
    cout << endl << endl << "Grades Summary Report ..." << endl << endl;
    cout << "Enter name of file: ";
    cin >> file;

    cout << endl << endl << headerLine << endl << endl;

    



    return 0;
}