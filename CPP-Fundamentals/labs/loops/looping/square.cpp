#include <iostream>
using namespace std;

int main() {
    int size;
    
    cout << "Enter the size of the square: ";
    cin >> size;

    cout << "******" << endl;
    cout << "*    *" << endl;
    cout << "*    *" << endl;
    cout << "*    *" << endl;
    cout << "*    *" << endl;
    cout << "******" << endl;

    cout << endl;           //  next square



    for ( int i = 0; i < size; i++)     cout << "*";
    cout << endl;   

    cout << "*";
    for ( int i = 0; i < size-2; i++)   cout << " ";
    cout << "*" << endl;

    cout << "*";
    for ( int i = 0; i < size-2; i++)   cout << " ";
    cout << "*" << endl;

    cout << "*";
    for ( int i = 0; i < size-2; i++)   cout << " ";
    cout << "*" << endl;

    cout << "*";
    for ( int i = 0; i < size-2; i++)   cout << " ";
    cout << "*" << endl;

    for ( int i = 0; i < size; i++)   cout << "*";
    cout << endl;

    cout << endl;           //  next square

    //  once more with functions
    printLine('*', '*', '*', size);
    for (int i = 0; i < size - 2; i++) {
        printLine('*', ' ', '*', size);
    }
    printLine('*', '*', '*', size);


    




    for ( int i = 0; i < size; i++)     cout << "*";
    cout << endl;   

    for ( int row = 0; row < size-2; row++) {
        cout << "*";
        for ( int i = 0; i < size-2; i++)   cout << " ";
        cout << "*" << endl;
    }

    for ( int i = 0; i < size; i++)   cout << "*";
    cout << endl;

    cout << endl;           //  next square






    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == 0 || row == size - 1 || col == 0 || col == size - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;           //  next square
    







    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << ((i == 0 || i == size - 1 || j == 0 || j == size - 1) ? "*": " ");
        }
        cout << endl;
    }
    
    return 0;
}

void printLine(char left, char middle, char right, int size) {
    cout << left;
    for (int i = 0; i < size - 2; i++) {
        cout << middle;
    }
    cout << right << endl;
}