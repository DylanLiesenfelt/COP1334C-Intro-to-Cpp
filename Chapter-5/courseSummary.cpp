#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    int option = 0, repeat = 1;
    string fileName, headerLine = "--------------------------------------------------";
    string courseID, dash, intro, to, c, program, prof, profFName, profLName, term, year, firstName, lastName;
    int grade = 0, gradeMax = 0, gradeMin = 100, gradeTotal = 0, studentCount = 0;
    double gradeAvg = 0.0; 
    ifstream infile;

    cout << "Course Summary App ..." << endl << endl;

    while (repeat == 1) {
        cout << "Choose one of the following options" << endl;
        cout << setw(41) << right << "1. Process Grades Summary report." << endl;
        cout << setw(15) << right << "2. Quit" << endl;
        cout << "Option: ";
        cin >> option;
        cin.ignore();
    
        while (option <= 0 || option >= 3) { 
            cout << endl << "Error ... Incorrect option. Try Again" << endl << endl;
            cout << "Choose one of the following options" << endl;
            cout << setw(41) << "1. Process Grades Summary report." << endl;
            cout << setw(15) << "2. Quit" << endl;
            cout << "Option: ";
            cin >> option;
            cin.ignore();
        }

        switch (option) {
            case 1:
                cout << endl << "Grades Summary Report ..." << endl << endl;
                cout << "Enter name of file: ";
                getline(cin, fileName);
                infile.open(fileName);

                if (!infile) {
                    cout << "Error ... Cannot open " << fileName + "." << endl << endl;
                    break;
                }

                cout << endl << headerLine << endl << endl;

                infile >> courseID >> dash >> intro >> to >> c >> program >> prof >> profFName >> profLName >> term >> year;
                cout << courseID + " " <<  dash + " " << intro + " " << to + " " << c + " " << program + " " << endl << endl;
                cout << setw(20) << left << prof  + " " + profFName+ " " + profLName  << setw(19) << right << "Term: " << term + " "  << year << endl << endl << endl;

                cout << "List of Students" << endl << headerLine;

                while (infile >> firstName >> lastName >> grade) {
                    cout << endl << setw(30) << left << firstName + " " + lastName << left << grade;
                    if (grade > gradeMax) {
                        gradeMax = grade;
                    }
                    if (grade < gradeMin) {
                        gradeMin = grade;
                    }
                    studentCount++;
                    gradeTotal += grade;
                }

                gradeAvg = static_cast<double>(gradeTotal) / studentCount;
                cout << setw(0); 
                cout << endl << endl<< "Highest Grade: " << gradeMax << endl;
                cout << "Lowest  Grade: " << gradeMin << endl;
                cout << fixed << setprecision(1); 
                cout << "Average Grade: " << gradeAvg << endl << endl;
                
                infile.close();
                break;
        
            case 2: 
                cout << endl << "Good Bye ..." << endl;
                repeat = 0;
                break;
        }
    }

    return 0;
}
