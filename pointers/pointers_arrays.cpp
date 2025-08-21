#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "arr (address of arr[0]): " << arr << endl;
    cout << "&arr[0]: " << &arr[0] << endl;

    cout << "First element: " << arr[0] << endl;
    cout << "First element via pointer: " << *arr << endl;
    cout << "Second element via pointer: " << *(arr + 1) << endl;

    return 0;
}
