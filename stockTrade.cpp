/*
    Author: Dylan Liesenfelt
    Date: Jan 28, 2024
    Program: Stock Trade App
    File: stockTrade.cpp
    This program propmts the user for stock trade information, 
    then calculates and ouputs useful information about that stock trade.
*/

#include <iostream>

using namespace std;

//declares main function of the program
int main() {

    //----------- VARRIABLES ------------

    //Declares string variables
    string companyName = "", companySymbol = "";

    //Declares float variables used for user input and later calculations 
    double numberOfShares = 0, costPerShareBuy = 0, commissonAtBuy = 0, pricePerShareSell = 0, commissonAtSell = 0, totalCost = 0, totalProceeds = 0, totalCommisson = 0, gainLoss = 0, precentChange = 0;
    
    //Declares a constant float variable for the commission rate of the trading platform
    const double COMMISSION_RATE = 0.02;

    //---------- USER INPUT ------------

    //Program title
    cout << "Stock Investment Performance Calculator ..." << endl << endl;

    //Prompts user input for the company name and ticker symbol and assigns the input to the variables
    cout << "Company Name (no spaces) & Symbol:       ";
    cin >> companyName >> companySymbol;
    
    //Prompts user for input of how many shares were bought and assigns the value to a variable
    cout <<"Number of Shares Transacted:             ";
    cin >> numberOfShares;

    //Prompts user for input of how much the shares cost when they bought them and assigns the value to a variable
    cout << "Cost per Share (@ buying):               ";
    cin >> costPerShareBuy;

    //Prompts user for input of how much they sold the shares for and assigns the value to a variable
    cout << "Price per Share (@ selling):             ";
    cin >> pricePerShareSell;

    //------------ PROGRAM OUTPUT ----------
    
    //Report header
    cout << endl << "Realiized Gains/Losses Report ..." << endl;
    cout << "-------------------------------------" << endl;

    //Displays company name and symbol
    cout << "Stock:           " << companyName << " " << "(" << companySymbol  << ")" << endl;
    
    //Displays how many shares were traded
    cout << "Quantity:        " << numberOfShares << " shares." << endl << endl;

    //Calcs then displays the entry cost of the trade
    totalCost = numberOfShares * costPerShareBuy;
    cout << "Total Cost:      " << "$" <<totalCost;

    //Calcs then displays the exit proceeds of the trade
    totalProceeds = numberOfShares * pricePerShareSell;
    cout << endl <<"Total Proceeds:  " << "$" << totalProceeds;

    //Calcs the entry commission and exit commission and displays the total commission
    commissonAtBuy = totalCost * COMMISSION_RATE;
    commissonAtSell = totalProceeds * COMMISSION_RATE;
    totalCommisson = commissonAtBuy + commissonAtSell;
    cout << endl << "Commission:      " << "$" << totalCommisson;

    //Calcs gain/loss (profit) and the precentage change of capital from the trade and displays the results
    gainLoss = totalProceeds - totalCost;
    precentChange = (gainLoss / totalCost) * 100;
    cout << endl << "Gains/Losses:    " << "$" << gainLoss << " (" << precentChange << "%)";

    //returns zero for function program complete
    return 0;
}