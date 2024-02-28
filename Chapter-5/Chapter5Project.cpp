// Assume a file named Random.txt exists, and contains a list of random numbers. Write a program that opens the file, reads all the numbers from the file, and calculates the following:
// The number of numbers in the file
// The sum of all the numbers in the file (a running total)
// The average of all the numbers in the file
// The program should display the number of numbers found in the file, the sum of the numbers, and the average of the numbers.
// Output Labels: Print each of the above quantities on a line by itself, preceded by the following (respective) strings: "Number of numbers: ", "Sum of the numbers: ", and "Average of the numbers: ".
// Sample Run
// Number of numbers: 20
// Sum of the numbers: 210
// Average of the numbers: 10.5 

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Variables
	int count = 0;       // To count numbers
	double number;       // To hold a number from the file
	double total = 0.0;  // Accumulator
	double average;      // To hold the average
   
	// File stream object
	ifstream inFile;
   
	// Open the file.
	inFile.open("Random.txt");
   
	// Read the numbers from the file.
	while (inFile >> number)
	{
		// We have a number! Increment the counter.
		count++;
      
		// Add the number to the accumulator.
		total += number;
	}
   
	// Close the file.
	inFile.close();
   
	// Calculate the average of the numbers.
	average = total / count;
   
	// Display the results.
	cout << "Number of numbers: " << count << endl
		 << "Sum of the numbers: " << total << endl
		 << "Average of the numbers: " << average
		 << endl;
        
	return 0;
}