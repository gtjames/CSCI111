/*  
 Kattis Add Two Numbers Lab
 By: FIXME
 CSCI 111
 Date: FIXME
 
Read and Solve Add Two Numbers: https://open.kattis.com/problems/addtwonumbers 
 
Algorithm steps:
	1. Read two numbers
	2. Add them up and print the result
*/
 
#include <iostream>

using namespace std;
 
int main()
{
	// declare variables to store input data and answer
	int a, b, ans;
	cout << "Enter 2 numbers to add together: ";
	cin >> a >> b;

	// FIXME1: Read the 2nd number
//cin >> b;
	// FIXME2: add two numbers and store the result into ans variable
	ans = a + b;
	// FIXME3: print the answer
	cout << a << " + " << b << " = " << ans << endl;
	return 0;
}
