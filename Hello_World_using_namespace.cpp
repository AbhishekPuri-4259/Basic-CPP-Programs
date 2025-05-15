#include<iostream>

using namespace std;

int main()
{
	int num = 10;
	
	//<< --> insertion operator
	//:: --> scope resolution operator
	cout<<"Hello World"<<endl;
	cout<<"Value :"<<num<<endl;
	cout<<"Enter Value :";
	
	//>> --> extraction operator
	cin>>num;
	cout<<"Value :"<<num<<endl;
	
	return 0;
}
