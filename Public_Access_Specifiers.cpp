#include<iostream>

using namespace std;

class student
{
	public:
		//Data members
		int id;
		string name;
		float per;

		//Member functions
		void getDetails()
		{
			cout<<"Enter Id:";
			cin>>id;
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Percentage:";
			cin>>per;
		}
		void display()
		{
			cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl<<"Percentage: "<<per<<endl;
		}
};

int main()
{
	student stud1, stud2, stud3;
	stud1.id = 20;
	stud1.getDetails();
	stud1.display();
	
	return 0;
}
