#include <iostream>
#include <cstring>

using namespace std;

string direction(string names[], int count) {
    bool ascending  = true; //  default to true, and then check if it is false
    bool descending = true;
    for (int i = 0; i < count-1; i++) {
        if (names[i] > names[i + 1]) {
            ascending = false;
        } else if (names[i] < names[i + 1]) {
            descending = false;
        }
    }
    cout << endl;
    return (ascending) ? "INCREASING" : (descending) ? "DECREASING" : "NEITHER";
}
