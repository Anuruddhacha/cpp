#include <bits/stdc++.h>
using namespace std;

// Function to be run 
// by the thread
void func(int n) {
    cout << n << endl;
}

int main() {
    
    // Create a thread that runs 
    // the function func
    //thread t(func, 4);


     // Create a thread that runs 
    // a lambda expression
    int n = 3;
    thread t([](int n){
        cout << n * 2 << endl;
    }, n);
    
    // Wait for thread to finish
    t.join();
    return 0;
}