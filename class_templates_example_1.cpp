#include <iostream>
using namespace std;

template <class t>
class sample
{
	t a;
	public:
		void read ( void )
		{
			cin >> a;
		}
		void print ( void )
		{
			cout << "a = " << a <<endl;
		}
};

int main()
{
	sample <string> a;
	cout << "Enter a string : ";
	a.read();
	a.print();
	return 0;
}
