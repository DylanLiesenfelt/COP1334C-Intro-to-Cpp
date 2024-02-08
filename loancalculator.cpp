/*
    Author: Dylan Liesenfelt
    Date:  Febuary 4, 2024
    Program: Loan Calculator App
    File: loanCalculator.cpp
    This program takes basic loan information from the user (name, bank name, 
    loan principle, annual interest rate, term of loan, and date) and outputs
    a report giving the user varrious loan information (monthyly rate and 
    paymrent, total payment of loan, and total amount of interest).
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

//Declares main function of the program
int main() {
    
    // ---------- VARIABLES -----------
    string borrowerName = "", loanInstitution = "", dateOfReport = "";
    double loanAmount = 0, annualInterestRate = 0;
    int yearsOfLoan = 0;
    
    //Header information
    cout << "Loan Payment Calculator ..." << endl << endl;
    cout << "Please enter the following information:" << endl << endl;

    // ---------- INPUTS ----------
    //User input for the user's name, assigns it to var borrowerName
    cout << setw(30) << left << "Borrower's Name:";
    getline(cin, borrowerName);

    //User input for the user's bank's name, assigns it to var loanInstitution
    cout << setw(30) << left << "Loaning Institution:";
    getline(cin, loanInstitution);

    //User input for the loan amount, assigns it to var loanAmount
    cout << endl << setw(30) << left << "Loan Amount ($):";
    cin >> loanAmount;

    //User input for the annual interest rate, assigns it to var annualInterestRate
    cout << setw(30) << left << "Annual Interest Rate (%):";
    cin >> annualInterestRate;

    //User input for the years of the loan, assigns it to var yearsOfLoan
    cout << setw(30) << left << "Term of Loan (years):";
    cin >> yearsOfLoan;
    
    //Clears input buffer
    cin.ignore();
    //User input for today's date or the date of the report, assigns it to var dateOfReport
    cout << endl << setw(30) << left << "Date of Report: ";
    getline(cin, dateOfReport);

    //Header Formatting
    cout << endl << "---------------------------------------------------" << endl;
    
    // ----------- OUTPUTS -----------
    //Calcs how many months for the loan by using the years of loan, assigns the value to var monthsOfLoans
    int monthsOfLoan = yearsOfLoan * 12;
    //Calcs monthly interest rate by using the annual rate, assigns the value to var monthlyInterestRate
    double monthlyIntrestRate = (annualInterestRate / 100) / 12,
    //Calcs the monthly paymnet using the monthyly payment formula, assigns the value to var monthlyPayment 
    monthlyPayment = ((monthlyIntrestRate * pow((1 + monthlyIntrestRate), monthsOfLoan))/(pow((1 + monthlyIntrestRate), monthsOfLoan) - 1)) * loanAmount,
    //Calcs total ammount and total interest using applicable vars, assigns the values to vars totalAmount and totalInterest
    totalAmount = monthlyPayment * monthsOfLoan, totalInterest = totalAmount - loanAmount;
    
    //Header formatting
    cout << "Loan Payment Summary Report" << endl << endl;
    
    //Outputs user personal information and the annual intrest rate, along with the reports date
    cout << setw(35) << left << loanInstitution << borrowerName << endl;
    cout << "Annual Interest Rate: " << annualInterestRate <<  "%" << endl;
    cout << "Date: " << dateOfReport << endl << endl;
    
    //Outputs loan amount, monthly rate, number of payments, monthly payment amount, total ammount of the loan, and total intrest payed over the course of the loan.
    cout << fixed << setprecision(2);
    cout << setw(40) << left << "Loan Amount:" << "$" << setw(10) << right << loanAmount << endl;
    cout << setw(40) << left << "Monthly Interest Rate:" << setw(10) << right << monthlyIntrestRate * 100 << "%" << endl;
    cout << setw(41) << left << "Number of Payments:" << setw(10) << right << monthsOfLoan << endl;
    cout << setw(40) << left << "Monthly Payment: " << "$" << setw(10) << right << monthlyPayment << endl;
    cout << endl << setw(40) << left << "Total Amount to Pay:" << "$" << setw(10) << right <<  totalAmount <<endl;
    cout << setw(40) << left << "Total Interest:" << "$" << setw(10) << right << totalInterest << endl << endl;

    //Footer formating
    cout << "---------------------------------------------------" << endl;
    
    //Returns 0 to main, end of program
    return 0;
};