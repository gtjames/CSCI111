#include <iostream>
#include <string>

#include "functions.h"

using namespace std;

int main() {
    string name;
    int age;

    while (true) {
        cout << "Enter your name: ";
        getline(cin, name);
        // •	Reads everything up to the newline
        // •	Consumes the newline
        // •	Designed for full lines, including spaces

        cout << "Enter your age: ";
        cin >> age;
        // •	Reads formatted input
        // •	Stops at whitespace (space, tab, newline)
        // •	Leaves the delimiter in the input buffer

        if (age <= 0)
            break;

        testAge(name, age);
    }
    return 0;
}