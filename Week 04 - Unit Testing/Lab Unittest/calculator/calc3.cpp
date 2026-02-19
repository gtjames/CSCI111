#include <iostream>

using namespace std;
 
int add(int, int);      //  the names of the variables in the parameter list of the function prototype are optional, so we can omit them if we want to  

int main()
{
	int a, b;

	cin >> a >> b;

    cout << add(a, b) << endl;
}

int add(int a, int b) {
    return a + b;
}