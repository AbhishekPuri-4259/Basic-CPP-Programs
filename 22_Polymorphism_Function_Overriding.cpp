#include<iostream>
using namespace std;

class i20_era
{
	public:
	string engine_type = "1.2 l Kappa";
	string fuel_type = "Petrol";
	string max_power = "82 bhp @ 6000 rpm";
	string max_torque = "114.7 Nm @ 4200 rpm";

	float era_price = 7.04;

	void Car_common_features()
	{
		cout << endl << "******************************************************************************************************" << endl;
		cout << "Engine: " << engine_type << endl;
		cout << "Fuel: " << fuel_type << endl;
		cout << "Max Power: " << max_power << endl;
		cout << "Max Torque: " << max_torque << endl;
	}

	void Car_started(int powerwindow, int cruisecontrol, int pushbuttonstart)
	{
		cout << "Era variant of i20 started" << endl;

		powerwindow ? cout << "Power windows Supported" << endl : cout << "Power windows not Supported" << endl;
		cout << "ex_showroom price: " << era_price << "Lakh" << endl;
	}
};

class i20_magna : public i20_era
{
	public:
	float magna_price = 7.79;

	void Car_started(int powerwindow, int cruisecontrol, int pushbuttonstart)
        {

		cout << "Magna variant of i20 started" << endl;

		powerwindow ? cout << "Power windows Supported" << endl : cout << "Power windows not Supported" << endl;
		cruisecontrol ? cout << "Cruise control supported" << endl : cout << "Cruise control not Supported" << endl;

		cout << "ex_showroom price: " << magna_price << "Lakh" << endl;
	}
};

class i20_sportz : public i20_era 
{
	public:
	float sportz_price = 8.42;

	void Car_started(int powerwindow, int cruisecontrol, int pushbuttonstart)
        {
                cout << "Sportz variant of i20 started" << endl;

		powerwindow ? cout << "Power windows Supported" << endl : cout << "Power windows not Supported" << endl;
		cruisecontrol ? cout << "Cruise control Supported" << endl : cout << "Cruise control not Supported" << endl;
        	pushbuttonstart ? cout << "Engine Start/Stop button Supported" << endl : cout << "Engine Start/Stop button not Supported" << endl;

		cout << "ex_showroom price: " << sportz_price << "Lakh" << endl;
	}
};

class i20_asta : public i20_era
{
	public:
	float asta_price = 9.38;
	
	void Car_started(int powerwindow, int cruisecontrol, int pushbuttonstart)
        {
                cout << "Asta variant of i20 started" << endl;

		powerwindow ? cout << "Power windows Supported" << endl : cout << "Power windows Supported" << endl;
		cruisecontrol ? cout << "Cruise control Supported" << endl : cout << "Cruise control Supported" << endl;
        	pushbuttonstart ? cout << "Engine Start/Stop button Supported" << endl : cout << "Engine Start/Stop button not Supported" << endl;

		cout << "ex_showroom price: " << asta_price << "Lakh" << endl;
	}

};

int main()
{
	i20_era customer1;
	customer1.Car_common_features();
	customer1.Car_started(0, 0, 0);

	i20_magna customer2;
	customer2.Car_common_features();
	customer2.Car_started(1, 0, 0);

	i20_sportz customer3;
	customer3.Car_common_features();
	customer3.Car_started(1, 1, 0);

	i20_asta customer4;
	customer4.Car_common_features();
	customer4.Car_started(1, 1, 1);

	return 0;
}
