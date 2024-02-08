#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

//declares main function of the program
int main() {
    const float PLAN_A_COST = 39.99, PLAN_B_COST = 59.99, PLAN_C_COST = 69.99,
    PLAN_A_ADDITONAL_COST = 10.00, PLAN_B_ADDITONAL_COST = 5.00;
    
    const int PLAN_A_DATA_CAP = 4, PLAN_B_DATA_CAP = 8;

    int packageChoice = 0;
    
    float total = 0, dataUsage = 0;

    string totalPrint = "The total amount due is $";

    cout << "iMobile Bill Calculator ..." << endl << endl;

    cout << "Select a subscription package:";
    cout << endl <<setw(20) << "1. Package A" << endl;
    cout << setw(20) << "2. Package B" << endl;
    cout << setw(20) << "3. Package C" << endl;
    cout << "Package: ";
    cin >> packageChoice;

    cout << endl << "How many gigabytes of data were used? ";
    cin >> dataUsage;

    if (packageChoice >=1 && packageChoice <= 3) {

        if (dataUsage >= 0) {
            switch (packageChoice) {
                case 1:
                    if (PLAN_A_DATA_CAP < dataUsage) {
                        total = PLAN_A_COST + ((dataUsage - PLAN_A_DATA_CAP) * PLAN_A_ADDITONAL_COST);
                        cout << endl << endl << totalPrint << fixed << setprecision(2) << total;
                        break;
                    }

                    else {
                        total = PLAN_A_COST;
                        cout << endl << endl << totalPrint << fixed << setprecision(2) << total;
                        break;
                    }
                
                case 2:
                    if (PLAN_B_DATA_CAP < dataUsage) {
                        total = PLAN_B_COST + ((dataUsage - PLAN_B_DATA_CAP) * PLAN_B_ADDITONAL_COST);
                        cout << endl << endl << totalPrint << fixed << setprecision(2) << total;
                        break;
                    }

                    else {
                        total = PLAN_B_COST;
                        cout << endl << endl << totalPrint << fixed << setprecision(2) << total;
                        break;
                    }
                    
                
                case 3: 
                    total = PLAN_C_COST;
                    cout << endl << endl << totalPrint << fixed << setprecision(2) << total;
                    break;
            }
        }

        else {
            cout << endl << "Error ... Invalid gigabytes entered. Try Again.";
        }

    }

    else {
        cout << endl << "Error ... Invalid package. Try again.";
    }

    return 0;
}