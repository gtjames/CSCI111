//  ask user for a number and print the multiplication table for that number from 1 to 10
#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;    

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    // num = rand() % 10 + 1; // generate a random number between 1 and 10
    //  print numbers from 1 to num with fixed width of 4
    int width = (num > 31) ? 5 : 4; // adjust width for larger numbers
    cout << "    ";
    for (size_t col = 0; col <= num; col++)
        cout << setw(width) << col;

    for (int row = 0; row <= num; row++) {
        cout << endl << setw(width)  << row;
        for (int col = 0; col <= num; col++)
        {
            cout << setw(width)  << row * col;
        }
    }
    cout << endl;
    return 0;
}