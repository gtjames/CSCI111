#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main()
{
	int a, b;

	cin >> a >> b;

    cout << add(a, b) << endl;		//	now we know about add() before this line, so it compiles fine
}
