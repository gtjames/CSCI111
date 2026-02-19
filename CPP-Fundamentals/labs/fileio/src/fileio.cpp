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
    // FIXME1: Open input_file for reading data
    // read the data until eof marker and store each num into numbers vector
    int num;
}

void write_data(const vector<int> &numbers)
{
    // FIXME2
    /*
    Algorithm steps:
    1. Prompt user to enter output file name
    2. Store and use the file name to open the file in write mode
    3. Write output as shown in output.txt file with proper formatting using iomanip
    */
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
    // FIXME3 - implement function to find and return min value in nums vector
    return 0;
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
    return 0;
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
