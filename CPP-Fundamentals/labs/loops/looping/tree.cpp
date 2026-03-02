//  print a symetric christmas tree pattern using asterisks
#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;    

int main()
{
    int height;
    cout << "Enter the height of the tree: ";
    cin >> height;
    for (int i = 0; i < height; i++)
    {
        // print spaces
        for (int j = 0; j < height - i - 1; j++)
            cout << " ";
        // print asterisks
        for (int k = 0; k < 2 * i + 1; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}