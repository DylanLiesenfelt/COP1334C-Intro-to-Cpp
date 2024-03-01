#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    //------------ VARIABLES ------------
    //Declaring string variables used in program
    string fileName, headerLine = "--------------------------------------------------", 
    courseID, dash, intro, to, c, program, prof, profFName, profLName, term, year, firstName, lastName;
    //Declaring integer variables used in program
    int option = 0, repeat = 1, grade = 0, gradeMax = 0, gradeMin = 100, gradeTotal = 0, studentCount = 0;
    // Declares double used for class grade average
    double gradeAvg = 0.0; 
    //Declares input file object
    ifstream infile;

    //----------- INPUTS ------------
    cout << "Course Summary App ..." << endl << endl; //Header formatting

    //Loop that keeps program running until menu 2 option is selected later in program
    while (repeat == 1) { 

        //Menu formatting
        cout << "Choose one of the following options" << endl;
        cout << setw(41) << right << "1. Process Grades Summary report." << endl;
        cout << setw(15) << right << "2. Quit" << endl;
        cout << "Option: "; //Prompts user for option choice for menuing
        cin >> option;
        cin.ignore();
    
        while (option <= 0 || option >= 3) { // Input validation, If option is not either 1 or 2 displays errors and prompts user again
            cout << endl << "Error ... Incorrect option. Try Again" << endl << endl;
            cout << "Choose one of the following options" << endl;
            cout << setw(41) << "1. Process Grades Summary report." << endl;
            cout << setw(15) << "2. Quit" << endl;
            cout << "Option: "; //Prompts user for option choice for menuing
            cin >> option;
            cin.ignore();
        }


        // Switch statment for menu control
        switch (option) {

            //Menu option 1
            case 1:
                //Heading formatting  for grade summary report
                cout << endl << "Grades Summary Report ..." << endl << endl;
                cout << "Enter name of file: "; //Prompts user for file name 
                getline(cin, fileName);
                infile.open(fileName);

                if (!infile) { //Input validation, if user input file does not exist displays error, breaks out of switch statment returns user to main menu.
                    cout << "Error ... Cannot open " << fileName + "." << endl << endl;
                    break;
                }

                //------------- PROCESSING ------------
                cout << endl << headerLine << endl << endl; //Formatting
                //Reads header information from the file user input and assigns those values to variables
                infile >> courseID >> dash >> intro >> to >> c >> program >> prof >> profFName >> profLName >> term >> year;
                //Prints that data as header information
                cout << courseID + " " <<  dash + " " << intro + " " << to + " " << c + " " << program + " " << endl << endl;
                cout << setw(20) << left << prof  + " " + profFName+ " " + profLName  << setw(19) << right << "Term: " << term + " "  << year << endl << endl << endl;

                cout << "List of Students" << endl << headerLine; //Formatting

                while (infile >> firstName >> lastName >> grade) {// Loop that reads the data from the input file for the student names and grades, terminates loop once all data is read
                   cout << endl << setw(30) << left << firstName + " " + lastName << left << grade; //Formatting
                    if (grade > gradeMax) { //Checks if read grade is greater than current value of gradeMax, if so updates the value to new higher grade
                        gradeMax = grade;
                    }
                    if (grade < gradeMin) { //Checks if read grade is lesser than current value of gradeMin, if so updates the value to new lower grade
                        gradeMin = grade;
                    }
                    studentCount++; //Counter for number of students read from file for gradeAvg later
                    gradeTotal += grade; //Accumulator for total grade value of class for gradeAvg later
                }

                //----------- OUTPUTS -----------
               gradeAvg = static_cast<double>(gradeTotal) / studentCount;// Calculates the avergage grade of the class 
                //Formmating for highest, lowest, and grade average 
                cout << setw(0); 
                cout << endl << endl<< "Highest Grade: " << gradeMax << endl;
                cout << "Lowest  Grade: " << gradeMin << endl;
                cout << fixed << setprecision(1); 
                cout << "Average Grade: " << gradeAvg << endl << endl;
                
                infile.close(); //Closes the input file
                break; //End of option 1 breaks loop back to main menu choice
        
            //Menu option 2
            case 2: 
                cout << endl << "Good Bye ..." << endl; //Displays goodbye message
                repeat = 0; //Sets repeat to 0, upon breaking from this loop will cause the main program while loop to finish
                break;
        }
    }

    return 0; //End of program 
}
