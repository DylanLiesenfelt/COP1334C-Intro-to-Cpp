/*
Name(s): Guillaume, Janae
         Laurent, Lawrens
         Dylan Liesenfelt
         Willis, Charlie

Date: 28 April 2024

File: evergladesRPG.cpp

Description: "Lost in the Everglades in an RPG (Role-Playing-Game) between a player and the computer.
A group of tourists has been lost in the Everglades and a ranger must rescue them before time runs out.
The Everglades are represented by a 5x5 matrix. The ranger (R) starts the rescue at the upper-left corner of the park,
the group of tourists (T) are lost at the lower-right corner. 
The ranger has 12 gongs of time to find and rescue the tourists before they perish.
During the journey, the ranger might find dangers (hungry alligator, swarm of giant mosquitoes, venomous spider, or python).
When the ranger finds a danger, they can choose to fight them, or hide and wait for them to leave."
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

/*------------- Global Variables ----------*/
int gongs = 12;


/*------------- Functions ----------*/

void createGrid() {

}


//declares main function of the program
int main() {
    
    char playState = 'y';
    int menuOption = 0;

    while (playState == 'y' || playState == 'Y') {

        cout << "Menu ... " << endl;
        cout << "1. See Rules." << endl;
        cout << "2. Play Game." << endl;
        cout << "3. Quit Game." << endl;
        cout << "Please Choose A Menu Option: ";
        cin >> menuOption;

        if (menuOption < 1 || menuOption > 3)
        {
            cout << endl << "ERROR ... Invalid Input, Please Try Again." << endl << endl;
            cout << "1. See Rules." << endl;
            cout << "2. Play Game." << endl;
            cout << "3. Quit Game." << endl;
            cout << "Please Choose A Menu Option: ";
            cin.ignore();
            cin >> menuOption;
        }
        
        switch (menuOption) {

            case 1: // Game Rules
                cout << endl << endl << "Menu 1, Game Rules" << endl << endl; //Temp Place Holder
                
                //Print Rules Here

                break;

            case 2: // Game Actual
                cout << endl << endl << "Menu 2, Game Actual" << endl << endl; //Temp Place Holder
                
                // Game Play functionality goes here

                break;

            case 3: // Quit
                cout << endl << endl << "Thanks For Playing, Good Bye!";
                playState = 'n';
                break;
        }
    }

    return 0;
}