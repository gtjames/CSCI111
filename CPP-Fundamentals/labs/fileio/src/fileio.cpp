#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <cassert>
#include "fileio.h"

void read_data(vector<int> &numbers, const string input_file)
{
    // FIXED1: Open input_file for reading data
    ifstream inFile(input_file);
    if (!inFile)    {
        cerr << "Error opening file: " << input_file << endl;
        exit(1);
    }
    // read the data until eof marker and store each num into numbers vector
    int num;
    while (inFile >> num) {
        numbers.push_back(num);
    }
}

void write_data(const vector<int> &numbers)
{
    /*
    Algorithm steps:
    1. Prompt user to enter output file name
    2. Store and use the file name to open the file in write mode
    3. Write output as shown in output.txt file with proper formatting using iomanip
    */
    // FIXED2
    string fileName;
    cout << "Enter output file name: ";
    getline(cin, fileName);
    ofstream outFile(fileName);
    outFile << "List of Numbers: ";
    for (int n : numbers)        outFile << n << " ";
    outFile << "\n\n" << setfill('=') << setw(41) << "\n";
    outFile << "        Statistical Results\n";
    outFile << setfill('=') << setw(41) << "\n";
    outFile << left << setfill(' ') << setw(8) << "Max" << setw(8) << "Min" << setw(8) << "Mean" << setw(8) << "Median" << setw(8) << "Range" << endl;

    outFile << left << setfill(' ') 
            << setw(8) << find_max(numbers)
            << setw(8) << find_min(numbers)
            << setw(8) << fixed << setprecision(2) << find_mean(numbers)
            << setw(8) << fixed << setprecision(2) << find_median(numbers)
            << setw(8) << find_range(numbers) << endl;  
}

int find_max(const vector<int> &nums)
{
    int max = nums[0];
    for (int n : nums)
        max = (n > max) ? n : max;
    return max;
}

int find_min(const vector<int> &nums)
{
    // FIXED3 - implement function to find and return min value in nums vector
    return *min_element(nums.begin(), nums.end());
}

float find_mean(const vector<int> &nums)
{
    // same as average
    long long int sum = 0;
    for (int n : nums)
        sum += n;
    return sum / float(nums.size());
}

int find_range(const vector<int> &nums)
{
    // FIXME6 - implement function that finds and returns the range value
    // range = max - min
    return find_max(nums) - find_min(nums);
}

float find_median(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    float median;
    if (nums.size() % 2 == 0)
    { // even set
        median = (nums[nums.size() / 2] + nums[nums.size() / 2 - 1]) / float(2);
    }
    else
    { // odd set
        median = nums[nums.size() / 2];
    }
    return median;
}
