#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

//declares main function of the program
int main() {

    /*---------- VARIABLES -------------*/
    int option = 0, repeat = 1;
    string file = "", headerLine = "----------------------------------------";
    
    /*----------- INPUT SECTION -----------*/
    cout << endl << "Course Summary App ..." << endl << endl;

    while (repeat == 1)
    {
        cout << "Choose one of the following options" << endl;
        cout << setw(20) << "1. Process Grades Summary report." << endl;
        cout << setw(20) << "2. Quit" << endl;
        cout << "Option: ";
        cin >> option;
    
        while (option <= 0 & option >= 3)
        {
            cout << endl << endl << "Error ... Incorrect option. Try Again" << option << endl << endl;
            cout << "Choose one of the following options" << endl;
            cout << setw(20) << "1. Process Grades Summary report." << endl;
            cout << setw(20) << "2. Quit" << endl;
            cout << "Option: ";
            cin >> option;

        };

        /*------------ OUTPUT SECTION ------------*/
        switch (option)
        {
            case 1:
                cout << endl << endl << "Grades Summary Report ..." << endl << endl;
                cout << "Enter name of file: ";
                cin >> file;
                cout << endl << endl << headerLine << endl << endl;
                break;
            
            case 2: 
                cout << endl << "Good Bye ...";
                repeat = 0;
                option = 0;
                break;
        }
    }
    
    
    
    
    
    
    

    



    return 0;
}