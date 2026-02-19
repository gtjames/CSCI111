#pragma once
#include <vector>
#include <string>
using namespace std;

const float EPSILON = 1e-4; // accuracy upto 4 decimal points

// function prototypes
void read_data(vector<int> &, const string);
int find_max(const vector<int> &);
int find_min(const vector<int> &);
float find_mean(const vector<int> &); // average
int find_range(const vector<int> &);
float find_median(vector<int>);
// bonus implement findMode function
int find_mode(const vector<int> &);

void write_data(const vector<int> &numbers);
void test();