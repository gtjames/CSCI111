    /*
FIXME1: Write programmer & program information
FIXME2: Write algorithm steps as comments
*/
#include <iostream>
#include <string>  //library for string data type
#include <cctype>  //provides functions for char data type
#include <cassert>
 
using namespace std;
 
//function prototype for isPalindrome function
bool isPalindrome(string);
bool isPalindrome1(string);
void test();
string removeSpaces(const string& input);
string toUpper(const string& input);
string toLower(const string& input);

 
//main function that can take some command line arguments
int main(int argc, char* argv[])
{ 
    if (argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS);
    }
 	string input; // variable to store user input
 	bool palin = false;
 	bool keepRunning = true; //variable to control the while loop
 	while (keepRunning) //while keepRunning equals to true
 	{
      	//prompt user to enter some text
      	cout << "Please enter word/phrase to check whether or not it’s a palindrome:\n";
      	//use getline to read data from common input and store into text variable
      	getline(cin, input, '\n');//read until the end of line character is found
      	
        // FXIME5: change isPalindrome to isPalindrome1 once the function is fixed 
        palin = isPalindrome(input);
 
      	if (palin == true)
           	cout << "The phrase \"" << input << "\" is a palindrome." << endl;
      	else
           	cout << "The phrase \"" << input << "\" is not a palindrome." << endl;
      	cout << "Would you like to test another phrase? [yes/no]: " << endl;
      	cin >> input; //read in the answer
        cin.ignore(1000, '\n');//ignore the newline character left behind
      	string answer = "";
      	for (int i = 0; i < input.length(); i++)
          //converts uppercase letter to lower and concatenates it to answer variable
           	answer += char(tolower(input.at(i))); 
 
      	if (!(answer == "y" || answer == "yes"))
           	keepRunning = false;
 	}
    cout << "Good bye...\n";
 	return 0;
}
 
//function definition for isPalindrome
//takes some string phrase and returns true if it is palindrome otherwise
//returns false
bool isPalindrome(string phrase)
{
 	bool isPalin = true;
    phrase = removeSpaces(phrase);
    phrase = toLower(phrase);
    for (int i = 0; i < phrase.size()/2; i++)
    {
        if (phrase.at(i) != phrase.at(phrase.size() - 1 - i))
        {
            isPalin = false;
            break;
        }
    }

    return isPalin;
}

// a naive function that checks if a given phrase is palindrome
// function doesn't ignore whitespaces on either end
// function doesn't stop at the middle index
bool isPalindrome1(string phrase) {
    bool isPalin = true;
    int forward_i = 0, backward_i = phrase.size()-1;
    while(forward_i < phrase.size() && backward_i >=0 && isPalin) {
        //cout << phrase[i] << " " << phrase[j] << endl;
        // make case insensitive comparison
        isPalin = (tolower(phrase[forward_i]) == tolower(phrase[backward_i]));
        forward_i += 1;
        backward_i -= 1;
    }
    return isPalin;
}

// test function
void test() {
    assert(isPalindrome("Bob") == true);
    assert(isPalindrome("home") == false);
    assert(isPalindrome("Racecar") == true);
    assert(isPalindrome("Race car") == false);
    // FIXME4: Write at least 4 test cases to test isPalindrome function
    cout << "all test cases passed!\n";
}

string removeSpaces(const string& input) {
    string result;

    for (char c : input)
    {
        if (c != ' ')
            result += c;
    }

    return result;
}

string toLower(const string& input)
{
    string result = input;

    for (char& c : result)
        c = std::tolower(static_cast<unsigned char>(c));

    return result;
}

string toUpper(const string& input)
{
    string result = input;

    for (char& c : result)
        c = std::toupper(static_cast<unsigned char>(c));

    return result;
}