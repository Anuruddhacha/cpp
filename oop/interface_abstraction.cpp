#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function = interface
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {


    Shape* _ptrCircle = new Circle();
    _ptrCircle->draw();

    Shape* _ptrRectangle = new Rectangle();
    _ptrRectangle->draw();


    delete _ptrCircle;
    delete _ptrRectangle;
    return 0;
}
