#include<iostream>
#include<string>

using namespace std;

class car
{
        private:
        //Data members
        string car_brand;
        string car_type;
        string car_color;
        float car_mileage;

        public:
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

        void display(string cbrand, string ctype, string ccolor, float cmileage)
        {
                car_brand = cbrand;
                car_type = ctype;
                car_color = ccolor;
                car_mileage = cmileage;
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
                case 1 : xuv7OO.display("Mahindra", "SUV", "Blue",16.57);
                         xuv7OO.start();
                         xuv7OO.accelerate();
                         xuv7OO.stop();
                         break;

                case 2 : i20.display("Hyundai", "Hatchback", "Red", 19.50);
                         i20.start();
                         i20.accelerate();
                         i20.stop();
                         break;

                case 3 : slavia.display("Skoda", "Sedan", "White", 18.73);
                         slavia.start();
                         slavia.accelerate();
                         slavia.stop();
                         break;


                default: cout<<"Invalid Option"<<endl;
                         break;
        }

        return 0;
}
