#include <iostream>
using namespace std;

int main() {
    double x = 42;
    
    // void pointer holding address of an int
    void* ptr = &x; 

    // Error: cannot dereference void pointer
    // cout << *ptr; 

    // Typecast before dereferencing
    cout << "Value pointed by void pointer: " << *(static_cast<double*>(ptr)) << endl;

    return 0;
}