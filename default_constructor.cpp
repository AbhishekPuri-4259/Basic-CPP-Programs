#include<iostream>
#include<string>

using namespace std;

class car
{
        public:

        string car_brand;
        string car_type;
        string car_color;
        float car_mileage;

        //Constructor
        car()
        {
                car_brand = "xuv7OO";
                car_type = "SUV";
                car_color = "Blue";
                car_mileage = 16.57;
        }

        void display()
        {
                cout<<endl<<"************************";
                cout<<endl<<"Brand: "<<car_brand<<endl<<"Type: "<<car_type<<endl<<"Color: "<<car_color<<endl<<"Mileage: "<<car_mileage<<"kmpl"<<endl;
        }
};

int main()
{
        car customer1, customer2, customer3;

        customer1.display();
        customer2.display();
        customer3.display();

        return 0;
}
