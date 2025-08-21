#include <iostream>
#include <memory>
using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() { return length * breadth; }
};

int main() {

    unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout << P1->area() << endl;

    unique_ptr<Rectangle> P2;

    // Copy the addres of P1 into p2
    P2 = move(P1);

   if(P1 == NULL){
    cout << "P1 is NULL" << endl; //P1 is null after moving
   }

  std::unique_ptr<int> intPtr(new int(42));
  cout << "intPtr : " << *intPtr << endl; // Outputs: 42

  std::unique_ptr<int[]> arrayPtr(new int[5]{1, 2, 3, 4, 5});
  cout << "arrayPtr[0] : " << arrayPtr[0] << endl; // Outputs: 1



    cout << P2->area();
    return 0;
}