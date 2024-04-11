/*
    Author: Dylan Liesenfelt
    Date:  April 10th, 2024
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int numberOfStudents = 0, age = 0, total = 0;
    string name; 
    
    cout << "Enter the number of Students: ";
    cin >> numberOfStudents;
    cin.ignore();

    int ageList[numberOfStudents];
    string nameList[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Enter Student Name: ";
        getline(cin, name);
        
        cout << "Enter Student Age: ";
        cin >> age;
        cin.ignore();

        ageList[i] = age;
        nameList[i] = name;
    }
    
    cout << setw(10) << left << "Name" << setw(10) << right << "Age" << endl;
    for (int j = 0; j < numberOfStudents; j++) {
        cout << setw(10) << left << nameList[j] << setw(10) << right << ageList[j] << endl;
    }
    
    for (int k = 0; k < numberOfStudents; k++) {
        total += ageList[k];
    }

    int avgAge = total/numberOfStudents;
    cout << "Average Age: " << avgAge;

    return 0;
}