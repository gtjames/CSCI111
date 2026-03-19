#include <iostream>
#include <cstring>

using namespace std;

// pair<bool, bool> direction(string* names, int count) {
string direction(string* names, int count) {
    bool ascending  = true; //  default to true, and then check if it is false
    bool descending = true;
    for (int i = 1; i < count; i++) {
        if (names[i] > names[i - 1]) {
            descending = false;
        } else if (names[i] < names[i - 1]) {
            ascending = false;
        }
    }
    if (ascending) {
        return "INCREASING";
    } else if (descending) {
        return "DECREASING";
    } else {
        return "NEITHER";
    }
    // return {ascending, descending};
}
