#include <iostream>
using namespace std;

void printBinaryInt(int num) {
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main(int argc, char* argv[]) {
    int num = 42;
    if (argc > 1)
        num = atoi(argv[1]);
    printBinaryInt(num);
}