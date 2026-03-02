#include <iostream>
using namespace std;

int add( int a, int b) {
    return a + b;
}

template<typename T1, typename T2>
T2 addTwo(T1 val1, T2 val2) {
      return val1 + val2;
}

template <typename T>
T addT( T a, T b) {
    return a + b;
}

template <typename T>
T addConst(const T &a, const T &b) {
    return a + b;
}

template <typename T>
T addRef(T &a, T &b, T &c) {
    c = a + b;
    return a + b;
}

int main() {
    float ff = addTwo(100, 3.14159);
    cout << "ff: " << ff << endl;
    int xx = addTwo(100, 3.14159);
    cout << "xx: " << xx << endl;

    int x = 5, y = 3;
    double m = 2.5, n = 1.3, o;
    // Example usage with integers
    int z;
    cout << "5 + 3 = " << addConst(5, 3) << endl;
    cout << "5 + 3 = " << addRef(x, y, z) << endl;
    cout << "Result stored in z: " << z << endl;
    
    // Example usage with doubles
    cout << "2.5 + 1.3 = " << addConst(2.5, 1.3) << endl;
    cout << "2.5 + 1.3 = " << addRef(m, n, o) << endl;
    cout << "Result stored in o: " << o << endl;

    return 0;
}