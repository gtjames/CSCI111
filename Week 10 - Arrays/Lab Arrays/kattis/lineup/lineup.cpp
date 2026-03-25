#include <cstring>
#include <string>
#include <cassert>

#include "lineup.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int count;
    if (argc > 1 && string(argv[1]) != "test") {
        string* newArgs = new string[argc - 1];

        for (int i = 1; i < argc; i++) {
            newArgs[i - 1] = string(argv[i]);
        }
        cout<< endl << direction(newArgs, argc-1) << endl;
    }
    else if (argc > 1 && string(argv[1]) == "test" ) {
        string test1[] = {"a"};
        assert(direction(test1, 1) == "INCREASING");
        string test2[] = {  "aZZZZZpple", "aYYYaron", "aXXXardvark"};
        cout << direction(test2, 3) << endl;
        // assert(direction(test2, 3) == "DECREASING");
        string test3[] = {"a", "b", "c"};
        assert(direction(test3, 3) == "INCREASING");
        string test4[] = {"a", "c", "r", "b"};
        assert(direction(test4, 4) == "NEITHER");
        string test5[] = {"A", "X", "a", "x", "z"};
        assert(direction(test5, 5) == "INCREASING");
        return 0;
    } else {
        cin >> count;
        string* names = new string[count];
        for (int i = 0; i < count; i++) {
            cin >> names[i];
        }
        // auto [ascending, descending] = direction(names, count);
        cout << direction(names, count) << endl;
    }
    
}