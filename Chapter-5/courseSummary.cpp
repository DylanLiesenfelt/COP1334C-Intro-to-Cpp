#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//declares main function of the program
int main() {

    /*---------- VARIABLES -------------*/
    int option = 0, repeat = 1;

    string fileName, headerLine = "----------------------------------------";

    string courseID, course, professor, term, name;
    int grade = 0, gradeMax = 0, gradeMin = 0, studentCount = 0; 

    ifstream infile;

    
    /*----------- INPUT SECTION -----------*/
    cout << endl << "Course Summary App ..." << endl << endl;

    while (repeat == 1)
    {
        cout << "Choose one of the following options" << endl;
        cout << setw(41) << right << "1. Process Grades Summary report." << endl;
        cout << setw(15) << right << "2. Quit" << endl;
        cout << "Option: ";
        cin >> option;
        cin.ignore();
    
        while (option <= 0 && option >= 3)
        {
            cout << endl << endl << "Error ... Incorrect option. Try Again" << option << endl << endl;
            cout << "Choose one of the following options" << endl;
            cout << setw(41) << "1. Process Grades Summary report." << endl;
            cout << setw(15) << "2. Quit" << endl;
            cout << "Option: ";
            cin >> option;
            cin.ignore();

        };

        /*------------ OUTPUT SECTION ------------*/
        switch (option)
        {
            case 1:
                cout << endl << endl << "Grades Summary Report ..." << endl << endl;
                cout << "Enter name of file: ";
                getline(cin, fileName);
                infile.open(fileName);

                if (!infile) {
                    cout << "ERROR";
                }
                
                cout << endl << endl << headerLine << endl << endl;

                
                infile >> courseID >> course >> professor >> term ;
                cout << courseID <<  course  << endl << endl;
                cout << setw(20) << left << professor << setw(20) << right << term << endl << endl << endl;

                cout << "List of Students" << endl << headerLine << endl;

                break;
        
            case 2: 
                cout << endl << "Good Bye ...";
                repeat = 0;
                break;
        }
    }

    return 0;
}