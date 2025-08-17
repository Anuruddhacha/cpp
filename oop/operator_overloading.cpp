#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    
    Complex(int r, int i){
        real = r;
        imag = i;
    }

    // Overloading the '+' operator
    int operator+(const Complex& obj) {
        return (real + obj.real +
        imag + obj.imag);
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    
    // Adding c1 and c2 using + operator
    int c3 = c1 + c2;  
    cout << c3 << endl;
    return 0;
}