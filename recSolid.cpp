#include <iostream>

using namespace std;

//declares main function of the program
int main() {
    
    //declares varriables
    double length, width, height;

    //output that gives user information on the program
    cout << "This Program can be used to calculate the VOLUME and SURFACE AREA of a rectangular solid.";
    
    //Gets users input for length width and height vars
    cout << "ENTER the Length: ";
    cin >> length;

    cout << "ENTER the Width: ";
    cin >> width;

    cout << "ENTER the Height: ";
    cin >> height;

    //Calcs for Volume and Surface Area
    double volume = length * width * height;
    double sa = 2 * (length * height + width * height + width * length);

    //Outputs the calculated values
    cout << "Volume: " << volume << endl;
    cout << "Surface Area: " << sa << endl;

    return 0;
}