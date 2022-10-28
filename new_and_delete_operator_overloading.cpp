#include <iostream> 
using namespace std;

class student
{
    string name;
    int age;
	public:
		student(string name, int age)
		{
			this->name = name;
			this->age = age;
		}
		void display()
		{
			cout<< "Name:" << name << endl;
			cout<< "Age:" << age << endl;
		}
		void * operator new(size_t size)
		{
			void * p = ::operator new(size);     
			return p;
		}
		void operator delete(void * p)
		{
			cout<< endl << "Overloading delete operator " << endl;
			free(p);
		}
};
 
int main()
{
	int age;
	string name;
	
	cout << "Enter your name : ";
	cin >> name;
	cout << "Enter your age : ";
	cin >> age;
	cout << endl;
	
    student * p = new student(name, age);
    p->display();
    delete p;
    
    return 0;
}
