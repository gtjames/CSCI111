/*
    CS1 - File IO Lab

    Updated by: [Your Name]
    Date: [Current Date]

    The program reads numbers from a file and finds statistical values from those numbers.
    Lab demonstrates the file io and vector application.
    Statistical value's definitions for mean, median, mode, etc. can be found here:
    https://www.purplemath.com/modules/meanmode.htm
*/

#include <iostream>
#include <string>
#include <vector>
#include "fileio.h"

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> numbers;
    string input_file;
    cout << "Enter input file name: ";
    getline(cin, input_file);
    read_data(numbers, input_file);
    write_data(numbers);
    cout << "All done. Enter to exit...";
    cin.get();
    return 0;
}
