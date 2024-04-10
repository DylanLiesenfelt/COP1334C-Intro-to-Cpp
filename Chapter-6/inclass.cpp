/*
    Author: Dylan Liesenfelt
    Date: 27 MARCH, 2024
*/
#include <iostream>
using namespace std;

void doubleNum(int &);
void trippleNum(int &);

int main() {
    int value, menu = 0;

    cout << "Enter a number: ";
    cin >> value;
    cin.ignore();
    
    cout << endl << endl << "Double number enter 1, tripple number enter 2: ";
    cin >> menu;
    
    switch (menu)
    {
    case 1:
        doubleNum(value);
        cout << "Doubled Value: " << value << endl;
        break;
    
    case 2:
        trippleNum(value);
        cout << "Trippled Value: " << value << endl;
        break;
    default:
        cout << "Error.";
        break;
    }

    return 0;
}

void doubleNum(int &refVar) {
    refVar *= 2;
}

void trippleNum(int &refVar) {
    refVar *= 3;
}