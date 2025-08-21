#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m = {{2, "For"}, {3, "Feeks"}};

    // Inserting a key value pair
    m.insert({1, "Geeks"});
    m.insert({4, "Hello"});
    m.insert({5, "World"});

    for (auto x: m){
       cout << x.first << " " << x.second
        << endl;
    }

       
    return 0;
}