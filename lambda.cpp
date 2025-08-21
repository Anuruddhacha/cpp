#include <iostream>
using namespace std;

int main() {

    //   [capture-clause] (parameters) -> return-type { 
    //   definition
    //   }

    int a = 1, b = 3;
    
    // Defining a lambda
    auto res = [&a, &b](int x) {
        return x + x + a + b;
    };
    cout << res(5) << endl;
    
    return 0;
}