#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

// declares main function of the program

int main() {
    double APY = 778.69, balance = 700.00, payment = 391.62, difference = 0.00, inter = 0.00;
    int payCount = 0;

    // Convert APY to monthly interest rate
    double monthlyInterestRate = APY / (12 * 100);

    while (payCount < 9) {
        inter = balance * monthlyInterestRate;
        balance += inter; // Add interest
        balance -= payment; // Subtract payment
        payCount++;
        cout << "Payments: " << payCount << endl;
        cout << "Balance: " << balance << endl << endl;
    }

    return 0;
}
