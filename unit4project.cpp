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
#include <string>
#include <iomanip>

using namespace std;

//declares main function of the program
int main() {
    
    int number;

    cout << "Enter a number in the range 1 through 10.";
    cin >> number;


    return 0;
}