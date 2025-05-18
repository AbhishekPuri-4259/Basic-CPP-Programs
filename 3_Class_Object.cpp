#include<iostream>
#include<string>

using namespace std;

class car
{
	public:
		
	//Data members
	string car_brand;
	string car_type;
	string car_color;
	float car_mileage;
	
	//Member functions
	void start()
	{
		cout<<"Start the Engine"<<endl;
	}

	void stop()
	{
		cout<<"Stop the Engine"<<endl;
		cout<<"************************";
	}

	void accelerate()
	{
		cout<<"Accelerate"<<endl;
	}

	void display()
	{
		cout<<endl<<"************************";
		cout<<endl<<"Brand: "<<car_brand<<endl<<"Type: "<<car_type<<endl<<"Color: "<<car_color<<endl<<"Mileage: "<<car_mileage<<"kmpl"<<endl;
	}
};

int main()
{
	car xuv7OO, i20, slavia;
	int opt;

	cout<<"Pick your car"<<endl;
	cout<<"1.XUV7OO"<<endl<<"2.i20"<<endl<<"3.Slavia"<<endl<<endl;

	cin>>opt;

	switch(opt)
	{
		case 1 : xuv7OO.car_brand = "Mahindra";
			 xuv7OO.car_type = "SUV";
			 xuv7OO.car_color = "Blue";
			 xuv7OO.car_mileage = 16.57;

			 xuv7OO.display();
			 xuv7OO.start();
			 xuv7OO.accelerate();
			 xuv7OO.stop();
			 break;

                case 2 : i20.car_brand = "Hyundai";
                         i20.car_type = "Hatchback";
                         i20.car_color = "Red";
                         i20.car_mileage = 19.50;

                         i20.display();
			 i20.start();
                         i20.accelerate();
                         i20.stop();
                         break;

                case 3 : slavia.car_brand = "Skoda";
                         slavia.car_type = "Sedan";
                         slavia.car_color = "White";
                         slavia.car_mileage = 18.73;

                         slavia.display();
			 slavia.start();
                         slavia.accelerate();
                         slavia.stop();
                         break;


		default: cout<<"Invalid Option"<<endl;
			 break;
	}
	
	return 0;
}
