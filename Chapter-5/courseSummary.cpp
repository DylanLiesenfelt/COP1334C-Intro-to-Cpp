#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//declares main function of the program
int main() {

    /*---------- VARIABLES -------------*/
    int option = 0, repeat = 1;
    string fileName = "", headerLine = "----------------------------------------";
    string course;
    ifstream inputFile;

    
    /*----------- INPUT SECTION -----------*/
    cout << endl << "Course Summary App ..." << endl << endl;

    while (repeat == 1)
    {
        cout << "Choose one of the following options" << endl;
        cout << setw(41) << right << "1. Process Grades Summary report." << endl;
        cout << setw(15) << right << "2. Quit" << endl;
        cout << "Option: ";
        cin >> option;
    
        while (option <= 0 && option >= 3)
        {
            cout << endl << endl << "Error ... Incorrect option. Try Again" << option << endl << endl;
            cout << "Choose one of the following options" << endl;
            cout << setw(41) << "1. Process Grades Summary report." << endl;
            cout << setw(15) << "2. Quit" << endl;
            cout << "Option: ";
            cin >> option;

        };

        /*------------ OUTPUT SECTION ------------*/
        switch (option)
        {
            case 1:
                cout << endl << endl << "Grades Summary Report ..." << endl << endl;
                cout << "Enter name of file: ";
                cin >> fileName;
                
                inputFile.open(fileName);
                
                cout << endl << endl << headerLine << endl << endl;
                

                inputFile >> course;
                cout << course << fileName << endl << endl;
                break;
        
            case 2: 
                cout << endl << "Good Bye ...";
                repeat = 0;
                break;
        }
    }

    return 0;
}