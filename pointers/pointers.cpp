#include <iostream>
using namespace std;

int main() {
    int var = 10;

    // declare pointer and store address of x
    int* ptr = &var;

    *ptr = 100;

    // print value and address
    cout << "Value of x: " << var << endl;
    cout << "Address of x: " << &var << endl;
    cout << "Value stored in pointer ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    cout << "Size of pointer: " << sizeof(ptr) << " bytes" << endl;

    return 0;
}