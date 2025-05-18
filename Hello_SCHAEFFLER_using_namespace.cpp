#include<iostream>

using namespace std;

int main()
{
	int num = 10;
	
	//<< --> insertion operator
	//:: --> scope resolution operator
	cout<<"Hello SCHAEFFLER"<<endl;
	cout<<"Value :"<<num<<endl;
	cout<<"Enter Value :";
	
	//>> --> extraction operator
	cin>>num;
	cout<<"Value :"<<num<<endl;
	
	return 0;
}
