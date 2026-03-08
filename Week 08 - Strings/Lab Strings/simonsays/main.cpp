/*
Kattis - Simon Says

Updated By: FIXME
Date: FIXME

Problem Statement: https://open.kattis.com/problems/simonsays 
Algorithm steps:
1. Read N
2. Loop N times:
  i. Read a line
  ii. If the line starts with "Simon says",
    print the rest of the string. Note: print the leading space after says as well!
  iii. Otherwise, skip the line
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// function prototypes
string answer(const string &line);
void testAnswer();
void solve();

int main(int argc, char* argv[]) {
  if (argc == 2 and string(argv[1]) == "test") {
    // FIXME1: call testAnswer function
    testAnswer();
  }
  else
    solve();
}

// unit testing answer()
void testAnswer() {
  string ans = answer("Simon says laugh!");
  // let's double check what the returned answer is
  cerr << "ans = " << ans << endl;
  assert(ans == " laugh!"); 
  // FIXME3: write at least two test cases to test answer()
  assert(answer("Simon says Practice Practice Practice.") == " Practice Practice Practice.");
  assert(answer("Simon says Be Cool.") == " Be Cool.");
  assert(answer("Do nothing.") == "");
  cerr << "All test cases passed!\n";
}

// solving the problem for kattis
void solve() {
  string ans="", line="";
  int N;
  cin >> N;
  //FIXME4 : read and discard \n left behind
  cin.ignore(1000, '\n');  // ignore the newline character left behind by cin

  while (N--) {
    // Note: i. string consists of phrase with spaces
    // ii. don't print an empty line if the line doesn't start with "Simon says"
    // FIXME5: read the whole line into line 
    getline(cin, line);  // read the actual string input
    // FIXME6: call answer function and store the returned value into ans
    ans = answer(line);

    if (ans == "") continue;
    // FIXME7: print ans
    cout << ans << endl;
  }
}
