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
    double loanAmount = 0, annualIntrestRate = 0, yearsOfLoan = 0;
    

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
    cin >> yearsOfLoan;

    cout << endl << endl << "Date of Report: ";
    cin >> reportMonth >> reportYear;

    cout << endl << endl << "-----------------------------------------------" << endl;
    
    double monthlyIntrestRate = (annualIntrestRate / 100) / 12, monthsOfLoan = yearsOfLoan * 12, 
    monthlyPayment = ((monthlyIntrestRate * pow((1 + monthlyIntrestRate), monthsOfLoan))/(pow((1 + monthlyIntrestRate), monthsOfLoan) - 1)) * loanAmount,
    totalAmount = monthlyPayment * monthsOfLoan, totalIntrest = totalAmount - loanAmount;
    
    cout << "Loan Payment Summary Report" << endl;

    cout << loanInstitution << " " << borrowerName << endl;
    cout << "Annual Intrest Rate: " << annualIntrestRate <<  "%" << endl;
    cout << "Date: " << reportMonth << " " << reportYear << endl << endl;

    cout << "Loan Amount: " << "$ " << loanAmount << endl;
    cout << "Monthly Intrest Rate: " << setprecision(2) << monthlyIntrestRate * 100 << "%" << endl;
    cout << "Number of Payments: " << monthsOfLoan << endl;
    cout << "Monthly Payment: " << "$ " << setprecision(3) << monthlyPayment << endl;

    cout << "Total Ammount to Pay: " << "$ " << setprecision(3) << totalAmount <<endl;
    cout <<  "Total Interest: " << "$ " << setprecision(3) << totalIntrest << endl << endl;

    cout << endl << endl << "-----------------------------------------------" << endl;

    //need to fix formatting
    return 0;
};