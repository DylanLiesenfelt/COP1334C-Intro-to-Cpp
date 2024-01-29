#include <iostream>
#include <string>
using namespace std;

int main()
{
    string month1 = "", month2 = "", month3 = "";
    double rain1 = 0, rain2 = 0, rain3 = 0;

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    cout << "The average rainfall for " << month1 << ", " << month2 << ", and" << month3 << " is " << (rain1 + rain2 + rain3) / 3 << " inches.";

    return 0;
}