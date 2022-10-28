/*

Write a C++ program to add two integers, 
two floating point numbers and two characters using class templates with diff types.

*/

#include <iostream>
using namespace std;

template <class T>

class sample
{
	T x,y;
	public:
		void read ( void )
		{
			cin >> x >> y;
		}
		void sum ( void )
		{
			cout << "Sum = " << x+y << endl;
		}
};

int main()
{
	sample <int> i;
	sample <float> f;
	sample <string> c;
  
	cout << "Enter two integers  : ";
	i.read();
  
	i.sum();
  
	cout << "Enter two floating point numbers  : ";
	f.read();
  
	f.sum();
  
	cout << "Enter two characters  : ";
	c.read();
  
	c.sum();
  
	return 0;
}
	
