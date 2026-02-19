#include <iostream>

float calculate(float a, float b, const std::string& op);

using namespace std;
 
int main()
{
	// declare variables to store input data and answer
	float a, b;
    float ans;
    string op;

    // cout << "Enter an simple expression (e.g., 3 + 4): ";
	cin >> a >> op >> b;
    ans = calculate(a, b, op);
    // cout << "The result is: " << ans << endl;
    cout << ans << endl;
}

float calculate(float a, float b, const std::string& op) {
    if (op == "+") {
        return a + b;
    }
    else if (op == "-") {
        return a - b;
    }
    else if (op == "^") {
        return std::pow(a, b);
    }
    else if (op == "*") {
        return a * b;
    }
    else if (op == "/") {
        if (b == 0) {
            throw std::runtime_error("Division by zero");
        }
        return (float)(a / b);  // integer division
    }
    else {
        throw std::runtime_error("Invalid operator");
    }
}