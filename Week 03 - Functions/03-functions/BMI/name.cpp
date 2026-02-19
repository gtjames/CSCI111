#include <string>
#include <iostream>
#include <iomanip>
using namespace std;


void doubleNumber(int& num);
void myFunction(const int &);

int main() {
	string name;
	cout << "Enter your full name: ";
	cin >> name;
    cout << "Hello, " << name << "!" << endl;

    string address1 = "1100 North Ave";
    string state_code = "CO";
    string country = "USA";
    cout << "CMU's address:\n"
    << address1 << endl
    << "Grand Junction, " << state_code << "  " << 81501 << endl
    << country << endl;

    cout << fixed << setprecision(2) << 1.0 << " " << 2.123 << endl;
    
    int num1 = 10;
    int num2 = 20;
    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;

    float weight = 150.0; // in pounds
    float height = sqrt(weight);
    cout << height << endl;

    char ch;
    int num;
    float fnum1;
    //  string name;
    cout << "10.5 A 9 John" << endl;
	cin  >> fnum1 >>        ch >>        num >>        name;
    cin.ignore();
    cout << fnum1 << " " << ch << " " << num << " " << name << endl;

    cout << char(tolower('A')) << " " << int(char(tolower('A'))) << "  " << tolower('A') << endl;

    cout << setw(5) << setfill('=') << "abcefgh" << endl;
    
	// char bslash = '\\';

    cout << int(99.99) << endl;
	cout << atoi("99.99") << endl;
	cout << atof("98.99") << endl;

    cout << "enter name\n";
    getline(cin, name);
    cout << name << endl;
    cin >> ch;
    cout << ch;
    cin >> ch;
    cout << ">" << name << "<"<< endl;
    cout << ch;
    int num3 = 10;
    doubleNumber(num3);
    cout << num3;
    myFunction(num3);
    cout << num3;
    
    return 0;
}

void doubleNumber(int& num) {
    num = num * 2;
}

void myFunction(const int &num) {
    // num = num * 2; // This will cause a compilation error
    cout << "Inside myFunction: " << num << endl;
}
