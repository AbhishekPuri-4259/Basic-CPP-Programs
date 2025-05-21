#include<iostream>
using namespace std;

class shape
{
	public:
	float area;

	void print_area(int opt)
        {
		if (opt == 1)
		{
                	cout << "Area of Rectangle: " << area << endl;
		}
		else if (opt == 2)
		{
                	cout << "Area of Circle: " << area << endl;
		}
		else if (opt == 3)
		{
                	cout << "Area of Triangle: " << area << endl;
		}
        }

};

class Rectangle : public shape
{
	public:
	void R_area(int l, int b)
	{
		area = l * b;
	}
};

class Circle : public shape
{
        public:
        void C_area(int r)
        {
                area =  3.14 * r * r;
        }
};

class Triangle : public shape
{
	public:
	void T_area(int b, int h)
        {
                area = 0.5 * b * h;
        }
};

int main()
{
	Rectangle R1;
	R1.R_area(5, 4);
	R1.print_area(1);

	Circle C1;
	C1.C_area(5);
        C1.print_area(2);

	Triangle T1;
        T1.T_area(5, 4);
        T1.print_area(3);

	return 0;
}
