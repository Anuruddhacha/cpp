#include <iostream>
using namespace std;

class Car {
private:
    string engine;  // hidden detail
    int fuel;

public:
    Car(string eng, int f) : engine(eng), fuel(f) {}

    void drive() {
        if (fuel > 0) {
            cout << "Car is driving using " << engine << endl;
            fuel--;
        } else {
            cout << "No fuel!" << endl;
        }
    }
};
int main() {
   Car* _ptrCar = new Car("V8 Engine", 3);

    _ptrCar->drive();
    _ptrCar->drive();   
    _ptrCar->drive();
    _ptrCar->drive();  // No fuel!

    return 0;
}
