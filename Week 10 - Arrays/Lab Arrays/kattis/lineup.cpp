#include <cstring>
#include <string>
#include <cassert>

#include "lineup.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int count;
    if (argc > 1) {
        string test1[] = {"a"};
        assert(direction(test1, 1) == "INCREASING");
        string test2[] = {"b", "a"};
        assert(direction(test2, 2) == "DECREASING");
        string test3[] = {"a", "b"};
        assert(direction(test3, 3) == "INCREASING");
        string test4[] = {"a", "c", "r", "b"};
        assert(direction(test4, 4) == "NEITHER");
        string test5[] = {"a", "a", "a", "a"};
        assert(direction(test5, 4) == "NEITHER");
        return 0;
    }
    std::cin >> count;
    std::string* names = new std::string[count];
    for (int i = 0; i < count; i++) {
        std::cin >> names[i];
    }
    
    // auto [ascending, descending] = direction(names, count);
    std::cout << direction(names, count) << std::endl;
}