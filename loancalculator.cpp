/*
    Author: Dylan Liesenfelt
    Date:  Febuary 4, 2024
    Program: Loan Calculator App
    File: loanCalculator.cpp
    This program 
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

//declares main function of the program
int main() {
    
    string borrowerName = "", loanInstitution = "", reportMonth = "", reportYear="";
    double loanAmount = 0, annualIntrestRate = 0, yearsOfTerm = 0;
    

    cout << "Loan Payment Calculator ..." << endl << endl;

    cout << "Please enter the following instructions:" << endl << endl;

    cout << "Borrower's Name: ";
    cin >> borrowerName;

    cout << endl << "Loaning Institution:";
    cin >> loanInstitution;

    cout << endl << endl <<"Loan Amount ($):";
    cin >> loanAmount;

    cout << endl << "Annual Intrest Rate (%): ";
    cin >> annualIntrestRate;

    cout <<  endl << "Term of Loan (years): ";
    cin >> yearsOfTerm;

    cout << endl << endl << "Date of Report: ";
    cin >> reportMonth >> reportYear;

    cout << endl << endl << "-----------------------------------------------" << endl;
    
    double monthsOfTerm = yearsOfTerm * 12, monthlyIntrestRate = (annualIntrestRate / 100) / 12, 
    monthlyPayment = ((monthlyIntrestRate * pow((1 - monthlyIntrestRate), monthsOfTerm)) / (pow((1 + monthlyIntrestRate), monthsOfTerm) - 1)) * loanAmount, 
    totalAmount = monthlyPayment * monthsOfTerm, totalIntrest = totalAmount - loanAmount;
    
    cout << "Loan Payment Summary Report" << endl;

    cout << loanInstitution << " " << borrowerName << endl;
    cout << "Annual Intrest Rate: " << annualIntrestRate <<  "%" << endl;
    cout << "Date: " << reportMonth << " " << reportYear << endl << endl;

    cout << "Loan Amount: " << "$ " << loanAmount << endl;
    cout << "Monthly Intrest Rate: " << setprecision(2) << monthlyIntrestRate * 100 << "%" << endl;
    cout << "Number of Payments: " << monthsOfTerm << endl;
    cout << "Monthly Payment: " << "$ " << setprecision(3) << monthlyPayment << endl;

    cout << "Total Ammount to Pay: " << "$ " << setprecision(3) << totalAmount <<endl;
    cout <<  "Total Interest: " << "$ " << setprecision(3) << totalIntrest << endl << endl;

    cout << endl << endl << "-----------------------------------------------" << endl;

    /*Need to fix math for monthly payment, total and total interest*/
    return 0;
};