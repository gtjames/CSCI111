#include <iostream>
#include <string>
#include <map>

using namespace std;

void countTags(const string& text);

int main() {
    string str;
    cin >> str;
    countTags(str);
}

void countTags(const string& text) {
    string targets = "TCG";

    map<char, int> counts;

    for (char c : text) {
        if (targets.find(c) != string::npos) {
            counts[c]++;
        }
    }

    int smallest = min({counts['T'], counts['C'], counts['G']});
    int T = counts['T']*counts['T'];
    int C = counts['C']*counts['C'];
    int G = counts['G']*counts['G'];
    int extra = smallest * 7;
    int total = T + C + G + extra;
    // for (auto pair         : counts)  cout << pair.first << ": " << pair.second << endl;
    // for (auto [key, value] : counts)  cout << key        << ": " << value       << endl;
    cout << total << endl;
}