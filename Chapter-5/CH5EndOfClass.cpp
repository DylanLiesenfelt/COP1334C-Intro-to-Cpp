/*
    Author: Dylan Liesenfelt
    Date:  Febuary 28, 2024
    
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

//declares main function of the program
int main() {

    int students = 0, grade = 0;
    string name;
    ofstream outfile;

    outfile.open("grades.txt");
    
    if(!outfile){
        cout << "error";
    }

    cout << "How Many Students In Class: ";
    cin >> students;
    cin.ignore();

    for ( students; students > 0; students--) {
        cout << "Enter Name: " ;
        getline(cin, name);
        cout << endl << "Enter Grade: ";
        cin >> grade;
        cin.ignore();

        cout << endl << "Writing " << name << " and grade: " << grade << " to file." << endl << endl;
        outfile << "Name: " << name  << ", Grade: " << grade << "\n";
    }

    outfile.close();

    return 0;
}