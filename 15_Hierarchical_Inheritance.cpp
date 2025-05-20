#include<iostream>
using namespace std;

class shape
{
	public:
	int length, breadth, height, radius;
	float area;

	void print_area()
        {
                cout << " Area: " << area << endl;
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
	cout << "Rectangle";
	R1.print_area();

	Circle C1;
	C1.C_area(5);
	cout << "Circle";
        C1.print_area();

	Triangle T1;
        T1.T_area(5, 4);
        cout << "Circle";
        T1.print_area();

	return 0;
}
