#include <iostream>
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
      cout << "Result : " << r << "+i" << i << endl;
    } 

    comp operator + (comp c2) 
    { 
      comp c3; 
      c3.r = r + c2.r; 
      c3.i = i + c2.i;
      return c3; 
    }

    comp operator - (comp c2) 
    { 
      comp c3; 
      c3.r = r - c2.r; 
      c3.i = i - c2.i;
      return c3; 
    }

    comp operator * (comp c2) 
    { 
      comp c3; 
      c3.r = r*c2.r + i*c2.i; 
      c3.i = i*c2.r + r*c2.i;
      return c3; 
    }

    comp operator / (comp c2) 
    { 
      comp c3; 
      c3.r = ( r*c2.r + i*c2.i ) / ( c2.r*c2.r + c2.i*c2.i ); 
      c3.i = ( r*c2.i - i*c2.r ) / ( c2.r*c2.r + c2.i*c2.i );
      return c3; 
    }
}; 

void option ( comp b1, comp b2, comp &b3 )
{
	int n;
  
	cout << endl << "Options:" << endl << endl;
	cout << "1.Addition" << endl;
	cout << "2.Subtraction" << endl;
	cout << "3.Multiplication" << endl;
	cout << "4.Division" << endl;
  
	cout << "Enter your option : ";
	cin >> n;
  
	switch ( n )
	{
		case 1 : b3 = b1+b2; break;
		case 2 : b3 = b1-b2; break;
		case 3 : b3 = b1*b2; break;
		case 4 : b3 = b1/b2; break;
	}
  
	return ;
}
	
int main() 
{ 
	comp b1,b2,b3; 
  
	b1.input(); 
	b2.input();
  
	option(b1,b2,b3);
  
	b3.display(); 
  
	return 0;
} 
