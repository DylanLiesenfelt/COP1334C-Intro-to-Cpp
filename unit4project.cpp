/* Chapter 4: Programming Project 1
Write a program that asks the user to enter a number within the range of 1 through 10. 
Use a switch statement to display the Roman numeral version of that number.
Input Validation: If the user enters a number that is less than 1 or greater than 10,
display the message "Enter a number in the range 1 through 10."
The following two sample runs show the expected output of the program. 
The user's input is shown in bold. Notice the wording of the output and the placement of spaces and punctuation.
Your program's output must match this.
Sample Run
Enter a number (1 - 10): 7
The Roman numeral version of 7 is VII. 
Sample Run
Enter a number (1 - 10): 12
Enter a number in the range 1 through 10.*/

#include <iostream>

using namespace std;

//declares main function of the program
int main() {
    
    int number = 0;

    cout << "Enter a number (1 - 10): ";
    cin >> number;

    if (number >=  1 && number <= 10) {
        switch (number) {
            case 1:
                cout << "The Roman numeral version of " << number << " is I.";
                break;
            case 2:
                cout << "The Roman numeral version of " << number << " is II.";
                break;
            case 3:
                cout << "The Roman numeral version of " << number << " is III.";
                break;
            case 4:
                cout << "The Roman numeral version of " << number << " is IV.";
                break;
            case 5:
                cout << "The Roman numeral version of " << number << " is V.";
                break;
            case 6:
                cout << "The Roman numeral version of " << number << " is VI.";
                break;
            case 7:
                cout << "The Roman numeral version of " << number << " is VII.";
                break;
            case 8:
                cout << "The Roman numeral version of " << number << " is VIII.";
                break;
            case 9:
                cout << "The Roman numeral version of " << number << " is IX.";
                break;
            case 10:
                cout << "The Roman numeral version of " << number << " is X.";
                break;      
        }
    }

    else {
        cout << "Enter a number in the range 1 through 10.";
    }


    return 0;
}