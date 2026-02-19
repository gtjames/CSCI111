#include <iostream>
#include <string>

#include "functions.h"

using namespace std;

// Let's talk aboiut the const string& name parameter. Why is it a const reference?
// 1. We don't want to modify the name parameter inside the function, so we declare it as const to prevent accidental changes.
// 2. Passing by reference (using &) allows us to avoid copying the string, which can be expensive in terms of performance, especially for larger strings. By using a reference, we can pass the string efficiently without the overhead of copying it.
// 3. Using const also allows us to pass temporary string literals or expressions without worrying about their lifetime, as the function guarantees that it won't modify the input string.  

string testAge(const string& name, int age) {
    if (age < LOW_AGE) {
        cout << name << ", parent needed\n";
    }
    else if (age >= LOW_AGE && age <= HIGH_AGE) {
        cout << name << ", please wait.\n";
    }
    else {
        string item;
        cout << "Enter Prod ID: ";
        cin.ignore();   // clear leftover newline
        getline(cin, item);

        cout << "Great choice, " << name
                  << ". You want to buy: " << item << endl;
    }
    return "";
}