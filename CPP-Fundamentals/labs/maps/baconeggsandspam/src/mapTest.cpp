#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> addWords(const string &line)
{
    vector<string> words;
    stringstream ss(line);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}

int main(int argc, char *argv[]) {
    string line;
    map<string, set<string>> items;
    
    cout << "Enter Key followed by text" << endl;
    getline(cin, line);
    while (line != "0") {
        vector<string> words = addWords(line);
        for (size_t i = 1; i < words.size(); i++) {
            items[words[i]].insert(words[0]);
        }
        getline(cin, line);
    }
    // Print the items and associated namespring
    for (const auto &item : items) {
        cout << item.first;
        for (const auto &name : item.second) {
            cout << " " << name;
        }
        cout << endl;
    }   
    return 0;
}

