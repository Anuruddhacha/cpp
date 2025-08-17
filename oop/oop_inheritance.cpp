#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    int n;
    virtual void printN() {
        cout << n << endl;
    }
};

// Inheriting Base class publicly
class Derived : public Base {
    public:
    void func () {
        // Accessing Base class members
        n = 22;
        printN();
    }

};

int main() {
    
    // Creating objects of derived
    Derived d;
    
    // Accessing Derived class member
    d.func();
    
    // Accessing Base class member
    d.printN();
    return 0;
}