#include <iostream>
using namespace std;

// Defining class template with
// multiple type parameters and one default type
template <typename T1, typename T2 = double, typename T3 = string>
class Geek {
  public:
    T1 x;
    T2 y;
    T3 z;

    // Constructor to initialize data members
    Geek(T1 val1, T2 val2, T3 val3) :
    x(val1), y(val2), z(val3) { }

    // Method to get values
    void getValues() {
        cout << x << " " << y << " " << z;
    }
};

int main() {

    // Creating objects of Geek
    // with different data types
    Geek<int, float, string> intFloatStringGeek(10, 5.67f, "Hello");
    Geek<char> charDoubleStringGeek('A', 3.14, "World");

    intFloatStringGeek.getValues();
    cout << endl;
    charDoubleStringGeek.getValues();

    return 0;
}