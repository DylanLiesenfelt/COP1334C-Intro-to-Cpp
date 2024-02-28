// Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that calculates and displays:
// The number of millimeters higher than the current level that the ocean’s level will be in 5 years
// The number of millimeters higher than the current level that the ocean’s level will be in 7 years
// The number of millimeters higher than the current level that the ocean’s level will be in 10 years
// The following sample run shows the output of the program. Notice the wording of the messages and the placement of spaces and punctuation. The ↵ symbols show where newline characters ("\n") should be displayed. Your program's output must match this.
// Sample Run
// In 5 years the ocean's level will be higher by 7.5 millimeters.
// In 7 years the ocean's level will be higher by 10.5 millimeters.
// In 10 years the ocean's level will be higher by 15 millimeters.

#include <iostream>
using namespace std;

int main() {
    
    const double RAISE_RATE = 1.5;
    
    cout << "In 5 years the ocean's level will be higher by " << RAISE_RATE * 5 << " millimeters." << endl;
    cout << "In 7 years the ocean's level will be higher by " << RAISE_RATE * 7 << " millimeters." << endl;
    cout << "In 10 years the ocean's level will be higher by " << RAISE_RATE * 10 << " millimeters." << endl;

    return 0;
}
