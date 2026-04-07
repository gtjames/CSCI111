#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include "bacon.h"

using namespace std;

vector<string> split_string(const string &line)
{
    vector<string> words;
    stringstream ss(line);
    string word;
    while (ss >> word)
    {
        // FIXED1: add each word to words vector
        words.push_back(word);
    }
    return words;
}

map_str_set read_items(map_str_set mss, int n)
{
    map_str_set items_guests = mss;
    string line;
    for (int i = 0; i < n; i++)
    {
        getline(cin, line);
        vector<string> tokens = split_string(line);
        // FIXED2: for each menu item in tokens after the first token (customer name),
        // add the customer name to the set of names for that item in the map
        for (size_t j = 1; j < tokens.size(); j++)
        {
            items_guests[tokens[j]].insert(tokens[0]);
        }
    }
    return items_guests;
}

void print_items(const map_str_set &items)
{
    for (auto e : items) {
        cout << e.first;
        // FIXED3: print all customer names in the set associated with the menu item
        for (const auto &name : e.second)
        {
            cout << " " << name;
        }
        cout << endl;
    }
}

void solve()
{
    string line;
    string word;
    map_str_set items;
    int n;
    while (true) {
        cin >> n;
        if (n == 0)
            break;
        cin.get(); // consume/discard newline character
        items = read_items(items, n);
    print_items(items);
    }
}