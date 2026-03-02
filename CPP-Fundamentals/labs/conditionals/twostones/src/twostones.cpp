#include <iostream>
#include <cassert>
#include <string>
using namespace std;

string odd_or_even(const int unsigned number)
{
    // FIXME4: if the number divided by 2 has 0 remainder, return 'even'
    //(stones & 1 ? "odd" : "even") is a common way to check if a number is odd or even using bitwise AND operator;
    if (number % 2 == 0)
        return "even";
    // otherwise, return 'odd'
    return "odd";
}

string answer(const int unsigned stone)
{
    string evenorodd = odd_or_even(stone);
    if (evenorodd == "odd")
        return "Alice";
    else
        return "Bob";
}

void test_odd_or_even()
{
    int unsigned number;
    number = 99999;
    assert(odd_or_even(number) == "odd");
    // FIXME5: Write 2nd test case
    number = 100000;
    assert(odd_or_even(number) == "even");
    // FIXME6: Write 3rd test case
    number = -2;
    assert(odd_or_even(number) == "even");
    cerr << "All test cases passed for odd_or_even() !\n";
}

// FIXME7: Write a function to test answer function using assert function
// Write at least 3 test cases
void test_answer()
{
    int unsigned stone;
    stone = 99999;
    assert(answer(stone) == "Alice");
    // test case 2
    stone = 100000;
    assert(answer(stone) == "Bob");
    // test case 3
    stone = -2;
    assert(answer(stone) == "Bob");
    cerr << "All test cases passed for answer() !\n";
}
