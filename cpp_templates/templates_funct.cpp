#include <iostream>
using namespace std;

template <typename T> T myMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T> T myMin(T a, T b) {
    return (a < b) ? a : b;
}

int main() {

    // Call myMax for int
    cout << myMin<int>(3, 7) << endl;

    // call myMax for double
    cout << myMin<double>(3.0, 7.0) << endl;

    // call myMax for char
    cout << myMin<char>('g', 'e');

    return 0;
}