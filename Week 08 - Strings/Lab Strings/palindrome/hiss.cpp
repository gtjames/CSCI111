#include <iostream>
#include <string>  //library for string data type
#include <cctype>  //provides functions for char data 
#include <cassert>

using namespace std;
 
bool findSs(string input);
bool find2Ss(string input);

//main function that can take some command line arguments
int main(int argc, char* argv[]) { 
    string str;

    if (argc == 2 && string(argv[1]) == "test") {
        assert(findSs("hiss") == true);
        assert(findSs("mississippi") == true);
        assert(findSs("hello") == false);
        assert(findSs("s") == false);
        cout << "all test cases passed!\n";
        exit(EXIT_SUCCESS);
    }   

    cin >> str;
    if (findSs(str))
        cout << "hiss" << endl;
    else
        cout << "no hiss" << endl;

    cout << (find2Ss(str) ? "hiss" : "no hiss") << endl;
}

bool findSs( string input) {
    string result;

    int len = input.length();
    for (int i = 0; i < len-1; i++) {
        if (input.at(i) == 's' && input.at(i+1) == 's')
            return true;
    }

    return false;
}


bool find2Ss(string input) {
    cout << input.find("ss") << endl;
    return input.find("ss") != string::npos;        //  what is npos?  what does it mean when find returns npos?
                                                    //  npos is a static member constant value with the greatest possible value for an element of type size_t.
                                                    //  When find() doesn't find the substring, it returns npos.
}
