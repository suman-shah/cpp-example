#include <iostream>
using namespace std;

class MyClass {   // The class
  public:         // Public access specifier
    int x;        // Public attribute (int variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.x = 15;

  // Print values
  cout << myObj.x; 
  return 0;
}
