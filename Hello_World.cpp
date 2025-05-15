#include<iostream>

int main()
{
	int num = 10;
	
	//<< --> insertion operator
	//:: --> scope resolution operator
	std::cout<<"Hello World"<<std::endl;
	std::cout<<"Value :"<<num<<std::endl;
	std::cout<<"Enter Value :";
	
	//>> --> extraction operator
	std::cin>>num;
	std::cout<<"Value :"<<num<<std::endl;
	
	return 0;
}
