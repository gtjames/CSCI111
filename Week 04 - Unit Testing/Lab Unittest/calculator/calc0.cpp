#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

    cout << add(a, b) << endl;		//	does not compile because add() is not declared before this line
}

int add(int a, int b) {
	return a + b;
}
