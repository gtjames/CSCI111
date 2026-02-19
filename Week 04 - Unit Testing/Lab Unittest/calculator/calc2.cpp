#include <iostream>

using namespace std;
 
int add(int a, int b);      //  function prototype (declaration) for add()

int main()
{
	int a, b;

	cin >> a >> b;

    cout << add(a, b) << endl;
}

int add(int a, int b) {
    return a + b;
}