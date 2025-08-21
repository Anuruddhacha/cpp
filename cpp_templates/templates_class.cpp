#include <iostream>
using namespace std;

// Defining class template
template <typename T> class Geek {
  public:
    T x;
    T y;

    // Constructor
    Geek(T val1, T val2){
        x = val1;
        y = val2;
    }

    // Method to get values
    void getValues() {
        cout << x << " " << y << endl;
    }
};

int main() {

    // Creating objects of Geek with
    // different data types
    Geek<int> intGeek(10, 20);
    Geek<double> doubleGeek(3.14, 6.28);

    // Access the templates values
    intGeek.getValues();
    cout << endl;
    doubleGeek.getValues();

    return 0;
}