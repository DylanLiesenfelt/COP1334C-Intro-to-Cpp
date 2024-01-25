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
    
    string companyName = "", companySymbol = "";
    double numberOfShares = 0, costPerShareBuy = 0, commissonAtBuy = 0, pricePerShareSell = 0, commissonAtSell = 0, totalCost = 0, totalProceeds = 0, totalCommisson = 0, gainLoss = 0, precentChange = 0;
    const double COMMISSION_RATE = 0.02;

    cout << "Stock Investment Performance Calculator ..." << endl << endl;

    cout << "Company Name (no spaces) & Symbol:       ";
    cin >> companyName >> companySymbol;
    
    cout <<"Number of Shares Transacted:             ";
    cin >> numberOfShares;

    cout << "Cost per Share (@ buying):               ";
    cin >> costPerShareBuy;

    cout << "Price per Share (@ selling):             ";
    cin >> pricePerShareSell;

    cout << endl << "Realiized Gains/Losses Report ..." << endl;
    cout << "-------------------------------------" << endl;

    cout << "Stock:           " << companyName << " " << "(" << companySymbol  << ")" << endl;
    
    cout << "Quantity:        " << numberOfShares << " shares." << endl << endl;

    totalCost = numberOfShares * costPerShareBuy;
    cout << "Total Cost:      " << "$" <<totalCost;

    totalProceeds = numberOfShares * pricePerShareSell;
    cout << endl <<"Total Proceeds:  " << "$" << totalProceeds;

    commissonAtBuy = totalCost * COMMISSION_RATE;
    commissonAtSell = totalProceeds * COMMISSION_RATE;
    totalCommisson = commissonAtBuy + commissonAtSell;
    cout << endl << "Commission:      " << "$" << totalCommisson;

    gainLoss = totalProceeds - totalCost;
    precentChange = (gainLoss / totalCost) * 100;
    cout << endl << "Gains/Losses:    " << "$" << gainLoss << " (" << precentChange << "%)";

    return 0;
}