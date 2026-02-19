/*
    Loops Lab
    Updated By: [Your Name Here]
    CSCI 111
    Date: [Today's Date Here]

    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "shapes.h"

using namespace std;

int main(int argc, char *argv[])
{
    // FIXME3 add a loop to make the program to continue to run until the user wants to quit
    // FIXME4 call clear_screen function to clear the screen for each round of the loop
    int height;
    cout << "Program prints geometric shapes of given height with *\n";
    cout << "Please enter the height of the shape: ";
    cin >> height;
    // create traiangle by calling proper function passing user entered height
    stringstream triangle = get_triangle(height);
    // print the triangle
    print_shape(triangle.str());

    // FIXME5
    // create a flipped triangle by calling proper function passing user entered height and print it
    // Manually test the function

    // FIXME6
    // Create a square passing a proper argument and print it
    // Manually test the function

    // FIXME7
    // prompt user to enter y/Y to continue anything else to quit

    // FIXME8
    // Use conditional statements to break the loop or continue the loop

    return 0;
}