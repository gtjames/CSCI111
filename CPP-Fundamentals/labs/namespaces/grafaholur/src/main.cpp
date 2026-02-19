/*
Namespace Lab

Updated By: [Your Name]
Date: [Today's Date]
CSCI 111 - Foundations of Computer Science
Instructor: [Instructor's Name]

Kattis Problem Diggy Hole - https://open.kattis.com/problems/grafaholur

Algorithm steps:
   1. Read first 3 lines representing: n workers, h hours, x cubic meters
    - n workers can dig x cubic meters in h hours
   2. Read last 2 lines representing: m workers, y cubic meters
   3. Determine how long it takes m workers to dig y cubic meters
   4. Use fruitful functions and namespaces where appropriate
*/

#include <iostream>
#include "dig.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Your solution here
    int n, h, x, m, y;
    cin >> n >> h >> x >> m >> y;

    // Calculate the rate of work per worker
    double rate_per_worker = dig::calculate_rate_per_worker(n, h, x);

    // Calculate time for m workers to dig y cubic meters
    double time_needed = dig::calculate_time_needed(m, rate_per_worker, y);

    cout << time_needed << endl;

    return 0;
}
