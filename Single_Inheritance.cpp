#include<iostream>
using namespace std;

class Rectangle
{
	public:
	int length;
	int breadth;
	float area;

	void R_area(int l, int b)
	{
		area = l * b;
	}

	void print_area()
	{
		cout << " Area: " << area << endl;
	}
};

class Cuboid : public Rectangle
{
	public:
	int height;

	void C_area(int l, int b, int h)
        {
                area = l * b * h;
        }
};

int main()
{
	Rectangle R1;
	R1.R_area(5, 4);
	cout << "Rectangle";
	R1.print_area();

	Cuboid C1;
	C1.C_area(5, 4, 3);
	cout << "Cuboid";
        C1.print_area();
}
