#include <iostream>
using namespace std;

class sample
{
	int a,b;
	public:
		void read ( void );
		friend void sum ( sample );
};

void sample::read ( void )
{
	cout <<	"Enter a value : ";
	cin >> a >> b;
	cout << endl;
}

void sum ( sample s )
{
	cout << "The sum of " << s.a << " and " << s.b << " is " << s.a+s.b << endl;
}

int main()
{
	sample obj;
	obj.read();
	sum(obj);
	return 0;
}
