// C++ program to illustrate the race conditions 
#include <iostream>
#include <thread>
// import mutex from C++ standard library
#include <mutex>

using namespace std;


// Create object for mutex
mutex mtx;

// Shared resource
int number = 0;

// function to increment the number
void increment(){
   // mtx.lock(); // Locks here

    // increment number by 1 for 1000000 times
     lock_guard<mutex> lock(mtx); // Locks here
    for(int i=0; i<1000000; i++){
        number++;
    }

    //mtx.unlock(); // Unlocks here (not needed with lock_guard)
}

int main()
{
    // Create thread t1 to perform increment()
    thread t1(increment);
    
    // Create thread t2 to perform increment()
    thread t2(increment);
    
    // Start both threads simultaneously
    t1.join();
    t2.join();
    
    // Print the number after the execution of both threads
    cout << "Number after execution of t1 and t2 is " << number << endl;
    
    return 0;
}