#include <iostream>
#include <string>

using namespace std;

string answer(const string &line) {
  // FIXME2: If the line starts with "Simon says", return rest of the line after says
  // including the space after says, otherwise return empty string ""
  // Hint: use find method on line object
  if (line.find("Simon says") != string::npos)
      return line.substr(10); // "Simon says" has 10 characters, so we start from index 10 to get the rest of the line
  return "";
}
