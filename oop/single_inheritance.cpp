#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle"<< endl;
    }
};

// Sub class derived from a single base classes
class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is Car"<< endl;
    }
};

int main() {
    
    // Creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}