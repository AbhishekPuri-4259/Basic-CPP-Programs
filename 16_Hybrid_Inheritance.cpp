#include<iostream>
using namespace std;

class shape
{
        public:
        virtual void display_shape()
        {
                cout << "This is a Shape" << endl;
        }
};

class twoDshape : virtual public shape
{
        public:
        int area;

        void display_2D()
        {
                cout << "This is a 2D Shape" << endl;
        }
};

class threeDshape : virtual public shape
{
        public:
        int volume;

        void display_3D()
        {
                cout << "This is a 3D Shape" << endl;
        }
};

class Rectangle : public twoDshape
{
        public:
        void rarea(int l, int b)
        {
                area = l * b;
                cout << "Area: " << area << endl;
        }
};

class Cuboid : public twoDshape, public threeDshape
{
        public:
        void cvolume(int l, int b, int h)
        {
                volume = l * b * h;
                cout << "Volume: " << volume << endl;
        }
};

int main()
{
        Rectangle R1;
        R1.display_shape();
        R1.display_2D();
        R1.rarea(5, 4);

        cout << "**************" << endl;

        Cuboid C1;
        C1.display_shape();
        C1.display_2D();
        C1.display_3D();
        C1.cvolume(5, 4, 3);

        return 0;
}
