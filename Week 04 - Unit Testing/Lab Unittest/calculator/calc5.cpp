#include <iostream>
#include <cmath>

#include "calculator.h"

using namespace std;
 
int main()
{
	double a, b;
    string op;

    cout << "Enter an expression (e.g. 2 + 3): ";
	cin >> a >> op >> b;

    if      (op == "+") { cout << add  (a, b) << endl;  }
    else if (op == "-") { cout << sub  (a, b) << endl;  }
    else if (op == "*") { cout << mult (a, b) << endl;  }
    else if (op == "/") { cout << div  (a, b) << endl;  }
    else if (op == "^") { cout << pow  (a, b) << endl;  }
    else                { cout << "Invalid op" << endl; }
}

double add  ( double a, double b ) { return a + b; }
double sub  ( double a, double b ) { return a - b; }
double mult ( double a, double b ) { return a * b; }
double div  ( double a, double b ) { return a / b; }
double power( double a, double b ) { return std::pow(a, b); }