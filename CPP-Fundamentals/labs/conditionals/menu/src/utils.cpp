#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cassert>
#include "utils.h"

using namespace std;

// function clears the screen using system call
// NOTE: system call is not a security best pracice!
void clear_screen()
{
// use "cls" in windows and "clear" command in Mac and Linux
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void print_menu(void)
{
    cout << "========= Menu options =================\n";
    cout << "[1] Add two numbers\n";
    cout << "[2] Subtract two numbers\n";
    cout << "[3] Multiply two numbers\n";
    cout << "[4] Divide two numbers\n";
    cout << "[5] Find larger of two numbers\n";
    cout << "[6] Find smaller of two numbers\n";
    cout << "[7] Find average of two numbers\n";
    cout << "[8] Quit the program\n";
    cout << "Enter one of the menu options [1-8]: ";
}

void get_two_numbers(double &n1, double &n2)
{
    cout << "Enter two numbers separated by a space: ";
    cin >> n1 >> n2;
}

// double find_sum(const double &n1, const double &n2)
// {
//     return (n1 + n2);
// }

double find_difference(const double &n1, const double &n2)
{
    // FIXME1 - subtract n2 from n1 and return the difference
    return (n1 - n2);
}

double find_product(const double &n1, const double &n2)
{
    // FIXME2 - multiply n1 by n2 and return the product
    return (n1 * n2);
}

// void find_average(const double &n1, const double &n2, double &avg)
// {
//     // FIXME3 - find the average of n1 and n2 and update avg
//     // FIXME4 - Must call find_sum function to find the sum of n1 and n2
//     //  Note: this void function doesn't return a value but
//     //  the average will be stored in avg
//     avg = find_sum(n1, n2) / 2;
// }

double find_larger(const double &n1, const double &n2)
{
    // find the larger of n1 and n2 and return it
    double larger = (n1 >= n2) ? n1 : n2;
    return larger;
}

double find_smaller(const double &n1, const double &n2)
{
    // FIXME5 - find the smaller of n1 and n2 and return it
    double smaller = (n1 <= n2) ? n1 : n2;
    return smaller;
}

double find_quotient(const double &n1, const double &n2)
{
    // FIXME6 - divide n1 by n2 and return the quotient
    if (n2 == 0)
    {
        cout << "Error: division by zero is not allowed." << endl;
        return 0; // or you could throw an exception
    }
    return (n1 / n2);
}

// functions to run automated testing for various user-defined functions
void test()
{
    double answer = find_sum(10.0, 12.5);
    double expected = 22.5;
    assert(answer == expected);        // test case 1
    assert(find_sum(-5.0, 10.5) == 5.5); // test case 2

    // FIXME7 – Using assert function write at least 2 test cases for each of the following functions
    assert(find_difference(-5.0, 10.5) == -15.5); // test case 3
    assert(find_difference(15.0, 5.0) == 10.0); // test case 4
    assert(find_product(-5.0, 10.5) == -52.5); // test case 5
    assert(find_product(3.0, 4.0) == 12.0); // test case 6
    assert(find_larger(-5.0, 10.5) == 10.5); // test case 7
    assert(find_larger(3.0, 4.0) == 4.0); // test case 8
    assert(find_smaller(-5.0, 10.5) == -5.0); // test case 9
    assert(find_smaller(3.0, 4.0) == 3.0); // test case 10
    assert(find_quotient(12.0, -3.0) == -4.0); // test case 11
    double avg;

    cerr << "all test cases passed..." << endl;
}

// the crux of the program that uses all the defined functions
// the program is menu driven
bool program()
{
    int option = 1;            // variable to store user entered option
    double num1 = 0, num2 = 0; // variables to store two numbers entered by user
    // display menu options
    print_menu();
    // Input validation
    do
    {
        if (cin >> option && option >= 1 && option <= 8)
        {
            // input is valid, break loop
            break;
        }
        else
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 8" << endl;
        }
    } while (true);

    // Call the function(s) or perform some operations based on user input
    switch (option)
    {
    case 1:
    {
        // get two numbers and store them into num1 and num2 using function
        get_two_numbers(num1, num2);
        // call find_sum function; store the returned value in sum variable
        double sum = find_sum(num1, num2);
        // display the result with proper description
        printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
        break;
    }
    case 2:
    {
        // FIXME8: call get_two_numbers function
        // FIXME9: call find_difference function and print the result
        break;
    }
    case 3:
    {
        // FIXME10: get two numbers and find their product using functions
        break;
    }
    // FIXME11: complete the rest of the cases 4, 6, and 7
    case 5:
    {
        // get two numbers
        get_two_numbers(num1, num2);
        // find the larger of the two numbers
        double max = find_larger(num1, num2);
        // print the result
        printf("larger between %.2f & %.2f is %.2f\n", num1, num2, max);
        break;
    }
    case 8:
    default:          // must be option 8
        return false; // exit the program
    }
    return true;
}
