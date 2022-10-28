#include<iostream>
using namespace std;

class comp
{
  int r, i;
  
  public:
  
    void input()
    {
      cout << "Enter real & imaginary parts : ";
      cin >> r >> i;
    }
    
    void display()
    {
      cout << "Real = " << r << endl;
      cout << "Imaginary = " << i << endl;
      cout << r <<  "+i" << i << endl;
    }
    
    comp operator +(comp c2)
    {
      comp c3;
      c3.r = r + c2.r;
      c3.i = i + c2.i;
      return c3;
    }
    
};

int main()
{
  comp b1, b2, b3;
  
  b1.input();
  b2.input();
  
  b3 = b1 + b2;
  
  b3.display();
  
  return 0; 
}

// Input/Ouput:
//
// Enter real & imaginary parts : 2 3
// Enter real & imaginary parts : 4 5
// Real = 6
// Imaginary = 8
// 6+i8
