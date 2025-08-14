#include <iostream>

class Base {
public:
    virtual void greet() {
        std::cout << "Hello from Base" << std::endl;
    }
};

class Derived1 : public Base {
public:
    void greet() override {
        std::cout << "Hello from Derived1" << std::endl;
    }
};

class Derived2 : public Base {
public:
    void greet() override {
        std::cout << "Hello from Derived2" << std::endl;
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    // Optionally, you can override greet in FinalDerived to resolve ambiguity
    void greet() override {
        Derived1::greet(); // Explicitly call Derived1's greet
        // Or you can choose to call Derived2::greet()
        // Derived2::greet();
    }
};

int main() {
    FinalDerived obj;
    obj.greet(); // Resolves ambiguity by using the overridden method in FinalDerived

    return 0;
}
