#include <iostream>

using namespace std;
 
// int    add_ii(int     a, int     b) { return a + b; }
// float  add_ff(float   a, float   b) { return a + b; }
// double add_dd(double  a, double  b) { return a + b; }
// long   add_ll(long    a, long    b) { return a + b; }

template <typename T>   T add(T a, T b) { return a + b; }
template <typename T>   T sub(T a, T b) { return a - b; }

int main()
{
	// int a, b;

    cout << add(2, 3) << endl;          // int
    cout << add(2.5, 3.1) << endl;      // double
    cout << add(4L, 5L) << endl;        // long

    // auto result = add(2, 2.5);  // result is double
    // cout << result << endl;
}
