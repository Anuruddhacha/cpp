#include <iostream>

class Singleton {
private:
    static Singleton* instance;

    // Private constructor
    Singleton() {
        std::cout << "Singleton instance created.\n";
    }

    // Delete copy constructor and assignment
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

public:
    static Singleton* getInstance() {
        if (instance == nullptr)
            instance = new Singleton();
        return instance;
    }

    void showMessage() {
        std::cout << "Hello from Singleton!" << std::endl;
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->showMessage();

    Singleton* s2 = Singleton::getInstance();
    std::cout << (s1 == s2) << std::endl; // Will print 1 (true)
    return 0;
}