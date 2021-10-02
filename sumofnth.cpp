#include <iostream>
using namespace std;

long long sum(int n)
{
	if(n<1) 
		return 0;
	
	return n+sum(n-1);
}

int main()
{
	int n;
	
	cout<<"Enter number: ";
	cin>>n;
	
	cout<<"Sum of "<<n<<" natural numbers is equal to "
<<sum(n)<<endl;

	return 0;
}
