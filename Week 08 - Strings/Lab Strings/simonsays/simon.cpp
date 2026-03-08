#include <iostream>
#include <string>  //library for string data type
 
using namespace std;
 
//main function that can take some command line arguments
int main(int argc, char* argv[]) { 
    int counter = 0;
    string str;

    cin >> counter;
    cin .ignore(1000, '\n');  // ignore the newline character left behind by cin
    for (int i = 0; i < counter; i++) {
        getline(cin, str);  // read the actual string input
        didSimonSay(str);
    }   
}

void didSimonSay(string str) {
    if (str.find("Simon says") != string::npos)
    cout << str.substr(11) << endl;
}
