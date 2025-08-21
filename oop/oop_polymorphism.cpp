#include <bits/stdc++.h>
using namespace std;

class Base {
public:
     Base()
     {
        cout << "Base class constructor" << endl;
     }

     ~Base()
     {
        cout << "Base class destructor" << endl;
     }

    // Virtual function
    virtual void display() {
        cout << "Base class function";
    }
};

class Derived : public Base {
public:
    Derived()
     {
        cout << "Derived class constructor" << endl;
     }

    // Overriding the base class function
    void display() override{
        cout << "Inside Derived class function" << endl;
    }
};

int main() {
   
  Base* ptrBase;

  Derived derived;

  ptrBase = &derived;

  ptrBase->display();


    return 0;
}