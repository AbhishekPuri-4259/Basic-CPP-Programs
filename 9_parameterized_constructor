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
        car(string cbrand, string ctype, string ccolor, float cmileage)
        {
                car_brand = cbrand;
                car_type = ctype;
                car_color = ccolor;
                car_mileage = cmileage;
        }

        void display()
        {
                cout<<endl<<"************************";
                cout<<endl<<"Brand: "<<car_brand<<endl<<"Type: "<<car_type<<endl<<"Color: "<<car_color<<endl<<"Mileage: "<<car_mileage<<"kmpl"<<endl;
        }
};

int main()
{
        car customer1("Mahindra", "SUV", "Blue", 16.57);
        car customer2("Hyundai", "Hatchback", "Red", 19.50);
        car customer3("Skoda", "Sedan", "White", 18.73);

        customer1.display();
        customer2.display();
        customer3.display();

        return 0;
}
