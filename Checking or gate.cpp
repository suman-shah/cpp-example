#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter no."<<endl;
	cin>>a;
	if((a == 1)||(a ==2)){
		cout<<"True"<<endl;
	}else if(a == (3||4)){
		cout<<"Very True"<<endl;
	}else{
		cout<<"False"<<endl;
	}
	return 0;
}
