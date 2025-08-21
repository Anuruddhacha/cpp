// C++ program to illustrate the use of auto_ptr
#include <iostream>
#include <memory>

using namespace std;

// creating class with overloaded constructor and destructor
class Integer {
public:
    Integer() { cout << "Object Created" << endl; }

    ~Integer() { cout << "Object Destroyed" << endl; }

    int getInt(){return 10;}
};

// driver code
int main()
{
    // creating auto pointer to Integar class
    auto_ptr<Integer> ptr(new Integer());

    cout << ptr->getInt() << endl;

    // not using delete

    return 0;
}